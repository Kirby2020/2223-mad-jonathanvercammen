using CloudLoginUnity;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

public class LoginController : MonoBehaviour {  
    [SerializeField] private GameObject loadingMenu;
    [SerializeField] private TMP_Text errorText;
    [SerializeField] private TMP_InputField emailInput;
    [SerializeField] private TMP_InputField passwordInput;
    [SerializeField] private Button loginButton;

    private FireBaseRestController fireBaseRestController;
    private bool isLoading = false;


    private void Awake() {
        loginButton.onClick.AddListener(onClickLogin);
    }

    private void Start() {
        fireBaseRestController = GameObject.Find("Firebase Cloud Service").GetComponent<FireBaseRestController>();
        fireBaseRestController.LoggedIn.AddListener(OnLoggedIn);
    }

    public void onClickLogin() {
        if (isLoading) return;
        errorText.text = "";
        StartLoading();

        string email = emailInput.text;
        string password = HashPassword(passwordInput.text);

        SignIn(email, password);
    }

    private async void SignIn(string email, string password) {
        if (email == "" || password == "") {
            errorText.text = "Please fill in all fields";
            StopLoading();
            return;
        }

        try {
            await fireBaseRestController.Signin(email, password);
        } catch (UnityException e) {
            errorText.text = e.InnerException?.Message ?? e.Message ?? e.ToString();
        } finally {
            StopLoading();
        }
    }

    private void OnLoggedIn() {
        StopLoading();
    }

    private void StartLoading() {
        isLoading = true;
        loginButton.interactable = false;
        loadingMenu.SetActive(true);
    }

    private void StopLoading() {
        isLoading = false;
        loginButton.interactable = true;
        loadingMenu.SetActive(false);
    }

    private string HashPassword(string pass) {
        if (pass == "") return "";
        var hash = new Hash128();
        hash.Append(pass);

        return hash.ToString();
    }
}

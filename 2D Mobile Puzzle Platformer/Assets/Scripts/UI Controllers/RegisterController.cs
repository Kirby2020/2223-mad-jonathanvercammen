using CloudLoginUnity;
using System;
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel.Design;
using System.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

public class RegisterController : MonoBehaviour {   
    [SerializeField] private GameObject     loadingMenu;
    [SerializeField] private TMP_Text       errorText;
    [SerializeField] private TMP_InputField usernameInput;
    [SerializeField] private TMP_InputField emailInput;
    [SerializeField] private TMP_InputField passwordInput;
    [SerializeField] private TMP_InputField passwordConfirmationInput;
    [SerializeField] private Button         registerButton;

    private FireBaseRestController fireBaseRestController;
    private bool isLoading = false;

    private void Awake() {
        registerButton.onClick.AddListener(onClickRegister);
    }

    private void Start() {
        fireBaseRestController = GameObject.Find("Firebase Cloud Service").GetComponent<FireBaseRestController>();
        fireBaseRestController.Registered.AddListener(OnRegistered);
    }

    public void onClickRegister() {
        if (isLoading) return;
        errorText.text = "";
        StartLoading();

        string username = usernameInput.text;
        string email = emailInput.text;
        string password = HashPassword(passwordInput.text);
        string passwordConfirmation = HashPassword(passwordConfirmationInput.text);

        SignUp(username, email, password, passwordConfirmation);
    }

    private async void SignUp(string username, string email, string password, string passwordConfirmation) {   
        if (username == "" || email == "" || password == "" || passwordConfirmation == "") {
            errorText.text = "Please fill in all fields";
            StopLoading();
            return;
        }
        if (password != passwordConfirmation) {
            errorText.text = "Passwords do not match";
            StopLoading();
            return; 
        }

        try {  
            await fireBaseRestController.Signup(username, email, password);
        } catch (UnityException e) {
            errorText.text = e.InnerException?.Message ?? e.Message ?? e.ToString();
        } finally {
            StopLoading();
        }
    }

    private void OnRegistered() {
        StopLoading();
    }

    private void StartLoading() {
        isLoading = true;
        registerButton.interactable = false;
        loadingMenu.SetActive(true);
    }

    private void StopLoading() {
        isLoading = false;
        registerButton.interactable = true;
        loadingMenu.SetActive(false);
    }

    private string HashPassword(string pass) {
        if (pass == "") return "";
        var hash = new Hash128();
        hash.Append(pass);

        return hash.ToString();
    }
}

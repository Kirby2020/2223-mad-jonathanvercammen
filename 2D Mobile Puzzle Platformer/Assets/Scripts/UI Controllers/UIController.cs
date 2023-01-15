using CloudLoginUnity;
using Firebase.Auth;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using Unity.Services.Authentication;
using Unity.Services.Core;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

public class UIController : MonoBehaviour {
    private FireBaseRestController fireBaseRestController;
    // All UI is still template
    [SerializeField] private GameObject LoadingMenu;
    [SerializeField] private GameObject StartMenu;
    [SerializeField] private GameObject MainMenu;
    [SerializeField] private GameObject NormalModeMenu;
    [SerializeField] private LoginController LoginController;
    [SerializeField] private RegisterController RegisterController;


    private void Start() {
        if (FirebaseAuth.DefaultInstance.CurrentUser != null) {
            OpenWindow(MainMenu);
        } else {
            OpenWindow(StartMenu);
        }
        fireBaseRestController = GameObject.Find("Firebase Cloud Service").GetComponent<FireBaseRestController>();
        fireBaseRestController.LoggedIn.AddListener(OnLoggedIn);
        fireBaseRestController.Registered.AddListener(OnRegistered);
    }

    public void Logout() {
        fireBaseRestController.Logout();
        OpenWindow(StartMenu);
    }
    #region Events

    private void OnLoggedIn() {
        OpenMainMenu();
    }

    private void OnRegistered() {
        Debug.Log("Registered");
        OpenPopup(LoginController.gameObject);
    }

    #endregion

    #region Windows

    public void OpenWindow(GameObject window) {
        CloseAllWindows();
        CloseAllPopups();
        window.SetActive(true);
    }

    public void OpenPopup(GameObject popup) {
        Debug.Log("Open Popup");
        CloseAllPopups();
        popup.SetActive(true);
    }

    public void OpenMainMenu() {
        OpenWindow(MainMenu);
    }

    public void OpenLevelSelectionMenu() {
        SceneManager.LoadScene("Level Selector");   
    }

    public void OpenLeaderboardMenu() {
        Debug.Log("Open Leaderboard");
        SceneManager.LoadScene("Leaderboard");
    }

    public void CloseAllWindows() {
        LoadingMenu.SetActive(false);
        StartMenu.SetActive(false);
        MainMenu.SetActive(false);
        NormalModeMenu.SetActive(false);
    }

    public void CloseAllPopups() {
        LoginController.gameObject.SetActive(false);
        RegisterController.gameObject.SetActive(false);
    }

    #endregion

    public void Exit() {
        Application.Quit();
    }
}

using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using Unity.Services.Authentication;
using Unity.Services.Core;
using UnityEngine;
using UnityEngine.SceneManagement;

/// <summary>
/// Initializes all connections to Unity cloud services
/// </summary>
public class UnityCloudService : MonoBehaviour {
    private readonly PlayerPrefsData _playerPrefsData = new PlayerPrefsData();

    async void Awake() {
        // Check if the services are already initialized
        if (UnityServices.State == ServicesInitializationState.Initialized) return;

        await UnityServices.InitializeAsync();
        Debug.Log("Unity Services " + UnityServices.State);
        SetupEvents();

        // clear session token
        // AuthenticationService.Instance.SignOut(true);
    }

    private void Start() {
        _ = SignInAnonymouslyAsync();
    }

    // Automatically creates local account
    // Can be linked later to an online account
    private async Task SignInAnonymouslyAsync() {
        Debug.Log("Signing in...");

        if (AuthenticationService.Instance.SessionTokenExists) {
            // Retreive player data
            Debug.Log("User already exists. Recovering player data..."); 
            RetreivePlayerData();
        } else {
            // Create player data
            Debug.Log("Creating new player data...");
            CreatePlayerData();
        }

        try {
            await AuthenticationService.Instance.SignInAnonymouslyAsync();
            Debug.Log("Sign in anonymously succeeded!");

        } catch (AuthenticationException ex) {
            // Compare error code to AuthenticationErrorCodes
            // Notify the player with the proper error message
            Debug.LogError("Error signing in: " + ex.ErrorCode);
            switch (ex.ErrorCode) {
                case 10000: SceneManager.LoadSceneAsync("Main Menu"); break;
            }
        } catch (RequestFailedException ex) {
            // Compare error code to CommonErrorCodes
            // Notify the player with the proper error message
            // Error menu
            SceneManager.LoadSceneAsync("Main Menu");
            Debug.LogException(ex);
        }
    }

    private void CreatePlayerData() {
        _playerPrefsData.CreateEmptyPlayerData();
        RetreivePlayerData();
    }

    private void RetreivePlayerData() {
        _playerPrefsData.GetPlayerData();
    }

    # region Event Handlers
    // Setup authentication event handlers if desired
    private void SetupEvents() {
        AuthenticationService.Instance.SignedIn += OnSignedIn;
        AuthenticationService.Instance.SignInFailed += (err) => OnSignInFailed(err);
        AuthenticationService.Instance.SignedOut += OnSignedOut;
        AuthenticationService.Instance.Expired += OnSessionExpired;
    }

    private void OnSignedIn() {
        // Shows how to get a playerID
        Debug.Log($"PlayerID: {AuthenticationService.Instance.PlayerId}");
        SceneManager.LoadSceneAsync("Main Menu");
    }

    private void OnSignInFailed(RequestFailedException err) {
        Debug.LogException(err);
    }

    private void OnSignedOut() {
        Debug.Log("Player signed out.");
        SceneManager.LoadSceneAsync("Main Menu");
    }

    private void OnSessionExpired() {
        Debug.LogWarning("Player session could not be refreshed and expired.");
    }
    # endregion
}

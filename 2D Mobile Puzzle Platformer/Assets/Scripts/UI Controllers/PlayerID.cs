using System.Collections;
using System.Collections.Generic;
using Firebase.Auth;
using TMPro;
using Unity.Services.Authentication;
using UnityEngine;

public class PlayerID : MonoBehaviour {
    private FirebaseUser user;
    private TMP_Text playerIDText;
    private void Awake() {
        playerIDText = GetComponent<TMP_Text>();
        user = FirebaseAuth.DefaultInstance.CurrentUser;
    }

    private void OnEnable() {
        playerIDText.text = $"Player ID: {user?.DisplayName}" ?? "Offline";
    }
}

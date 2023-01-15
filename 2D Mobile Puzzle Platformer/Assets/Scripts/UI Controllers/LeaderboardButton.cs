using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LeaderboardButton : MonoBehaviour {
    private Firebase.Auth.FirebaseAuth auth;
    void Start(){
        auth = Firebase.Auth.FirebaseAuth.DefaultInstance;
        auth.StateChanged += AuthStateChanged;
        gameObject.SetActive(auth?.CurrentUser != null);  
    }

    void AuthStateChanged(object sender, System.EventArgs eventArgs) {
        gameObject.SetActive(auth?.CurrentUser != null );  
    }
}

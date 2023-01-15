using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Auth;
using Firebase.Database;
using UnityEngine.SceneManagement;
using System.Threading.Tasks;
using UnityEngine.Networking;

public class FireBaseCloudController : MonoBehaviour {
    private FirebaseApp app;
    private FirebaseAuth auth;
    private FirebaseUser user;
    private DatabaseReference db;

    private const string API_KEY = "AIzaSyA1_BfKMqMoaxetGhHPb0PZpAcLt3MhQTA";
    private const string PROJECT_ID = "puzzle-sense";
    private const string DATABASE_NAME = "(default)";
    private string baseUrl = $"https://firestore.googleapis.com/v1/projects/{PROJECT_ID}/databases/{DATABASE_NAME}/documents";

    private void Start() {
        DontDestroyOnLoad(this.gameObject);

        Initialize();
    }

    private void Initialize() {
        try {
            StartCoroutine(InitFirebase());
            StartCoroutine(InitAuthentication());
            StartCoroutine(InitDatabase());

            Debug.Log("All modules initialized");
            SceneManager.LoadSceneAsync("Main Menu");
        } catch (UnityException e) {
            Debug.LogError(e.Message);
        }
    }

    private IEnumerator InitFirebase() {
        Debug.Log("Init Firebase");
        FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task => {
            Debug.Log("Fixed dependencies");
            var dependencyStatus = task.Result;
            if (dependencyStatus == Firebase.DependencyStatus.Available) {
                // Create and hold a reference to your FirebaseApp,
                app = FirebaseApp.DefaultInstance;

                // Set a flag here to indicate whether Firebase is ready to use by your app.
                Debug.Log("Firebase is ready");
            }
            else {
                Debug.LogError(System.String.Format(
                  "Could not resolve all Firebase dependencies: {0}", dependencyStatus));
                // Firebase Unity SDK is not safe to use here.
                throw new UnityException("Unable to connect to Firebase");
            }
        });

        if (app == null) app = FirebaseApp.Create();
        
        yield return null;
    }

    private IEnumerator InitAuthentication() {
        Debug.Log("Init Authentication");
        auth = FirebaseAuth.DefaultInstance;
        user = auth.CurrentUser;
        Debug.Log("Authentication is ready");

        yield return null;
    }

    private IEnumerator InitDatabase() {
        Debug.Log("Init Database");
        db = FirebaseDatabase.DefaultInstance.RootReference;
        Debug.Log("Database is ready");

        yield return null;
    }

    private void OnApplicationQuit() {
        Debug.Log("OnApplicationQuit");
        if (app == null) return;
        app.Dispose();
        auth.Dispose();
    }

    private void Authenticate() {
        string url = $"https://identitytoolkit.googleapis.com/v1/accounts:signInWithCustomToken?key={API_KEY}";

        var request = UnityWebRequest.Get(url);
        request.SetRequestHeader("Content-Type", "application/json");
        request.method = UnityWebRequest.kHttpVerbGET;
        
        request.SendWebRequest().completed += (asyncOperation) => {
            if (request.result != UnityWebRequest.Result.Success) {
                Debug.Log(request.error);
            } else {
                var response = JsonUtility.FromJson<SignInResult>(request.downloadHandler.text);
                Debug.Log(response);                
            }
        };
    }
}

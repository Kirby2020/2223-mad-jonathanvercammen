using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using Proyecto26;
using Firebase.Extensions;
using Firebase.Auth;
using Firebase;
using UnityEngine.SceneManagement;
using UnityEngine.Events;
using System.Threading.Tasks;
using System;
using Firebase.Firestore;
using Google.MiniJSON;
using Newtonsoft.Json;

public class FireBaseRestController : MonoBehaviour {  
    public static FireBaseRestController Instance { get; private set; }
    private readonly PlayerPrefsData _playerPrefsData = new PlayerPrefsData();

    private FirebaseApp app;
    private FirebaseAuth auth;
    private FirebaseFirestore firestore;

    private FirebaseUser user;
    private CollectionReference playersCollection;
    private DocumentReference playerDataDocument;
    private List<LeaderboardEntry> leaderboardEntries;


    public UnityEvent Registered;
    public UnityEvent LoggedIn;
    public UnityEvent LeaderboardLoaded;
    

    private async void Awake() {
        DontDestroyOnLoad(this.gameObject);

        Registered = new UnityEvent();
        LoggedIn = new UnityEvent();
        LeaderboardLoaded = new UnityEvent();

        LoggedIn.AddListener(OnLoggedIn);

        if (Instance != null && Instance != this)
            Destroy(this.gameObject);
        else {
            Instance = this;
            await InitFirebase();
            await LoadPlayerData();
        }
    }

    private void OnLoggedIn() {
        playersCollection = firestore.Collection("players");
        playerDataDocument = playersCollection.Document(auth.CurrentUser.UserId);
    }

    private async Task InitFirebase() {
        Debug.Log("Firebase is initializing...");

        await FirebaseApp.CheckAndFixDependenciesAsync().ContinueWithOnMainThread(task => {
            var dependencyStatus = task.Result;

            if (dependencyStatus == Firebase.DependencyStatus.Available) {
                // Create and hold a reference to your FirebaseApp,
                // where app is a Firebase.FirebaseApp property of your application class.
                app = FirebaseApp.DefaultInstance;
                auth = FirebaseAuth.DefaultInstance;
                firestore = FirebaseFirestore.DefaultInstance;
                
                // Set a flag here to indicate whether Firebase is ready to use by your app.
                Debug.Log("Firebase is ready to use");  

            } else {
                Debug.LogError(System.String.Format(
                    "Could not resolve all Firebase dependencies: {0}", dependencyStatus));
                // Firebase Unity SDK is not safe to use here.
            }

            SceneManager.LoadSceneAsync("Main Menu");
        });
    }

    /// <summary>
    /// Loads the player data from the cloud.
    /// If the player data does not exist, it creates a new one.
    /// </summary> 
    private async Task LoadPlayerData() {
        if (auth.CurrentUser == null) {
            Debug.Log("Player is not logged in.");
            return;
        }

        if (playerDataDocument == null) {
            OnLoggedIn();
            return;
        }

        Debug.Log("Loading player data...");
        await playerDataDocument.GetSnapshotAsync().ContinueWithOnMainThread(task => {
            if (task.IsCanceled) {
                Debug.LogError("Loading player data was canceled.");
                return;
            }
            if (task.IsFaulted) {
                Debug.LogError("Error when loading player data: " + task.Exception);
                return;
            }

            DocumentSnapshot snapshot = task.Result;
            if (snapshot.Exists) {
                Debug.Log("Player data loaded successfully!");
                _playerPrefsData.SetPlayerData(snapshot.ToDictionary());
            } else {
                Debug.Log("Player data does not exist.");
                _playerPrefsData.CreateEmptyPlayerData();
                SavePlayerData();
            }
        });
    }

    /// <summary>
    /// Saves the player data to the cloud.
    /// </summary>
    public async void SavePlayerData() {
        if (auth.CurrentUser == null) {
            Debug.Log("Player is not logged in.");
            return;
        }

        if (playerDataDocument == null) {
            OnLoggedIn();
            return;
        }

        string playerData = _playerPrefsData.GetPlayerDataJson();
        Dictionary<string, object> playerDataDict = new Dictionary<string, object> {
            { "username", GetUsername() },
            { "gameData", playerData }
        };
        
        Debug.Log("Saving player data...");
        await playerDataDocument.SetAsync(playerDataDict).ContinueWithOnMainThread(task => {
            if (task.IsCanceled) {
                Debug.LogError("Saving player data was canceled.");
                return;
            }
            if (task.IsFaulted) {
                Debug.LogError("Error when saving player data: " + task.Exception);
                return;
            }

            Debug.Log("Player data saved successfully!");
        });
    }

    public async void FetchLeaderboardEntries(int limit = 100) {
        if (auth.CurrentUser == null) {
            Debug.Log("Player is not logged in.");
            return;
        }

        if (playersCollection == null) {
            OnLoggedIn();
            return;
        }

        Debug.Log("Getting leaderboard entries...");
        await playersCollection.Limit(limit).GetSnapshotAsync().ContinueWithOnMainThread(task => {
            if (task.IsCanceled) {
                Debug.LogError("Getting leaderboard entries was canceled.");
                return;
            }
            if (task.IsFaulted) {
                Debug.LogError("Error when getting leaderboard entries: " + task.Exception);
                return;
            }

            QuerySnapshot snapshot = task.Result;
            leaderboardEntries = new List<LeaderboardEntry>();
            foreach (DocumentSnapshot document in snapshot.Documents) {
                Dictionary<string, object> data = document.ToDictionary();

                GameData gameData = JsonConvert.DeserializeObject<GameData>(data["gameData"].ToString());
                string username = data["username"].ToString();
                
                foreach (KeyValuePair<string, LevelData> kvp in gameData.Levels) {
                    int level = int.Parse(kvp.Key.Split('_')[1]);
                    LevelData levelData = kvp.Value;
                    float time = levelData.Time / 100f;
                    bool[] coins = levelData.Coins;
                    var entry = new LeaderboardEntry(username, level, time, coins);
                    Debug.Log($"level: {level}, time: {time}");
                    leaderboardEntries.Add(entry);
                }
            }
            leaderboardEntries.Sort((x, y) => {
                int levelComparison = x.GetLevel().CompareTo(y.GetLevel());
                if (levelComparison != 0)
                    return levelComparison;
                else
                    return x.GetTime().CompareTo(y.GetTime());
            });
            LeaderboardLoaded?.Invoke();
        });
    }

    public List<LeaderboardEntry> GetLeaderboardEntries() {
        return leaderboardEntries;
    }

    public async void AnonymousSignin() {
        await auth.SignInAnonymouslyAsync().ContinueWithOnMainThread(task => {
            if (task.IsCanceled) {
                Debug.LogError("Anonymous signin was canceled.");
                return;
            }
            if (task.IsFaulted) {
                Debug.LogError("Error when signing in anonymously: " + task.Exception);
                return;
            }

            user = task.Result;
            Debug.LogFormat("Firebase user signed in anonymously successfully: {0} ({1})", user.DisplayName, user.UserId);
        });

        LoggedIn?.Invoke();
    }
    
    public async Task Signup(string username, string email, string password) {
        Debug.Log("Creating user profile...");
        try {
            await auth.CreateUserWithEmailAndPasswordAsync(email, password).ContinueWithOnMainThread(task => {
                if (task.IsCanceled) {
                    throw new UnityException("Signup was canceled.");
                }
                if (task.IsFaulted) {
                    throw new UnityException("Error when signing up: ", task.Exception.InnerExceptions[0].InnerException);
                }

                // Firebase user has been created.
                user = task.Result;
                Debug.LogFormat("Firebase user created successfully: {0} ({1})", user.DisplayName, user.UserId);
            });

            Debug.Log("Updating user profile...");
            // update user profile
            UserProfile profile = new UserProfile { DisplayName = username };

            await user?.UpdateUserProfileAsync(profile).ContinueWithOnMainThread(task => {
                if (task.IsCanceled) {
                    throw new UnityException("UpdateUserProfileAsync was canceled.");
                }
                if (task.IsFaulted) {
                    throw new UnityException("Error when updating user profile: " + task.Exception.InnerExceptions[0].InnerException);
                }

                Debug.LogFormat("Firebase user updated successfully: {0} ({1})", user.DisplayName, user.UserId);
            });
        } catch(UnityException e) {
            throw e;
        }
        
        Debug.Log("Signed up!");
        Registered?.Invoke();
    }

    public async Task Signin(string email, string password) {
        Debug.Log("Signing in...");
        try {
            await auth.SignInWithEmailAndPasswordAsync(email, password).ContinueWithOnMainThread(task => {
                if (task.IsCanceled) {
                    throw new UnityException("Signin was canceled.");
                }
                if (task.IsFaulted) {
                    throw new UnityException("Error when signing in: " + task.Exception.InnerExceptions[0].InnerException);
                }

                user = task.Result;
                Debug.LogFormat("Firebase user signed in successfully: {0} ({1})", user.DisplayName, user.UserId);
            });
        } catch(UnityException e) {
            throw e;
        }

        Debug.Log("Signed in!");
        LoggedIn?.Invoke();
    }

    public void Logout() {
        auth.SignOut();
        user = null;
    }

    private FirebaseUser GetUser() {
        user = auth.CurrentUser;
        return user;
    }

    public string GetUsername() {
        if (user == null) {
            user = GetUser();
        }
        return user?.DisplayName ?? "Anonymous";
    }

    /**
    private void GetMessages() {
        string url = baseUrl + "/messages";
        UnityWebRequest request = UnityWebRequest.Get(url);
        request.SetRequestHeader("Content-Type", "application/json");
        request.SetRequestHeader("Bearer", API_KEY);

        request.method = UnityWebRequest.kHttpVerbGET;
        request.SendWebRequest().completed += (asyncOperation) =>
        {
            if (request.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError(request.error);
                Debug.LogError(request.responseCode);
                Debug.LogError(request.downloadHandler.text);
            }
            else
            {
                Debug.Log(request.downloadHandler.text);
            }
        };
    }

    private void Signup(string email, string password) {
        string url = $"https://identitytoolkit.googleapis.com/v1/accounts:signUp?key={API_KEY}";

        object json = new {
            email = email,
            password = password,
            returnSecureToken = true
        };

        string jsonString = Newtonsoft.Json.JsonConvert.SerializeObject(json);

        UnityWebRequest request = UnityWebRequest.Head(url);
        request.SetRequestHeader("Content-Type", "application/json");
        request.uploadHandler = new UploadHandlerRaw(System.Text.Encoding.UTF8.GetBytes(jsonString));
        request.downloadHandler = new DownloadHandlerBuffer();

        request.method = UnityWebRequest.kHttpVerbPOST;
        request.SendWebRequest().completed += (asyncOperation) =>
        {
            if (request.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError(request.error);
                Debug.LogError(request.responseCode);
                Debug.LogError(request.downloadHandler.text);
            }
            else
            {
                Debug.Log(request.downloadHandler.text);
            }
        };
    }

    private void Authenticate() {
        string url = $"https://identitytoolkit.googleapis.com/v1/accounts:signInWithCustomToken?key={API_KEY}";
        string json = @$"{{
            ""token"": ""{API_KEY}"",
            ""returnSecureToken"": true
        }}";

        Debug.Log(json);

        json = "{\"token\":\"[CUSTOM_TOKEN]\",\"returnSecureToken\":true}";

        UnityWebRequest request = UnityWebRequest.Post(url, "");
        request.uploadHandler = new UploadHandlerRaw(System.Text.Encoding.UTF8.GetBytes(json));
        request.SetRequestHeader("Content-Type", "application/json");
        
        request.method = UnityWebRequest.kHttpVerbPOST;
        request.SendWebRequest().completed += (asyncOperation) =>
        {
            if (request.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError(request.error);
                Debug.LogError(request.responseCode);
                Debug.LogError(request.downloadHandler.text);
            }
            else
            {
                Debug.Log(request.downloadHandler.text);
            }
        };
    }
*/
}

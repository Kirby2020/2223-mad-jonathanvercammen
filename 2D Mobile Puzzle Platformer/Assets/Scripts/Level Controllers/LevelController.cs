using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Unity.Services.Authentication;
using Unity.Services.Core;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelController : MonoBehaviour {
    private readonly PlayerPrefsData _playerPrefsData;
    private FireBaseRestController fireBaseRestController;

    private GUIController guiController;
    public PlayerController Player;

    [SerializeField] private bool enableLightSensor = false;
    [SerializeField] private bool enableGravitySensor = false;

    void Awake() {
        fireBaseRestController = GameObject.Find("Firebase Cloud Service").GetComponent<FireBaseRestController>();
        SensorController sensorController = Player.GetComponent<SensorController>();

        if (enableLightSensor) sensorController.EnableLightSensor();
        if (enableGravitySensor) sensorController.EnableGravitySensor();
    }

    private void Start() {
        guiController = GameObject.Find("GUI").GetComponent<GUIController>();
    }

    public void StartLevel() {
        guiController.StartTimer();
    }

    public void PauseLevel() {
        Player.ToggleMovement(false);
    }

    public void ResumeLevel() {
        Player.ToggleMovement(true);
    }

    public void RestartLevel() {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    public void CompleteLevel(bool hasWon) {
        guiController.StopTimer();
        // TODO: Disable input UI, dont freeze movement
        Debug.Log("Level finished by " + fireBaseRestController.GetUsername() + " with time " + guiController.GetTime());

        Coin[] collectedCoins = Player.GetCollectedCoins();
        guiController.ShowPostLevelScreen(hasWon, collectedCoins);

        int time = Mathf.RoundToInt(guiController.GetTime() * 100);
        string level = SceneManager.GetActiveScene().name;
        bool[] coins = collectedCoins.Select(coin => coin != null).ToArray();

        GameData gameData = _playerPrefsData.GetPlayerData();
        Debug.Log(gameData);
        if (gameData == null) return; 
        gameData.SetLevelData(level, new LevelData(coins, time, hasWon));
        Debug.Log(gameData);

        _playerPrefsData.SetPlayerData(gameData);
        fireBaseRestController.SavePlayerData();
    }
}

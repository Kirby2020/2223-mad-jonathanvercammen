using System.Collections.Generic;
using Newtonsoft.Json;
using UnityEngine;

public struct PlayerPrefsData {
    public static string CompletedLevelsKey { get; private set; } = "COMPLETED_LEVELS";
    public static GameData PlayerData { get; private set; }

    public string GetJson() {
        return SerializeGameData(PlayerData);
    }

    public void CreateEmptyPlayerData() {
        PlayerData = new GameData();
        string json = SerializeGameData(PlayerData);
        Debug.Log("Created new player data: " + json);
        PlayerPrefs.SetString(CompletedLevelsKey, json);
    }

    public GameData GetPlayerData() {
        string json = GetPlayerDataJson();
        PlayerData = DeserializeGameData(json);
        return PlayerData;
    }

    public string GetPlayerDataJson() {
        string json = PlayerPrefs.GetString(CompletedLevelsKey);
        Debug.Log("Retreived player data: " + json);
        return json;
    }

    public void SetPlayerData(GameData gameData) {
        string json = SerializeGameData(gameData);
        PlayerPrefs.SetString(CompletedLevelsKey, json);    
        GetPlayerData();
    }

    public void SetPlayerData(Dictionary<string, object> gameData) {
        var data = DeserializeGameData(gameData["gameData"].ToString());
        SetPlayerData(data);
    }

    private string SerializeGameData(GameData gameData) {
        return JsonConvert.SerializeObject(gameData, Formatting.Indented);
    }

    private GameData DeserializeGameData(string json) {
        // All fields need to be public for this to work...
        return JsonConvert.DeserializeObject<GameData>(json);
    }
}


/*
@"
    {
        levels: {
            level1: {
                coins: {
                    1: 0,
                    2: 1,
                    3: 0,
                },
                time: 56,
            },
            level2: {
                coins: {
                    1: 1,
                    2: 1,
                    3: 1,
                },
                time: 35,
            },
        },
    }"
*/

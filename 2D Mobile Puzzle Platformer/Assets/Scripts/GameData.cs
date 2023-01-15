using System.Collections.Generic;

[System.Serializable]
public class GameData {
    public Dictionary<string, LevelData> Levels { get; set; }
    public int CompletedLevels { get; set; }

    public GameData() {
        var levelData = new LevelData();

        Levels = new Dictionary<string, LevelData>();

        CompletedLevels = Levels.Count;
    }

    public GameData(Dictionary<string, LevelData> levels) {
        Levels = levels;
    }

    public GameData(Dictionary<string, object> data) {
        var gameData = data["gameData"] as Dictionary<string, object>;
        UnityEngine.Debug.Log("gameData: " + gameData);
        // print all keys
        foreach (var key in gameData.Keys) {
            UnityEngine.Debug.Log(key);
        }
        Levels = gameData["Levels"] as Dictionary<string, LevelData>;
        CompletedLevels = (int) gameData["CompletedLevels"];
    }

    public void SetLevelData(string level, LevelData levelData) {
        Levels[level] = levelData;
        CompletedLevels = Levels.Count;
    }

    public override string ToString() {
        return "GameData{" +
                "Levels=" + Levels.ToString() +
                ", CompletedLevels=" + CompletedLevels
                + '}';
    }
}

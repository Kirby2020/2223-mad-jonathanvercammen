using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelSelectionUIController : MonoBehaviour {
    public void OpenMainMenu() {
        SceneManager.LoadScene("Loading Menu");
        SceneManager.LoadSceneAsync("Main Menu");
    }

    public void OpenLeaderboardMenu() {
        SceneManager.LoadScene("Loading Menu");
        SceneManager.LoadSceneAsync("Leaderboard");
    }

    public void LoadLevel(int level) {
        SceneManager.LoadScene("Loading Menu");
        SceneManager.LoadSceneAsync("Level_" + level);
    }
}

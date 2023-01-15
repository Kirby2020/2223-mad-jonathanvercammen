using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

/*
 * Controller that handles all in-game GUI components such as
 * Joystick
 * Jump button
 * Sprint button
 * Pause button
 * timer
 */
public class GUIController : MonoBehaviour {
    private PostLevelUIController postLevelController;
    private PauseLevelUIController pauseLevelController;
    private Timer timer;

    private void Awake() {
        postLevelController = GetComponentInChildren<PostLevelUIController>(true);
        pauseLevelController = GetComponentInChildren<PauseLevelUIController>(true);
        timer = GetComponentInChildren<Timer>();
    }

    public float GetTime() {
        return timer.GetTime();
    }

    public void ShowPostLevelScreen(bool hasWon, Coin[] collectedCoins) {
        postLevelController.Show(hasWon, collectedCoins);
    }

    public void StopTimer() {
        timer.StopTimer();
    }

    public void StartTimer() {
        timer.StartTimer();
    }

    public void PauseLevel() {
        StopTimer();
        pauseLevelController.Show();
    }

    public void ResumeLevel() {
        // timer also starts before start trigger
        StartTimer();
        pauseLevelController.Hide();
    }

    public void OpenLevelSelector() {
        SceneManager.LoadScene("Level Selector");
    }

    public void RestartLevel() {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }

}

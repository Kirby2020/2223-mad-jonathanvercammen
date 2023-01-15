using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using System;

public class Timer : MonoBehaviour {
    private TMP_Text timerText;
    private float time;
    private bool isActive;

    private void Awake() {
        time = 0;
        isActive = false;
        timerText = GetComponentInChildren<TMP_Text>();
    }

    // Update is called once per frame
    void Update() {
        if (!isActive) return;
        time += Time.deltaTime;
        timerText.text = GetFormattedTime(time);
    }

    // time in seconds
    private string GetFormattedTime(float seconds) {
        string time = Math.Round(seconds, 2).ToString();
        time = time.Replace(',', ':');
        return time;
    }

    public float GetTime() {
        return (float)Math.Round(time, 2);
    }

    public void StartTimer() {
        isActive = true;
    }

    public void StopTimer() {
        isActive = false;
    }
}

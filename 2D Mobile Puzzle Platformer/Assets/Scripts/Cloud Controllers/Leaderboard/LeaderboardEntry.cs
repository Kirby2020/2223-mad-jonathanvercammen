using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LeaderboardEntry {
    private string name;
    private int level;
    private float time;
    private bool[] coins;

    public LeaderboardEntry(string playerName, int level, float time, bool[] coins) {
        this.name = playerName;
        this.level = level;
        this.time = time;
        this.coins = coins;
    }

    public string GetName() {
        return name;
    }

    public int GetLevel() {
        return level;
    }

    public float GetTime() {
        return time;
    }

    public bool[] GetCoins() {
        return coins;
    }
}

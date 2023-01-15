using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Events;

public class Leaderboard {
    private static Leaderboard instance;
    private FireBaseRestController fireBaseRestController;
    private List<LeaderboardEntry> entries;

    public UnityEvent LeaderboardLoaded = new UnityEvent();


    private Leaderboard() {
        entries = new List<LeaderboardEntry>();

        fireBaseRestController = GameObject.Find("Firebase Cloud Service").GetComponent<FireBaseRestController>();
        fireBaseRestController.LeaderboardLoaded.AddListener(OnEntriesFetched);
        fireBaseRestController.FetchLeaderboardEntries();
    }

    public static Leaderboard Instance {
        get {
            if (instance == null) {
                instance = new Leaderboard();
            }
            return instance;
        }
    }

    private void OnEntriesFetched() {
        entries = fireBaseRestController.GetLeaderboardEntries();
        entries.AddRange(GenerateMockEntries(100));
        LeaderboardLoaded.Invoke();
    }

    private List<LeaderboardEntry> GenerateMockEntries(int limit) {
        var mockEntries = new List<LeaderboardEntry>();

        for (int i = 1; i <= 5; i++) {
            var levelEntries = GenerateLevelEntries(i);
            mockEntries.AddRange(levelEntries);
        }

        this.entries.AddRange(mockEntries.GetRange(0, Mathf.Min(limit, mockEntries.Count)));
        return mockEntries;
    }


    private List<LeaderboardEntry> GenerateLevelEntries(int level) {
        var entries = new List<LeaderboardEntry>();

        for (int i = 0; i < 30; i++) {
            float time = UnityEngine.Random.Range(2000, 10000) / 100f;
            bool[] coins = new bool[3];

            for (int j = 0; j < coins.Length; j++) {
                coins[j] = UnityEngine.Random.Range(0, 2) == 0;
            }
            entries.Add(new LeaderboardEntry("Player " + i, level, time, coins));
        }

        return entries;
    }

    public List<LeaderboardEntry> GetEntries(int level, int limit = 100) {
        var levelEntries = new List<LeaderboardEntry>();

        entries = new List<LeaderboardEntry>(new HashSet<LeaderboardEntry>(entries));   // Remove duplicates

        entries.Sort((x, y) => {
            if (x.GetTime() == y.GetTime()) {
                x.GetCoins().Length.CompareTo(y.GetCoins().Length);
            }
            return x.GetTime().CompareTo(y.GetTime());
        });

        foreach (var entry in entries) {
            if (entry.GetLevel() == level) {
                levelEntries.Add(entry);
            }
        }

        return levelEntries.GetRange(0, Mathf.Min(limit, levelEntries.Count));
    }

    public void FetchEntries() {
        fireBaseRestController.FetchLeaderboardEntries();
    }

    public void AddEntry(LeaderboardEntry entry) {
        entries.Add(entry);
    }
}

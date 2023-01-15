using System.Collections.Generic;

[System.Serializable]
public class LevelData {
    public bool[] Coins { get; set; }
    public int Time { get; set; }
    public bool Completed { get; set; }

    public LevelData() {
        var coins = new bool[] {
            false,
            false,
            false,
        };

        Coins = coins;
        Time = 0;
        Completed = false;
    }

    public LevelData(bool[] coins, int time, bool completed) {
        Coins = coins;
        Time = time;
        Completed = completed;
    }

    public void SetTime(int time) {
        Time = time;
    }

    public void SetCoin(int coin, bool collected) {
        Coins[coin] = collected;
    }

    public void SetCompleted(bool completed) {
        Completed = completed;
    }

    public override string ToString() {
        return "LevelData{" +
                "Coins=" + Coins +
                ", Time=" + Time +
                ", Completed=" + Completed +
                '}';
    }
}

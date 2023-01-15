using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LeaderboardEntryController : MonoBehaviour {
    [SerializeField] private TMPro.TextMeshProUGUI positionText;
    [SerializeField] private TMPro.TextMeshProUGUI nameText;
    [SerializeField] private TMPro.TextMeshProUGUI timeText;
    [SerializeField] private GameObject coinsObject;

    public void SetPosition(int position) {
        positionText.text = position.ToString();
    }

    public void SetName(string name) {
        nameText.text = name;
    }

    public void SetTime(float time) {
        timeText.text = time.ToString();
    }

    public void SetCoins(bool[] coins) {
        var sprites = Resources.LoadAll<Sprite>("Sprites");
        var coinSprites = coinsObject.GetComponentsInChildren<Image>();

        int i = 0;
        foreach (var coin in coins) {
            coinSprites[i].sprite = coin ? sprites[24] : sprites[25];
            i++;
        }
        
    }
}

using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class PostLevelUIController : MonoBehaviour {
    private Transform content;
    private Image[] coins;
    private Sprite[] sprites;

    private void Awake() {
        content = transform.Find("Content");
        coins = content.Find("Coins").GetComponentsInChildren<Image>();
        sprites = Resources.LoadAll<Sprite>("Sprites");
    }

    void Start() {
        content.gameObject.SetActive(false);
    }

    public void Show(bool hasWon, Coin[] collectedCoins) {
        content.gameObject.SetActive(true);
        content.Find("Title").GetComponent<TMP_Text>().text = hasWon ? "You Won!" : "You Lost!"; 
        if (hasWon) {
            EnableNextLevelButton();
        } else {
            DisableNextLevelButton();
        }
        for (int i = 0; i < coins.Length; i++) {
            if (collectedCoins[i] != null) 
                coins[i].sprite = sprites[24] as Sprite;
        }
    }

    private void DisableNextLevelButton() {
        var nextButton = content.Find("Buttons/NextButton");
        nextButton.GetComponent<Button>().interactable = false;
        nextButton.GetComponent<Image>().color = new Color(0.5f, 0.5f, 0.5f, 1f);
        var icon = nextButton.Find("Icon");
        icon.GetComponent<Image>().color = new Color(0.5f, 0.5f, 0.5f, 1f);
    }

    private void EnableNextLevelButton() {
        var nextButton = content.Find("Buttons/NextButton");
        nextButton.GetComponent<Button>().interactable = true;
        nextButton.GetComponent<Image>().color = new Color(1f, 1f, 1f, 1f);
        var icon = nextButton.Find("Icon");
        icon.GetComponent<Image>().color = new Color(1f, 1f, 1f, 1f);
    }

    public void LoadNextLevel() {
        int currentLevel = Int32.Parse(SceneManager.GetActiveScene().name.Split('_')[1]);
        int nextLevel = currentLevel + 1;
        PlayerPrefs.SetInt("HighestLevel", nextLevel);
        SceneManager.LoadScene("Loading Menu");
        SceneManager.LoadSceneAsync("Level_" + nextLevel);
    }

    public void Hide() {
        content.gameObject.SetActive(false);
    }
}

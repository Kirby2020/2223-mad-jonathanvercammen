using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coin : MonoBehaviour {
    private int coinID;

    private void Awake() {
        coinID = int.Parse(transform.name);
    }

    public void OnTriggerEnter2D(Collider2D collision) {
        if (collision.tag != "Player") return;

        var player = collision.GetComponent<PlayerController>();
        player.Collect(this);
        GetComponent<BoxCollider2D>().enabled = false;
        GetComponent<SpriteRenderer>().enabled = false;
        transform.Find("Light").gameObject.SetActive(false);
    }

    public int GetIndex() {
        return coinID - 1;
    }

    public int GetID() {
        return coinID;
    }
}

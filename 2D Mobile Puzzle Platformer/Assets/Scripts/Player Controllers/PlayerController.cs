using System;
using UnityEngine;

public class PlayerController : MonoBehaviour {
    private SpriteRenderer spriteRenderer;
    private MovementController movementController;
    private SensorController sensorController;

    private Coin[] collectedCoins;


    private void Awake() {
        spriteRenderer = GetComponent<SpriteRenderer>();
        movementController = GetComponent<MovementController>();
        sensorController = GetComponent<SensorController>();
        collectedCoins = new Coin[3];
    }

    public void ToggleMovement(bool state) {
        movementController.ToggleMovement(state);
    }

    public Vector2 GetGravityDirection() {
        return sensorController.GetGravityDirection();
    }

    public void Collect(Coin coin) {
        collectedCoins[coin.GetIndex()] = coin;
        Debug.Log("Collected coin: " + coin.GetIndex());
    }
    
    public Coin[] GetCollectedCoins() {
        return collectedCoins;
    }
}

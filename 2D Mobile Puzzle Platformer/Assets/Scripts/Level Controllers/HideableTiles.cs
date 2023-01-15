using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.Tilemaps;

public class HideableTiles : MonoBehaviour {
    private const int LIGHT_TRESHOLD = 10;
    [SerializeField] private bool visibleWhenLight;
    private LightSensor lightSensor;
    private TilemapRenderer renderer;
    private TilemapCollider2D collider;

    private void Awake() {
        renderer = GetComponent<TilemapRenderer>();
        collider = GetComponent<TilemapCollider2D>();

        lightSensor = LightSensor.current;
        if (lightSensor == null) return;

        InputSystem.EnableDevice(lightSensor);
        lightSensor.samplingFrequency = 60f;
    }

    // Update is called once per frame
    void Update() {
        if (lightSensor == null) {
            renderer.enabled = false;
            collider.enabled = false;
            return;
        }
        float lightLevel = lightSensor.lightLevel.ReadValue();

        if (lightLevel <= LIGHT_TRESHOLD && visibleWhenLight || lightLevel > LIGHT_TRESHOLD && !visibleWhenLight) {
            renderer.enabled = false;
            collider.enabled = false;
        } else {
            renderer.enabled = true;
            collider.enabled = true;
        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.InputSystem;


public class SensorController : MonoBehaviour {
    [SerializeField] private Text debugText;

    private LinearAccelerationSensor accelerometer; // Acceleration without gravity
    private AttitudeSensor attitudeSensor;          // Orientation
    private ProximitySensor proximitySensor;

    private GravitySensor gravitySensor;            // Rotation
    private LightSensor lightSensor;

    private void Awake() {
        try {
            InitSensors();
        } catch {
            Debug.LogWarning("Not running on phone");
        }
    }

    private void Update() {
        // if (debugText != null) SetDebugText();
    }

    public Vector2 GetGravityDirection() {
        Vector2 gravity = new Vector2(0f, -3000f);

        if (gravitySensor == null || !gravitySensor.enabled) return gravity;

        float x = gravitySensor.gravity.ReadValue().x;
        float y = gravitySensor.gravity.ReadValue().y; 

        gravity = new Vector2(x, y).normalized * 1000;

        return gravity;
    }

    public void EnableGravitySensor() {
        Debug.Log("Enabling Gravity Sensor");
        gravitySensor = GravitySensor.current;
        if (gravitySensor == null) return;
        InputSystem.EnableDevice(gravitySensor);
    }

    public void EnableLightSensor() {
        if (lightSensor == null) return;
        InputSystem.EnableDevice(lightSensor);
    }

    private void InitSensors() {
        Debug.Log("Loading Sensors");
        accelerometer = LinearAccelerationSensor.current;
        attitudeSensor = AttitudeSensor.current;
        gravitySensor = GravitySensor.current;
        proximitySensor = ProximitySensor.current;
        lightSensor = LightSensor.current;

        debugText.text = "Sensors Loaded";
        lightSensor.samplingFrequency = 10;
    }

    private void SetDebugText() {
        float lightLevel = lightSensor?.lightLevel.ReadValue() ?? 0;
        GetComponent<SpriteRenderer>().color = new Color(0.5f, lightLevel / 2, lightLevel);
        debugText.text = $"Light: {lightLevel}";
        debugText.text += $"\nGravity: {gravitySensor?.gravity.ReadValue()}";

        debugText.text += $"\nGravitySensor: {gravitySensor}";
        // check if sensor is enabled
        debugText.text += $"\nGravitySensorEnabled: {gravitySensor?.enabled}";

        // debugText.text = $"Acceleration: {accelerometer?.acceleration.ReadValue()}";
        // debugText.text += $"\nLight: {lightLevel}";
        // debugText.text += $"\nGravity: {gravitySensor?.gravity.ReadValue()}";
        // debugText.text += $"\norientation: {attitudeSensor?.attitude.ReadValue()}";
        // debugText.text += $"\nProximity: {proximitySensor?.distance.ReadValue()}";
        // debugText.text += $"\nColor: {GetComponent<SpriteRenderer>().color}";

        debugText.text += $"\nGrounded: {GetComponent<MovementController>().IsGrounded()}";
    }

}

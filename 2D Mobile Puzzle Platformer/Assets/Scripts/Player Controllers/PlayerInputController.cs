using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerInputController : MonoBehaviour {
    [SerializeField] private Transform joystick;
    [SerializeField] private Transform jumpButton;
    [SerializeField] private Transform sprintButton;
    private void Awake() {
        joystick = transform.Find("Joystick");
        jumpButton = transform.Find("JumpButton");
        sprintButton = transform.Find("SprintButton");
    }

    private void Start() {
        InitJoystick();
        InitJumpButton();
        InitSprintButton();
    }

    private void InitJumpButton() {
        float buttonSize = 80;
        Vector2 position = new Vector2(-50, 50);

        var centerArea = jumpButton.GetComponent<RectTransform>();
        centerArea.anchoredPosition = position;
    }

    private void InitSprintButton() {
        float buttonSize = 60;
        Vector2 position = new Vector2(-250, 50);

        var centerArea = sprintButton.GetComponent<RectTransform>();
        centerArea.anchoredPosition = position;
    }

    private void InitJoystick() {
        float joystickSize = 128;
        Vector2 center = new Vector2(0, 0);
        Vector2 position = new Vector2(50, 50);
        var centerArea = joystick.Find("Center").GetComponent<RectTransform>();
        centerArea.pivot = center;
        centerArea.anchoredPosition = position;
    }
}

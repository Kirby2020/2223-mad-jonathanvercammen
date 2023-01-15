using System;
using UnityEngine;
using UnityEngine.InputSystem;

public class MovementController : MonoBehaviour {
    private const int MOVEMENT_FORCE = 100;
    private const int MAX_VELOCITY = 7;
    private const int MAX_SPRINT_VELOCITY = 10;
    private const int TERMINAL_VELOCITY = 600;
    private const int JUMP_STRENGTH = 30; // ~3 tiles


    private PlayerController playerController;
    private PlayerInput playerInput;
    private InputAction movementAction;
    private InputAction jumpAction;
    private InputAction sprintAction;

    private Rigidbody2D playerBody;
    public LayerMask terrainMask;

    private bool grounded;
    private Vector2 gravity;


    private void Awake() {
        playerController = GetComponent<PlayerController>();
        playerBody = GetComponent<Rigidbody2D>();
        playerInput = GetComponent<PlayerInput>();

        movementAction = playerInput.actions.FindAction("Movement");
        jumpAction = playerInput.actions.FindAction("Jump");
        sprintAction = playerInput.actions.FindAction("Sprint");
    }

    // Start is called before the first frame update
    void Start() {
        playerBody.gravityScale = 0;

        grounded = false;
        gravity = new Vector2(0f, -3000f);
    }

    // Update is called once per frame
    void FixedUpdate() {
        CheckGround();
        HandleGravity();

        if (jumpAction.inProgress && grounded) Jump();
        if (movementAction.inProgress) Move();
        else HandleMovementResistance();
    }

    private void HandleGravity() {
        // TODO: Set direction by accelerometer
        SetGravityDirection();
        // Terminal velocity is reached
        if (Mathf.Abs(playerBody.velocity.sqrMagnitude) > TERMINAL_VELOCITY && !grounded) return;
        playerBody.AddForce(gravity * Time.deltaTime);
    }

    private void SetGravityDirection() {
        gravity = playerController.GetGravityDirection();
    }

    private void HandleMovementResistance() {
        if (!grounded) return;
        float resistance = FindTileResistance();
        playerBody.AddForce(-playerBody.velocity * resistance * Time.deltaTime, ForceMode2D.Impulse);
    }

    private void Jump() {
        grounded = false;
        playerBody.velocity = new Vector2(playerBody.velocity.x, 0f); // Negate y velocity for consistant jump height
        playerBody.AddForce(GetUpwardsDirection() * JUMP_STRENGTH, ForceMode2D.Impulse);
    }

    private Vector2 GetUpwardsDirection() {
        return gravity.y < 0 ? Vector2.up : Vector2.down;
    }

    private void CheckGround() {
        float offsetX = 0.05f;
        float offsetY = 0.03f;

        float x0 = transform.position.x - transform.localScale.x / 2 + offsetX;
        float x1 = transform.position.x + transform.localScale.x / 2 - offsetX;
        float y0 = transform.position.y - transform.localScale.y / 2;
        float y1 = transform.position.y + transform.localScale.y / 2;

        Vector2 pointA = new Vector2(x0, y0 + offsetY);
        Vector2 pointB = new Vector2(x1, y0 - offsetY);
        Vector2 pointC = new Vector2(x0, y1 - offsetY);
        Vector2 pointD = new Vector2(x1, y1 + offsetY);

        var hitBottom = Physics2D.OverlapArea(pointA, pointB, terrainMask);
        var hitTop = Physics2D.OverlapArea(pointC, pointD, terrainMask);

        var hit = gravity.y <= 0 ? hitBottom : hitTop;
        grounded = hit != null;
    }


    private void Move() {
        Vector2 inputVector = movementAction.ReadValue<Vector2>();
        Vector2 movementVector = new Vector2();
        float inputTreshold = 0.1f;

        float maxVelocity = sprintAction.inProgress ? MAX_SPRINT_VELOCITY : MAX_VELOCITY;

        // Max speed reached
        if (Mathf.Abs(playerBody.velocity.x) >= maxVelocity) return;
        // Joystick not far enough
        if (Mathf.Abs(inputVector.x) < inputTreshold) return;

        movementVector = inputVector.x > inputTreshold ? Vector2.right : Vector2.left;

        movementVector.y = 0;
        playerBody.AddForce(movementVector * MOVEMENT_FORCE * Time.deltaTime, ForceMode2D.Impulse);
    }

    private float FindTileResistance() {
        // TODO: Set direction by accelerometer
        var hit = Physics2D.Raycast(transform.position, Vector2.down, 1f, terrainMask);
        float tileResistance = 1f;
        if (!hit) return tileResistance;

        switch (hit.transform.tag) {
            case "NormalGround" : tileResistance = 10f; break;
            case "SlipperyGround": tileResistance = 0f; break;
            default: tileResistance = 1f; break;
        }
        return tileResistance;
    }

    public bool IsGrounded() {
        return grounded;
    }

    public void ToggleMovement(bool state) {
        playerBody.simulated = state;
    }

    public void OnDrawGizmos() {
        float offsetX = 0.05f;
        float offsetY = 0.03f;

        float x0 = transform.position.x - transform.localScale.x / 2 + offsetX;
        float x1 = transform.position.x + transform.localScale.x / 2 - offsetX;
        float y0 = transform.position.y - transform.localScale.y / 2;
        float y1 = transform.position.y + transform.localScale.y / 2;

        Vector2 pointA = new Vector2(x0, y0 + offsetY);
        Vector2 pointB = new Vector2(x1, y0 - offsetY);
        Vector2 pointC = new Vector2(x0, y1 - offsetY);
        Vector2 pointD = new Vector2(x1, y1 + offsetY);

        Gizmos.color = Color.white;
        Gizmos.DrawLine(pointA, pointB);
        Gizmos.color = Color.blue;
        Gizmos.DrawLine(pointC, pointD);
    }
}

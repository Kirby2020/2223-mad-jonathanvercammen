using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spike : MonoBehaviour {
    private SpriteRenderer spriteRenderer;
    private BoxCollider2D boxCollider;

    [SerializeField] private Transform position1, position2;
    [SerializeField] private Direction direction;
    [SerializeField] private float speed = 2f;
    [SerializeField] private float waitTime = 0f;   

    private Dictionary<Direction, Vector3> directionVectors = new Dictionary<Direction, Vector3>() {
        { Direction.Up, Vector3.up },
        { Direction.Down, Vector3.down },
        { Direction.Left, Vector3.left },
        { Direction.Right, Vector3.right },
    };

    private Vector2 colliderPositionOffset = new Vector2(0, -0.1f);
    private Vector2 colliderSizeOffset = new Vector2(-0.04f, -0.2f);

    private void Awake() {
        spriteRenderer = GetComponentInChildren<SpriteRenderer>();
        boxCollider = GetComponentInChildren<BoxCollider2D>();

        SetBoxCollider();
    }

    private void Start() {
        if (speed == 0) return;
        Invoke("MoveAfterDelay", waitTime);
    }

    private void SetBoxCollider() {
        Vector2 colliderSize = spriteRenderer.size + colliderSizeOffset;

        boxCollider.size = colliderSize;
        boxCollider.offset = colliderPositionOffset;
    }

    private void MoveAfterDelay() {
        StartCoroutine(Move());
    }

    private IEnumerator Move() {
        float spriteHeight = spriteRenderer.size.y;

        Vector3 startPos = boxCollider.transform.position;
        Vector3 endPos = startPos - directionVectors[direction] * 1.5f * spriteHeight;
        Transform spriteTransform = spriteRenderer.transform;

        while (true) {
            yield return StartCoroutine(MoveObject(spriteTransform, startPos, endPos, speed));
            yield return StartCoroutine(MoveObject(spriteTransform, endPos, startPos, speed));
        }
    }

    private IEnumerator MoveObject(Transform spriteTransform, Vector3 startPos, Vector3 endPos, float time) {
        float i = 0.0f;
        float rate = 1.0f / time;   
        while (i < 1.0f) {
            i += Time.deltaTime * rate;
            spriteTransform.position = Vector3.Lerp(startPos, endPos, i);
            yield return null;
        }
    }
}

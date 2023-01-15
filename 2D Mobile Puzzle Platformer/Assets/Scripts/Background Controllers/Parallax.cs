using System.Collections;
using System.Collections.Generic;
using UnityEngine;
/// <summary>
/// Script for creating parallax backgrounds 
/// 
/// parallaxFactor determines how much this gameobject moves with the camera with 1 being the exact camera position
/// </summary>
public class Parallax : MonoBehaviour {
    [SerializeField] private float parallaxFactor = 0.7f;
    private Transform camera;
    private Vector3 lastPosition;

    private void Awake() {
        camera = Camera.main.transform;
    }

    void Start() {
        lastPosition = camera.position;
    }

    // Update is called once per frame
    void Update() {
        Vector3 movement = camera.position - lastPosition;
        float positionX = movement.x * parallaxFactor;
        float positionY = movement.y * parallaxFactor * 0.01f;

        transform.position -= new Vector3(positionX, positionY, 0);
        lastPosition = camera.position;
    }
}

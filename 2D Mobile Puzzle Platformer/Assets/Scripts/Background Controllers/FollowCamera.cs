using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowCamera : MonoBehaviour {
    public Transform ObjectToFollow;
    public float FollowSpeed = 0.03f;
    public float OffsetY = -2f;

    private void Start() {
        if (ObjectToFollow == null) ObjectToFollow = Camera.main.transform;
    }

    void Update() {
        float x = Mathf.Lerp(transform.position.x, ObjectToFollow.position.x, FollowSpeed);
        float y = Mathf.Lerp(transform.position.y, ObjectToFollow.position.y + OffsetY, FollowSpeed);
        float z = -1f;
        transform.position = new Vector3(x,y,z);
    }
}

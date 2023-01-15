using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartFlag : MonoBehaviour {
    [SerializeField] private LevelController levelController;

    private void Awake() {
        levelController = GetComponentInParent<LevelController>();
    }

    private void OnTriggerEnter2D(Collider2D collision) {
        levelController.StartLevel();
    }
}

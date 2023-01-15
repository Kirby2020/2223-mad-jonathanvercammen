using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PauseLevelUIController : MonoBehaviour {
    private Transform content;

    private void Awake() {
        content = transform.Find("Content");
    }

    void Start() {
        content.gameObject.SetActive(false);
    }

    public void Show() {
        content.gameObject.SetActive(true);
    }

    public void Hide() {
        content.gameObject.SetActive(false);
    }
}

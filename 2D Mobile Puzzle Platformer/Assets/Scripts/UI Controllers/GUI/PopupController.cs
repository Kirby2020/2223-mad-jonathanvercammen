using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

/*
 * This script can be attached to any GameObject with a 2D collider set as trigger
 * 
 * When a player enters this trigger, a popup will appear
 * When the player leaves the trigger, the popup will also dissapear
 * 
 * 
 * */
 
public class PopupController : MonoBehaviour {
    public GameObject PopupPrefab;
    public GameObject PopupContent;
    public string Text;

    // Start is called before the first frame update
    void Start() {
        PopupPrefab = PopupPrefab == null ? Resources.Load<GameObject>("Popup Content") : PopupPrefab;
        PopupContent = Instantiate(PopupPrefab);
        PopupContent.transform.position = transform.position + Vector3.up * 3;
        PopupContent.transform.SetParent(transform);
        PopupContent.GetComponentInChildren<TMP_Text>().SetText(ParseText(Text));
        PopupContent.GetComponent<Canvas>().sortingLayerName = "GUI";
        PopupContent.SetActive(false);
    }

    // TODO: check if collidor is player (with tag or has PlayerController)
    private void OnTriggerEnter2D(Collider2D collision) {
        PopupContent.SetActive(true);
    }

    private void OnTriggerExit2D(Collider2D collision) {
        PopupContent.SetActive(false);
    }

    private string ParseText(string text) {
        return text.Replace(@"\n", "\n");
    }
}

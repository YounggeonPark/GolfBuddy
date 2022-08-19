using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonCollider : MonoBehaviour
{
    private Button button;


    private void OnTriggerEnter(Collider other)
    {
    }

    private void OnTriggerExit(Collider other)
    {
        button = this.gameObject.GetComponent<Button>();
            Debug.Log(this.gameObject.name);
            button.onClick.Invoke();
    }
}

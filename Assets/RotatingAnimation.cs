using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotatingAnimation : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Rotate(this.gameObject, 0.5f);  
    }

    public void Rotate(GameObject obj, float speed)
    {

        obj.transform.rotation = Quaternion.Euler(obj.transform.rotation.eulerAngles + new Vector3(0f, 0f, speed));
    }
}

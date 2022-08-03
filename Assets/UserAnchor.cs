using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UserAnchor : MonoBehaviour
{
    public GameObject cameraNreal;
    public Plane floor;

    // Start is called before the first frame update
    void Start()
    {
        transform.position = cameraNreal.transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        float x = cameraNreal.transform.position.x;
        float y = cameraNreal.transform.position.y;
        float z = cameraNreal.transform.position.z;

        transform.position = new Vector3(x, y, 0);
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UserAnchor : MonoBehaviour
{
    public Transform cameraNreal;
    public Plane floor;

    // Start is called before the first frame update
    void Start()
    {
        transform.position = cameraNreal.position;
        transform.rotation = cameraNreal.rotation;
    }

    // Update is called once per frame
    void Update()
    {
        transform.position = cameraNreal.position;
        transform.rotation = cameraNreal.rotation;
    }
}

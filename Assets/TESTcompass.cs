using ARS;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TESTcompass : MonoBehaviour
{
    private Vector3 start;
    public Vector3 vec;

    private void Start()
    {
        start = Input.acceleration;
        vec = Input.acceleration;

        transform.rotation = Quaternion.Euler(0, -Input.compass.trueHeading, 0);
    }

    void Update()
    {
    }

    public void SetVec()
    {
        vec = Input.acceleration;
    }
}

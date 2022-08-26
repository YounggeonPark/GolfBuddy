using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParticleMovement : MonoBehaviour
{
    public GameObject obj;
    public Vector3 vec;

    void Update()
    {
        transform.position = obj.transform.position + vec;
    }   
}

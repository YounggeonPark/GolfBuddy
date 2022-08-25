using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UI_Ring3D : MonoBehaviour
{
    [SerializeField]public Transform user;
    [SerializeField] public Transform ring;

    // Update is called once per frame  
    void Update()
    {
        ring.position = new Vector3(user.position.x, user.position.y - 1f, user.position.z);
    }
}

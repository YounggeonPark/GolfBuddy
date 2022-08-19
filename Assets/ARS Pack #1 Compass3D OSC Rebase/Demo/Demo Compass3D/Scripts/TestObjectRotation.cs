using UnityEngine;
using ARS;

public class TestObjectRotation : MonoBehaviour
{
    void Start()
    {
        transform.rotation = Compass3D.ObjectRotation;

    }

    void Update()
    {
        //transform.rotation = Compass3D.ObjectRotation;
    }
}

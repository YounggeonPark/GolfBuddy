using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallPosUpdate : MonoBehaviour
{
    [SerializeField] RayHitPosition rayhit;

    public Vector3 realPos;
    public Vector3 unityPos;
    public float elevation;

    private void Update()
    {
        realPos = rayhit.clickGPS;
        unityPos = rayhit.hitpos_3d;
        elevation = rayhit.point_elevation;
    }
}

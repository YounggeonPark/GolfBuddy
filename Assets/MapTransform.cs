using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapTransform : MonoBehaviour
{
    public GameObject user;
    public GameObject terrain;
    public bool spawn_terrain;

    public GameObject map2d;
    public GameObject sensor;
    public GameObject weather;

    // Update is called once per frame
    void Update()
    {
        // DoF default
        pos(map2d, user, 1, -1); rot(map2d, user);
        pos(sensor, user); rot(sensor, user);
        pos(weather, user); rot(weather, user);
        terrainMove();

    }
    public void terrainMove()
    {
        pos(terrain, user, 1, -1);
    }


    private void pos(GameObject target, GameObject reference, int foward = 0, int up = 0)
    {
        target.transform.position = reference.transform.position;
        target.transform.position += foward*target.transform.forward;
        target.transform.position += up* target.transform.up;
    }

    private void rot(GameObject target, GameObject reference)
    {
        target.transform.eulerAngles = new Vector3(0, reference.transform.eulerAngles.y, 0);
    }
}

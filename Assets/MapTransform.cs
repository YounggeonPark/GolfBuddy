using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapTransform : MonoBehaviour
{
    public GameObject user;
    public GameObject terrain;
    private bool terrain_move = true;
    //public bool spawn_terrain;

    public GameObject map2d;
    public GameObject sensor;
    public GameObject weather;

    //  컨트롤러 손가락
    public GameObject fingertip;
    public GameObject fingerAnchor;

    // Update is called once per frame
    void Update()
    {
        //FT set
        //Pos(fingertip, fingerAnchor);

        // DoF default
        Pos(weather, user); Rot(weather, user);
        Pos(map2d, user, 0.5f, -1); Rot(map2d, user);
        Pos(sensor, user,0, -2); //Rot(sensor, user);
        if (terrain_move)
        {
            TerrainMove();
        }
    }
    public void TerrainMove()
    {
        Pos(terrain, user, 0.5f, -1);
    }
    public void TerrainTracking()
    {
        terrain_move = !terrain_move;
    }


    private void Pos(GameObject target, GameObject reference, float foward = 0, float up = 0)
    {
        target.transform.position = reference.transform.position;
        target.transform.position += foward*target.transform.forward;
        target.transform.position += up* target.transform.up;
    }

    private void Rot(GameObject target, GameObject reference)
    {
        target.transform.eulerAngles = new Vector3(0, reference.transform.eulerAngles.y, 0);
    }
}

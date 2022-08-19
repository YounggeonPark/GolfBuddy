using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SelectedTerrain : MonoBehaviour
{
    int cc_num = 0;
    int hole_num = 1;
    private GameObject activeTerrain;
    public GameObject selectedTerrain;
    Terrain terrain;
    TerrainDataPos boundary;
    

    void Start()
    {
        selectedTerrain = this.transform.GetChild(cc_num).GetChild(hole_num).gameObject;
        terrain = selectedTerrain.GetComponent<Terrain>();
        boundary = selectedTerrain.GetComponent<TerrainDataPos>();
    }

    public void ChangeCC(int num)
    {
        cc_num = num;
    }
    public void ChangeHole(int num)
    {
        hole_num = num;
    }

    private void TerrainUpdate()
    {

    }
    private void TerrainPosUpdate()
    {

    }
}

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BluetoothHandler : MonoBehaviour
{
    // Use this for initialization
    AndroidJavaClass bt_class;
    AndroidJavaObject bt_object;

    private bool connected = false;
    public String data;
    public String gps;

    // Start is called before the first frame update
    void Start()
    {
        bt_class = new AndroidJavaClass("com.example.blt2gps.BLT2GPS");
        bt_object = bt_class.CallStatic<AndroidJavaObject>("getInstance");
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ConnectBT()
    {
        connected = bt_object.Call<bool>("ConnectBT");
    }

    public void ReadData()
    {
        data = bt_object.Call<string>("ReadData");
    }
}

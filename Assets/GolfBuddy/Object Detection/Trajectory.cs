using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Trajectory : MonoBehaviour
{
    [SerializeField] GameObject ballStart;
    [SerializeField] GameObject ballNow;
    [SerializeField] LinearLine linear;

    public int count;
    private List<DetectionData> detections = new List<DetectionData>();

    public bool detecting = false;
    public float runtime = 0;

    public void Update()
    {
        count = detections.Count;

        if(count > 5)
        {
            PrintTrajectory();
        }
    }


    public void AddData(DetectionData data)
    {
        detections.Add(data);
    }

    public void LineFitting()
    {
        // LineFitting from 'detections'
    }

    public void CheckData()
    {
        Debug.Log("Storage Count:" + detections.Count);
        for (int i = 0; i < detections.Count; i++)
        {
            Debug.Log(""+ detections[i].ballPosition);
        }
    }

    public int Counts()
    {
        return detections.Count;
    }


    LineRenderer trajectory = new LineRenderer();

    public void PrintTrajectory()
    {
        linear.render = true;
    }

    public void DetectingStart()
    {
        detecting = true;
    }

    public void Clear()
    {
        count = 0;
        detections = null;
        detections = new List<DetectionData>();
    }
}

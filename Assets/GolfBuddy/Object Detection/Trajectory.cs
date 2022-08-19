using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Trajectory : MonoBehaviour
{
    private List<DetectionData> detections = new List<DetectionData>();


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
        for(int i = 0; i < detections.Count; i++)
        {
            Debug.Log(detections[i].eulerAngle);
        }
    }
}

using UnityEngine;

public class DetectionData 
{
    public DetectionData(Transform ballPosition, double distance, float timestamp)
    {
        this.ballPosition = ballPosition;
        this.timestamp = timestamp;
        this.distance = distance;
    }

    public Transform ballPosition { get; set; } 
    public double distance { get; set; }
    public float timestamp { get; set; }
}

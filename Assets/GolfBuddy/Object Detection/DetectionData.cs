using UnityEngine;

public class DetectionData 
{
    public DetectionData(Vector3 eulerAngle, double distance, ulong timestamp)
    {
        this.eulerAngle = eulerAngle;
        this.timestamp = timestamp;
        this.distance = distance;
    }

    public Vector3 eulerAngle { get; set; } 
    public double distance { get; set; }
    public ulong timestamp { get; set; }
}

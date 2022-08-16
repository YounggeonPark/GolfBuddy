using UnityEngine;

public class DetectionData 
{
    public DetectionData(Vector3 point, ulong timestamp)
    {
        this.point = point;
        this.timestamp = timestamp;
    }

    public Vector3 point { get; set; } 
    public ulong timestamp { get; set; }
}

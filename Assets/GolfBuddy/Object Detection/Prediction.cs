using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Prediction
{
    public double probability { get; set; }
    public string tagId { get; set; }
    public string tagName { get; set; }
    public BoundingBox boundingBox { get; set; }
    public string tagType { get; set; }
}

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class ResultJson
{
    public string id { get; set; }
    public string project { get; set; }
    public string iteration { get; set; }
    public string created { get; set; }
    public List<Prediction> predictions { get; set; }
}
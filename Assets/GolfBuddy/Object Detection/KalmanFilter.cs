using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KalmanFilter
{
    public int x;
    public int y;

    public bool triggerKF()
    {
        return true;
    }
    
    public void buffer(int x_in, int y_in)
    {
        x = predict(x_in);
        y = predict(y_in);
    }

    #region Kalman Filter Prediction Body

    public int predict(int x)
    {
        return 0;
    }

    #endregion


}

using UnityEngine;

public class CompassHandler : MonoBehaviour
{

    #region 데이터
    //     final object rotation
    private static Quaternion _objectRotation = Quaternion.identity;

    //     the orientation the computations want to set
    private static Quaternion _targetRotation;

    //     1st accelerometer and 2nd compass filter
    private static Vector3 _accFilter;

    //     1st accelerometer and 2nd compass filter
    private static Vector3 _compassFilter;

    //     resetNorthQuaternion
    private static Quaternion resetNorthQuaternion = Quaternion.identity;

    //     1st noisy compass filter
    private static Vector3 _oldCompassFilter;

    //     Compute the object rotation based on the compass and acceleromenter orientation
    public static Quaternion ObjectRotation
    {
        get
        {
            ComputeOrientationFromInputs();
            return _objectRotation;
        }
    }

    //     Compute the camera rotation based on the compass and acceleromenter orientation
    public static Quaternion CameraRotation
    {
        get
        {
            ComputeOrientationFromInputs();
            return resetNorthQuaternion * Quaternion.Euler(90f, 0f, 0f) * Quaternion.Inverse(_objectRotation);
        }
    }

    #endregion

    private void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }
    public Vector3 getAccel()
    {
        return Input.acceleration;
    }

    private static bool gravityGeomagneticToUnityQuaternion(ref Quaternion R, Vector3 gravity, Vector3 geomagnetic)
    {
        gravity.x *= -1f;
        gravity.y *= -1f;
        geomagnetic.x *= -1f;
        geomagnetic.y *= -1f;
        Vector3 vector = -gravity;
        float sqrMagnitude = vector.sqrMagnitude;
        if (sqrMagnitude < 0.01f)
        {
            return false;
        }

        Vector3 rhs = Vector3.Cross(geomagnetic, vector);
        float magnitude = rhs.magnitude;
        if (magnitude < 0.01f)
        {
            return false;
        }

        rhs *= 1f / magnitude;
        vector *= 1f / Mathf.Sqrt(sqrMagnitude);
        Vector3 forward = Vector3.Cross(vector, rhs);
        R = Quaternion.LookRotation(forward, vector) * Quaternion.Euler(-90f, 0f, 0f);
        return true;
    }


    private static Vector3 fixRawCompassAcordingScreen(Vector3 input)
    {
        if (Screen.orientation == ScreenOrientation.Portrait)
        {
            return input;
        }

        if (Screen.orientation == ScreenOrientation.LandscapeLeft)
        {
            return Quaternion.Euler(0f, 0f, 90f) * input;
        }

        if (Screen.orientation == ScreenOrientation.LandscapeRight)
        {
            return Quaternion.Euler(0f, 0f, -90f) * input;
        }

        if (Screen.orientation == ScreenOrientation.PortraitUpsideDown)
        {
            return Quaternion.Euler(0f, 0f, 180f) * input;
        }

        return input;
    }


    //
    // 요약:
    //     Computes the orientation based on accelerometer and compass. If the compass is
    //     not enabled, it enables it.
    //
    // 반환 값:
    //     void
    private static void ComputeOrientationFromInputs()
    {
        if (!Input.compass.enabled)
        {
            Input.compass.enabled = true;
        }

        if (Input.compass.enabled)
        {
            _accFilter = Vector3.Lerp(_accFilter, Input.acceleration, 0.0625f);
            Vector3 vector = Input.compass.rawVector;
            if (Vector3.Distance(_oldCompassFilter, vector) < 2.2f)
            {
                vector = _oldCompassFilter;
            }

            _oldCompassFilter = vector;

            //*************편집해*************

            //_compassFilter = Vector3.Lerp(_compassFilter, fixRawCompassAcordingScreen(vector), 0.125f);
            Vector3 vec = Quaternion.Euler(-90f, 0f, 0f) * vector; // rotate X축 -90도
            _compassFilter = Vector3.Lerp(_compassFilter, vec, 0.125f);

            //********************************

            Quaternion R = _targetRotation;
            gravityGeomagneticToUnityQuaternion(ref R, _accFilter, _compassFilter);
            if (Quaternion.Angle(R, _targetRotation) > 2f)
            {
                _targetRotation = R;
            }

            _objectRotation = Quaternion.Slerp(_objectRotation, _targetRotation, 0.125f);
        }
    }

}

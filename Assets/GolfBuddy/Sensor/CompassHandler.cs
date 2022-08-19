using UnityEngine;
using UnityEngine.UI;

public class CompassHandler : MonoBehaviour
{
    //
    // ���:
    //     final object rotation
    private static Quaternion _objectRotation = Quaternion.identity;

    //
    // ���:
    //     the orientation the computations want to set
    private static Quaternion _targetRotation;

    //
    // ���:
    //     1st accelerometer and 2nd compass filter
    private static Vector3 _accFilter;

    //
    // ���:
    //     1st accelerometer and 2nd compass filter
    private static Vector3 _compassFilter;

    //
    // ���:
    //     resetNorthQuaternion
    private static Quaternion resetNorthQuaternion = Quaternion.identity;

    //
    // ���:
    //     1st noisy compass filter
    private static Vector3 _oldCompassFilter;

    //
    // ���:
    //     Compute the object rotation based on the compass and acceleromenter orientation
    public static Quaternion ObjectRotation
    {
        get
        {
            ComputeOrientationFromInputs();
            return _objectRotation;
        }
    }

    //
    // ���:
    //     Compute the camera rotation based on the compass and acceleromenter orientation
    public static Quaternion CameraRotation
    {
        get
        {
            ComputeOrientationFromInputs();
            return resetNorthQuaternion * Quaternion.Euler(90f, 0f, 0f) * Quaternion.Inverse(_objectRotation);
        }
    }

    //
    // ���:
    //     Sets the front view as North to the virtual compass
    public static void ResetNorth()
    {
        if (!Input.compass.enabled)
        {
            Input.compass.enabled = true;
        }

        if (Input.compass.enabled)
        {
            Quaternion R = Quaternion.identity;
            gravityGeomagneticToUnityQuaternion(ref R, Input.acceleration, fixRawCompassAcordingScreen(Input.compass.rawVector));
            resetNorthQuaternion = Quaternion.Euler(0f, 0f - (Quaternion.Euler(90f, 0f, 0f) * Quaternion.Inverse(R)).eulerAngles.y, 0f);
        }
    }

    //
    // ���:
    //     Computes the orientation based on accelerometer and compass. If the compass is
    //     not enabled, it enables it.
    //
    // ��ȯ ��:
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
            _compassFilter = Vector3.Lerp(_compassFilter, fixRawCompassAcordingScreen(vector), 0.125f);
            Quaternion R = _targetRotation;
            gravityGeomagneticToUnityQuaternion(ref R, _accFilter, _compassFilter);
            if (Quaternion.Angle(R, _targetRotation) > 2f)
            {
                _targetRotation = R;
            }

            _objectRotation = Quaternion.Slerp(_objectRotation, _targetRotation, 0.125f);
        }
    }

    //
    // ���:
    //     Fix the raw compass according the current screen orientation
    //
    // �Ű� ����:
    //   input:
    //     raw compass vector
    //
    // ��ȯ ��:
    //     the unity corrected compass vector
    private static Vector3 fixRawCompassAcordingScreen(Vector3 input)
    {
        /*
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
        }*/
        //return Quaternion.Euler(0f, 0f, 0f) * input;
        return Quaternion.Euler(180f, 0f, 0f) * input;
    }

    //
    // ���:
    //     Computes the unity object rotation quaternion based on the gravity and geomagnetic.
    //     OBS.: the geomagnetic must be fixed because unity gives it as the raw sensor
    //     data. the gravity in Unity is measured in G, so it is 1.0 instead 9.81 .
    //
    // �Ű� ����:
    //   R:
    //     The result rotation
    //
    //   gravity:
    //     The current Unity gravity
    //
    //   geomagnetic:
    //     The fixed compass vector
    //
    // ��ȯ ��:
    //     True if it is possible to compute the rotation. False otherwise
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
}

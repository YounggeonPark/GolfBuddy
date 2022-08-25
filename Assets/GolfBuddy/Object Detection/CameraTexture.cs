using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using NRKernal.Record;
using NRKernal;

public class CameraTexture : MonoBehaviour
{
    //  Unityȯ�� Test��
    public bool onUnity;
    //
    public ulong timestamp;
    public Texture2D textureFull;

    //
    public int width;
    public int height;

    //Test��
    [SerializeField] public Texture2D test_input;
    [SerializeField] public OptionSetting setting;

    private NRRGBCamTexture rgbCamTexture { get; set; }



    // Start is called before the first frame update
    void Start()
    {
        onUnity = false;

        if (Application.isEditor)
        {
            textureFull = test_input;

            width = test_input.width;
            height = test_input.height;

            onUnity = true;
        }
        else
        {
            rgbCamTexture = new NRRGBCamTexture();
            // Texture ȹ��
            textureFull = rgbCamTexture.GetTexture();
            // Timestamp ȹ��
            timestamp = rgbCamTexture.CurrentFrame.timeStamp;

            rgbCamTexture.Play();

            width = textureFull.width;
            height = textureFull.height;
        }

        // Timestamp ȹ��
        //timestamp = rgbCamTexture.CurrentFrame.timeStamp;

        //rgbCamTexture.Play();
    }

    // Update is called once per frame
    void Update()
    {
        if (Application.isEditor)
        {
            textureFull = test_input;
            width = textureFull.width;
            height = textureFull.height;
            timestamp = 0;
        }
        else
        {
            onAir();
        }
    }

    public void onAir()
    {
        if (rgbCamTexture == null)
        {
            rgbCamTexture = new NRRGBCamTexture();
        }
        rgbCamTexture.Play();

        // Texture ȹ��
        textureFull = rgbCamTexture.GetTexture();

        //  Vertical Flip since it use UV from opnecv
        //  FlipTextureVertically(textureFull);

        // Timestamp ȹ��
        timestamp = rgbCamTexture.CurrentFrame.timeStamp;
    }
    public void Pause()
    {
        rgbCamTexture?.Pause();
    }
    public void Stop()
    {
        rgbCamTexture?.Stop();
        rgbCamTexture = null;
    }
    void OnDestroy()
    {
        rgbCamTexture?.Stop();
        rgbCamTexture = null;
    }

    public static void FlipTextureVertically(Texture2D original)
    {
        var originalPixels = original.GetPixels();

        var newPixels = new Color[originalPixels.Length];

        var width = original.width;
        var rows = original.height;

        for (var x = 0; x < width; x++)
        {
            for (var y = 0; y < rows; y++)
            {
                newPixels[x + y * width] = originalPixels[x + (rows - y - 1) * width];
            }
        }

        original.SetPixels(newPixels);
        original.Apply();
    }
}

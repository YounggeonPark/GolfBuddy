using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using NRKernal.Record;
using NRKernal;

public class CameraTexture : MonoBehaviour
{
    public float timestamp;
    public Texture2D textureFull;

    //Test��
    [SerializeField] public Texture2D test_input;

    private NRRGBCamTexture RGBCamTexture { get; set; }


    // Start is called before the first frame update
    void Start()
    {
        RGBCamTexture = new NRRGBCamTexture();
        // Texture ȹ��
        textureFull = RGBCamTexture.GetTexture();

        // Timestamp ȹ��
        timestamp = RGBCamTexture.CurrentFrame.timeStamp;
        
        RGBCamTexture.Play();

        //onAir();
    }

    // Update is called once per frame
    void Update()
    {
        onAir();
        textureFull = test_input; 
    }

    public void onAir()
    {
        if (RGBCamTexture == null)
        {
            RGBCamTexture = new NRRGBCamTexture();
        }
        RGBCamTexture.Play();

        // Texture ȹ��
        textureFull = RGBCamTexture.GetTexture();
        // Timestamp ȹ��
        timestamp = RGBCamTexture.CurrentFrame.timeStamp;
    }
    public void Pause()
    {
        RGBCamTexture?.Pause();
    }
    public void Stop()
    {
        RGBCamTexture?.Stop();
        RGBCamTexture = null;
    }
    void OnDestroy()
    {
        RGBCamTexture?.Stop();
        RGBCamTexture = null;
    }
}

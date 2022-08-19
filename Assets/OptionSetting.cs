using NRKernal;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class OptionSetting : MonoBehaviour
{
    [SerializeField] GPSHandler gpshandler;
    [SerializeField] CameraTexture ct;

    public bool onUnity;
    [SerializeField] Text unityText;
    public bool onTestMode;
    [SerializeField] Text testText;
    public bool onHand;
    [SerializeField] Text controller_hand;

    private Text noticeText;

    private void Start()
    {
        onUnity = true;
        onTestMode = false;

        noticeText = GameObject.FindGameObjectWithTag("NoticeText").GetComponent<Text>();
        noticeText.text = "Unity: " + onUnity + ", TestMode: "+onTestMode;
    }

    public void StartSetting()
    {
        gpshandler.onUnity = onUnity;
        ct.onUnity = onUnity;

        gpshandler.TestMode(onTestMode);
    }
    public void UnityTrigger()
    {
        ct.onUnity = !onUnity;
        gpshandler.onUnity = !onUnity;
        if (!onUnity)
        {
            unityText.text = "유니티\n끄기";
        }
        else
        {
            unityText.text = "유니티\n켜기";
        }

        onUnity = !onUnity;
    }
    public void UnityTrigger(bool boo)
    {
        noticeText.text = "Unity: " + boo;
        ct.onUnity = boo;
        gpshandler.onUnity = boo;

        onUnity = boo;
    }
    public void TestTrigger()
    {
        gpshandler.TestMode(!onTestMode);
        if (!onTestMode)
        {
            testText.text = "테스트모드\n끄기";
        }
        else
        {
            testText.text = "테스트모드\n켜기";
        }

        onTestMode = !onTestMode;
    }
    public void TestTrigger(bool boo)
    {
        noticeText.text = "TestMode: " + boo;
        gpshandler.TestMode(boo);

        onTestMode = boo;
    }

    public void ChangeController()
    {
        if (!onHand)
        {
            NRInput.SetInputSource(InputSourceEnum.Hands);
            controller_hand.text = "컨트롤러 상태\n[Hand Track]";
        }
        else
        {
            NRInput.SetInputSource(InputSourceEnum.Controller);
            controller_hand.text = "컨트롤러 상태\n[스마트폰]";
        }
        onHand = !onHand;
    }
}

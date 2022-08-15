using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


public class WeatherHandler : MonoBehaviour
{
    // ��ġ����
    [SerializeField] GPSHandler gps;
    public String code = "";
    public int nx = 0;
    public int ny = 0;

    public bool updated = false;
    private string url;


    void Start()
    {

    }

    void Update()
    {
        if (!updated)
        {
            #region Kakao REST API ( GPS -> �������� ) // rest api �����ʿ�
            KakaoMapAPI kakao = new KakaoMapAPI(gps.longitude, gps.latitude);
            kakao.GetPublicPos();

            Debug.Log("īī������");
            #endregion

            #region  ����: �������� -> ������ǥ
            List<Dictionary<string, object>> data_excel = CSVReader.Read("�������浵");

            for (int i = 0; i < data_excel.Count; i++)
            {
                if (data_excel[i]["Code"].ToString() == code)
                {
                    nx = (int)data_excel[i]["Nx"];
                    ny = (int)data_excel[i]["Ny"];

                    Debug.Log("[������ġ]�����ڵ�:" + code + ", Nx:" + nx + " ,Ny:" + ny);
                }
            }
            #endregion

            //  OpenAPI
            GovAPI gov = new GovAPI(nx, ny);
            // wind = gov.GetWindData();

            updated = true;
        }
    }
}

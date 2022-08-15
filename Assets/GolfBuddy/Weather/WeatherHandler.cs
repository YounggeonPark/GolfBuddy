using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


public class WeatherHandler : MonoBehaviour
{
    // 위치정보
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
            #region Kakao REST API ( GPS -> 행정구역 ) // rest api 수정필요
            KakaoMapAPI kakao = new KakaoMapAPI(gps.longitude, gps.latitude);
            kakao.GetPublicPos();

            Debug.Log("카카오생성");
            #endregion

            #region  엑셀: 행정구역 -> 격자좌표
            List<Dictionary<string, object>> data_excel = CSVReader.Read("격자위경도");

            for (int i = 0; i < data_excel.Count; i++)
            {
                if (data_excel[i]["Code"].ToString() == code)
                {
                    nx = (int)data_excel[i]["Nx"];
                    ny = (int)data_excel[i]["Ny"];

                    Debug.Log("[현재위치]법정코드:" + code + ", Nx:" + nx + " ,Ny:" + ny);
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

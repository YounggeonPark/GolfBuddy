using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


public class WeatherHandler : MonoBehaviour
{
    // 위치정보
    [SerializeField] GPSHandler gps;
    public string code;
    public int nx = 0;
    public int ny = 0;
    public float degree;
    public float speed;

    public bool updated = false;
    private string url;

    private KakaoMapAPI kakao;
    private GovAPI gov;


    void Start()
    {

    }

    void Update()
    {
        if (!updated)
        {
            #region Kakao REST API ( GPS -> 행정구역 ) // rest api 수정필요
            kakao = new KakaoMapAPI(gps.longitude, gps.latitude);

            kakao.GPS2Npos();
            if(kakao.kakao_return != null)
            {
                code=kakao.kakao_return.documents[0].code;
                long temp = Int64.Parse(code);
                code = "A"+(temp / 1000) * 1000;
            }
            #endregion

            #region  엑셀: 행정구역 -> 격자좌표
            List<Dictionary<string, object>> data_excel = CSVReader.Read("gov_datasheet");

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

            #region 공공데이터API
            gov = new GovAPI(nx, ny);
            gov.GovREST();
            degree = gov.degree;
            speed = gov.speed;
            #endregion

            updated = true;
        }
    }


}

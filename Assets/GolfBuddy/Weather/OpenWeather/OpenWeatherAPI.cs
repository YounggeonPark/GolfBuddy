using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using static OpenWeatherFormat;

public class OpenWeatherAPI : MonoBehaviour
{
    public string APP_ID;
    public WeatherData weatherInfo;
    public GPSHandler gps;

    // Start is called before the first frame update
    void Start()
    {
        CheckLocationWeather(gps.GetLong(), gps.GetLat());
    }


    public void CheckLocationWeather(double longitude, double latitude)
    {
        StartCoroutine(GetWeather(longitude,latitude));
    }

    // Update is called once per frame
    void Update()
    {

    }

    IEnumerator GetWeather(double longitude, double latitude)
    {
        Debug.Log("[OpenWeatherAPI] update");
        string url = "https://api.openweathermap.org/data/2.5/weather?lat="+ latitude + "&lon="+ longitude + "&appid=fe5becfb7c368a3f8ebf5cb6cea242bc";

        UnityWebRequest www = UnityWebRequest.Get(url);
        yield return www.SendWebRequest();

        string json = www.downloadHandler.text;
        json = json.Replace("\"base\":", "\"basem\":");
        weatherInfo = JsonUtility.FromJson<WeatherData>(json);

        if (weatherInfo.weather.Length > 0)
        {
            Debug.Log("[OpenWeatherAPI]" + weatherInfo.main.temp_max);
        }

    }
}

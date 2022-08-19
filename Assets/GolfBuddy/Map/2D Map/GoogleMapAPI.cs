using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;

public class GoogleMapAPI : MonoBehaviour
{
    [SerializeField] RawImage _rawImage;
    [SerializeField] GPSHandler gpsHandler;

    public enum mapType
    {
        roadmap,
        satellite,
        hybrid,
        terrain
    }

    private string m_key = "AIzaSyBZcHAVpU9pUcR_4Y_R8gPWUK2btrugVGw";
    private mapType type;
    public float longitude;
    public float latitude;

    private int mapWidth;
    private int mapHeight;
    private float time;

    public string url;
    public int zoom;
    public int scale;
    public bool GoogleMap_Toggle = true;

    public bool circle = true;

    void Start()
    {
        time = 0;

        mapWidth = (int)_rawImage.GetComponent<RectTransform>().rect.width;
        mapHeight = (int)_rawImage.GetComponent<RectTransform>().rect.height;

        type = mapType.satellite;
        zoom = 17;  //15~
        scale = 10;


        //첫로딩
        longitude = gpsHandler.longitude;
        latitude = gpsHandler.latitude;

        StaticMap();

        if (circle)
        {
            Reload();
        }
    }

    void Update()
    {
        time += Time.deltaTime;
        if(time > 10)
        {
            Reload();
            time = 0;
        }
    }


    public void Reload()
    {
        longitude = gpsHandler.longitude;
        latitude = gpsHandler.latitude;

        if (GoogleMap_Toggle)
        {
            StaticMap();
            Debug.Log("[Map] UPDATE_Google Static API");

            if (circle)
            {
                // 100M
                _rawImage.texture = DrawCircle(_rawImage.texture as Texture2D, Color.red, mapWidth / 2, mapHeight / 2, 100);
                // 200M
                _rawImage.texture = DrawCircle(_rawImage.texture as Texture2D, Color.red, mapWidth / 2, mapHeight / 2, 200);
                // 300M
                _rawImage.texture = DrawCircle(_rawImage.texture as Texture2D, Color.red, mapWidth / 2, mapHeight / 2, 300);


            }
        }
        time = 0;
    }

    public bool StaticMap()
    {
        try
        {
            url = "https://maps.googleapis.com/maps/api/staticmap?" +
            "center=" + longitude + "," + latitude +
            "&zoom=" + zoom +
            "&size=" + mapWidth + "x" + mapHeight +
            "&scale=" + scale +
            "&maptype=" + type +
            "&markers=color:blue%7Clabel:S%7C" + latitude + "," + longitude +
            "&key=" + m_key;

#pragma warning disable CS0618 // 형식 또는 멤버는 사용되지 않습니다.
            WWW www = new WWW(url);
#pragma warning restore CS0618 // 형식 또는 멤버는 사용되지 않습니다.
            int delay = 1000;
            int timer = 0;
            bool done = false;

            while (delay > timer)
            {
                System.Threading.Thread.Sleep(1);
                timer++;
                if (www.isDone)
                {
                    done = true;
                    break;
                }
            }
            if (done == false)
            {
                return false;
            }
            if (_rawImage != null)
            {
                _rawImage.texture = www.texture;
                _rawImage.SetNativeSize();
            }
        }
        catch (System.Exception e)
        {
            Debug.LogError(e);
            return false;
        }
        return true;
    }
    
    public bool GeoLocation()
    {
        try
        {
            string url = "https://www.googleapis.com/geolocation/v1/geolocate?key="+m_key;

        }
        catch (System.Exception e)
        {
            Debug.LogError(e);
            return false;
        }
        return true;
    }

    public void CircleONOFF()
    {
        circle = !circle;
    }

    public Texture DrawCircle(Texture2D tex, Color color, int x, int y, int radius = 3)
    {
        float rSquared = radius * radius;
        float rSquared_inner = (radius - 1) * (radius - 1);

        for (int u = x - radius; u < x + radius + 1; u++)
        {
            for (int v = y - radius; v < y + radius + 1; v++)
            {
                int temp = (x - u) * (x - u) + (y - v) * (y - v);
                if (temp < rSquared && temp > rSquared_inner)
                {
                    tex.SetPixel(u, v, color);
                }
                    
            }
        }
        tex.Apply();
        return tex;
    }

    public void ChangeZoom(bool boo)
    {
        if (boo)
        {
            zoom += 1;
            Reload();
        }
        else
        {
            if (zoom > 15) 
            { 
                zoom -= 1;
                Reload();
            }

        }
    }
}

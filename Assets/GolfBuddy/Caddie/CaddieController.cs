using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class CaddieController : MonoBehaviour, IPointerClickHandler, IPointerEnterHandler, IPointerExitHandler
{
    public GameObject user;
    public GameObject caddie;

    public float height = -0.5f;

    public int caddieNum = 999;
    public int caddieTotal = 5; 

    private GameObject character;
    private Animator anima;
    [SerializeField] GameObject textBox;
    [SerializeField] WeatherHandler weatherHandler;
    [SerializeField] OpenWeatherAPI openWeatherAPI;

    private Vector3 far;
    private Vector3 velocity;
    private float walkSpeed = 0.5f;
    private float rotationSpeed = 100f;

    private bool mode_OpenWeather;

    public bool giveWeather = false;
    void Start()
    {
        ChangeCaddie();

        transform.position = new Vector3(transform.position.x, height, transform.position.z);
    }

    float textBoxOn = 0;    
    bool follow = false;
    void Update()
    {
        #region Movement
        if (Vector3.Distance(user.transform.position, this.transform.position) > 2f)
        {
            if(Vector3.Distance(user.transform.position, this.transform.position) > 3f && follow == false)
            {
                follow = true;
            }

            if (follow)
            {
                Walk();

                far = new Vector3(user.transform.position.x, height, user.transform.position.z) - new Vector3(transform.position.x, height, transform.position.z);
                Quaternion toRotation = Quaternion.LookRotation(far.normalized, Vector3.up);
                transform.rotation = Quaternion.RotateTowards(transform.rotation, toRotation, rotationSpeed * Time.deltaTime);

                this.transform.position += far.normalized * walkSpeed * Time.deltaTime;
            }
        }
        else
        {
            follow = false;
            Idle();
        }
        #endregion

        #region Weather Talk
        if (textBoxOn > 10)
        {
            textBox.GetComponentInChildren<Text>().text = "";
            textBox.gameObject.SetActive(false);
            textBoxOn = 0;
            giveWeather = false;
        }
        else if (textBoxOn > 5)
        {
            if (mode_OpenWeather)
            {

                textBox.GetComponentInChildren<Text>().text = "풍속은 " + openWeatherAPI.weatherInfo.wind.speed + " m/s 입니다!";
            }
            else
            {
                textBox.GetComponentInChildren<Text>().text = "풍속은 " + weatherHandler.speed + " m/s 입니다!";
            }
        }
        else if(textBoxOn > 1)
        {
            if (mode_OpenWeather)
            {

            }
            else
            {
                textBox.GetComponentInChildren<Text>().text = "현재 " + weatherHandler.direction + "방향으로 바람이 붑니다!";
            }
        }
        else
        {

        }

        if (giveWeather)
        {   
            textBox.gameObject.SetActive(true);
            textBoxOn += Time.deltaTime;
        }
        #endregion
    }

    #region Animation ����

    public void Idle()
    {
        switch (caddieNum)
        {
            case 0:
                anima.SetBool("Walk_Anim", false);
                break;
            case 1:
                anima.SetFloat("Blend", 0f);
                break;
            case 2:
                anima.SetBool("Walk_Anim", false);
                break;
            case 3:
                anima.SetBool("Jump", false);
                break;
            default:
                break;
        }
    }
    
    public void Walk()
    {
        switch (caddieNum)
        {
            case 0:
                anima.SetBool("Walk_Anim", true);
                break;
            case 1:
                anima.SetFloat("Blend", 2f);
                break;
            case 2:
                anima.SetBool("Walk_Anim", true);
                break;
            case 3:
                anima.SetBool("Jump", true);
                break;
            default:
                break;
        }
    }

    #endregion


    public void ChangeCaddie()
    {
        caddieNum++;
        if (caddieNum + 1 > caddieTotal)
        {
            caddieNum = 0;
        }

        if (character != null)
        {
            character.SetActive(false);
        }
        
        //기존 캐디 해제 후 새 캐디 Active
        character = this.transform.GetChild(caddieNum).gameObject;
        character.SetActive(true);

        anima = character.GetComponent<Animator>();
    }

    public void Help()
    {
        giveWeather = true;
    }


    #region interactive
    public void OnPointerClick(PointerEventData eventData)
    {
        Help();
    }

    /// <summary> when pointer hover, set the cube color to green. </summary>
    /// <param name="eventData"> Current event data.</param>
    public void OnPointerEnter(PointerEventData eventData)
    {

    }

    /// <summary> when pointer exit hover, set the cube color to white. </summary>
    /// <param name="eventData"> Current event data.</param>
    public void OnPointerExit(PointerEventData eventData)
    {

    }
    #endregion
}

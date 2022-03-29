
using UnityEngine;
using UnityEngine.UI;

public class DisplayOrientation : MonoBehaviour
{
    Image logoImg;
    RectTransform rect;
    public Sprite logoLandscape;
    public Sprite logoPortrait;
    public string test;

    void Start()
    {
        logoImg = GetComponent<Image>();
        rect = GetComponent<RectTransform>();
    }


    void FixedUpdate()
    {
        test = Screen.orientation.ToString();
        if(Screen.orientation is ScreenOrientation.Portrait or ScreenOrientation.PortraitUpsideDown or ScreenOrientation.Unknown)
        {
            logoImg.sprite = logoPortrait;
            
        }
        else
        {
            logoImg.sprite = logoLandscape;
        }

        logoImg.fillCenter = true;
        
    }
}

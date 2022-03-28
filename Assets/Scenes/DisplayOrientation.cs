
using UnityEngine;
using UnityEngine.UI;

public class DisplayOrientation : MonoBehaviour
{
    Image logoImg;
    public Sprite logoLandscape;
    public Sprite logoPortrait;
    public string test;

    void Start()
    {
        logoImg = GetComponent<Image>();
    }


    void Update()
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
        
    }
}

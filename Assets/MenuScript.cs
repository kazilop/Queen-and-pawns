using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MenuScript : MonoBehaviour
{
   
    public int levelCount = 2;

    public GameObject pref;

    public RectTransform parantPanel;

    //private GameObject parent;
    void Start()
    {

        var parent = FindObjectOfType<GridLayout>();

        for (int i = 0; i < levelCount; i++)
        {
            int x = new int();
            x = i + 1;

            GameObject levelButton = Instantiate(pref);
            levelButton.name = "btn" + i;
            levelButton.transform.SetParent(parantPanel, false);
            TMP_Text btnText = levelButton.GetComponentInChildren<TMP_Text>();
            btnText.text = (i+1).ToString();

            levelButton.gameObject.GetComponent<Button>().onClick.AddListener(delegate
            {
                SelectLevel(x);
            });
            
        }
    }

    private void SelectLevel(int lev)
    {
        string level = "scene001";

        if(lev > 99)
        {
            level = "scene" + lev.ToString();
        } else 
        
        if(lev > 9 && lev <= 99)
        {
            level = "scene" + "0" + lev.ToString();
        }
        else if(lev <= 9)
            level = "scene" + "00" + lev.ToString();

       
        SceneManager.LoadScene(level);
    }

}

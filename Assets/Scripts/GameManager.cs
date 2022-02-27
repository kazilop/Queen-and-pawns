using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;
//using System.Xml;


public class GameManager : MonoBehaviour
{

    public GameObject queen;
    private Vector3 queenPos;
    private Vector3 pawnPos;
    public GameObject pawn;
    private GameObject respawn;
    public GameObject winPanel;
    public GameObject losePanel;

    public bool isGaming;

    public int score = 0;
    public List<GameObject> pawns;

    public int pawnCount = 5;
    public int pawnInGame;

    public TMP_Text scoreText;

    private string _sceneName;
    private int _sceneNumber;

    private RewardedAds _rewardedAds;

    private System.Random _random;
    public bool _isAdsNeed;
    public int rnd;

    


    public TMP_Text scoreValue;

    private void Awake()
    {
        queen = GameObject.FindGameObjectWithTag("Player");
        winPanel = GameObject.Find("PanelWin");
        losePanel = GameObject.Find("PanelLose");

        scoreValue = GameObject.Find("ScoreValue").GetComponent<TMP_Text>();
        scoreText = GameObject.Find("ScoreText").GetComponent<TMP_Text>();

        isGaming = true;
        respawn = GameObject.FindGameObjectWithTag("Respawn");
        queenPos = respawn.transform.position;
        QueenRespawn();

        pawnPos = queenPos;
        //pawnPos.z = queenPos.z - 3;
       // pawnPos.y = queenPos.y + 2;
        
        PawnCreate(pawnPos);
    }

    void Start()
    {
        _random = new System.Random();
        // pawns = new List<GameObject>;
        winPanel.SetActive(false);
        losePanel.SetActive(false);

        _sceneName = SceneManager.GetActiveScene().name;
        _sceneNumber = System.Int32.Parse(_sceneName.Substring(5));

        _rewardedAds = GetComponent<RewardedAds>();
        rnd = _random.Next(0, 100);
        if (rnd > 25 && rnd < 40)
        {
            _isAdsNeed = true;
            
        }

    }

    // Update is called once per frame
    void Update()
    {
        scoreValue.text = score.ToString();

        if(pawnInGame == 0 && score > 0 && isGaming)
        {
            isGaming = false;
            YouWin();
                      
        }else if(pawnInGame == 0 && score == 0 && isGaming)
        {
            isGaming = false;
            YouLose();
            
        }
    }

    private void PawnCreate(Vector3 pos)
    {
        pawnInGame = pawnCount;
        pos.y = pos.y + 5f;
        pos.z = pos.z - (pawnCount + 3);
        for (int i = 0; i< pawnCount; i++)
        {
            pos.z = pos.z - 1;
            GameObject g = Instantiate(pawn, pos, Quaternion.identity);
            string myName= "Pawn" + i.ToString();
            g.transform.name = myName;
            
            pawns.Add(g);
            
        }
    }

    public void QueenRespawn()
    {
        queenPos.y = queenPos.y + 0.5f;
        queen.transform.position = queenPos;
        
    }

    private void YouWin()
    {
        if (_isAdsNeed)
        {
            TryAd();
            if (_rewardedAds.isReady)
            {
                winPanel.SetActive(true);

                //  GameObject btnNext = GameObject.FindGameObjectWithTag("NextBtn");
                //  Button btn = btnNext.GetComponent<Button>();



                scoreText.text = "Score: " + score.ToString();
                if (PlayerPrefs.GetInt("OpenLevels") <= _sceneNumber)
                {
                    PlayerPrefs.SetInt("OpenLevels", _sceneNumber + 1);
                }
            }
        }
        else
        {
            winPanel.SetActive(true);

            //  GameObject btnNext = GameObject.FindGameObjectWithTag("NextBtn");
            //  Button btn = btnNext.GetComponent<Button>();



            scoreText.text = "Score: " + score.ToString();
            if (PlayerPrefs.GetInt("OpenLevels") <= _sceneNumber)
            {
                PlayerPrefs.SetInt("OpenLevels", _sceneNumber + 1);
            }
        }

    }

    private void YouLose()
    {
        if (_isAdsNeed)
        {
            TryAd();
            if (_rewardedAds.isReady)
                losePanel.SetActive(true);
        }
        else
        {
            losePanel.SetActive(true);
        }

             

        //losePanel.SetActive(true);
    }

    private void TryAd()
    {
       
           // _rewardedAds._showAdButton = btn;
        _rewardedAds.ShowAd();
        _rewardedAds.isReady = true;
    }

    #region Button Menu
    public void GoToMenu()
    {
        SceneManager.LoadScene("MainMenu");
    }

    public void Repeat()
    {
        int scene = SceneManager.GetActiveScene().buildIndex;
        SceneManager.LoadScene(scene, LoadSceneMode.Single);
        Time.timeScale = 1;
    }

    public void NextLevel()
    {
        int scene = SceneManager.GetActiveScene().buildIndex;
        SceneManager.LoadScene(scene + 1);
        Time.timeScale = 1;
    }

    #endregion
}



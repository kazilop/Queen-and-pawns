using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;
using System.Xml;


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

    


    public TMP_Text scoreValue;

    private void Awake()
    {
        isGaming = true;
        respawn = GameObject.FindGameObjectWithTag("Respawn");
        queenPos = respawn.transform.position;
        QueenRespawn();

        pawnPos = queenPos;
        
        PawnCreate(queenPos);
    }

    void Start()
    {
        // pawns = new List<GameObject>;
        winPanel.SetActive(false);
        losePanel.SetActive(false);

        _sceneName = SceneManager.GetActiveScene().name;
        _sceneNumber = System.Int32.Parse(_sceneName.Substring(5));

    }

    // Update is called once per frame
    void Update()
    {
        scoreValue.text = score.ToString();

        if(pawnInGame == 0 && score > 0)
        {
            YouWin();
                      
        }else if(pawnInGame == 0 && score == 0)
        {
            YouLose();
        }
    }

    private void PawnCreate(Vector3 pos)
    {
        pawnInGame = pawnCount;
        pos.y = pos.y + 5f;
        pos.z = pos.z - (pawnCount + 3);
        for (int i = pawnCount-1; i >= 0; i--)
        {
            pos.z = pos.z - 1;
            GameObject g = Instantiate(pawn, pos, Quaternion.identity);
            g.transform.name = "Pawn" + i;
            
            pawns.Add(g);
            
        }
    }

    public void QueenRespawn()
    {
        queenPos.y = queenPos.y + 0.5f;
        queen.transform.position = queenPos;
        
    }

    public void GoToMenu()
    {
        SceneManager.LoadScene("MainMenu");
    }

    private void YouWin()
    {
        winPanel.SetActive(true);
        scoreText.text = "Score: " + score.ToString();
        if(PlayerPrefs.GetInt("OpenLevels") <= _sceneNumber)
        {
            PlayerPrefs.SetInt("OpenLevels", _sceneNumber + 1);
        }

    }

    private void YouLose()
    {
        losePanel.SetActive(true);
    }
}

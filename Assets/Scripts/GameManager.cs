using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{

    public GameObject queen;
    private Vector3 queenPos;
    private Vector3 pawnPos;
    public GameObject pawn;
    private GameObject respawn;

    public bool isGaming;

    public int score = 0;
    public List<GameObject> pawns;

    public int pawnCount = 5;
    public int pawnInGame;


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
    }

    // Update is called once per frame
    void Update()
    {
        scoreValue.text = score.ToString();

        if(pawnInGame == 0)
        {
            SceneManager.LoadScene("MainMenu");
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
}

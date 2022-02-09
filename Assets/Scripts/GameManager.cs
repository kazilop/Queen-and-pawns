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
    public GameObject pawn;

    public bool isGaming;

    public int score = 0;
   // public Pawn[] pawns;

    public int pawnCount = 5;
    public int pawnInGame;


    public TMP_Text scoreValue;

    private void Awake()
    {
        isGaming = true;
    }

    void Start()
    {
       // queen = gameObject.GetComponent<Queen>();
        queenPos = queen.transform.position;
        PawnCreate(queenPos);
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
        pos.y = 5f;
        pos.z = pos.z - pawnCount;
        for (int i = 0; i < pawnCount; i++)
        {
            pos.z = pos.z - 1;
            GameObject g = Instantiate(pawn, pos, Quaternion.identity);
            
        }
    }
}

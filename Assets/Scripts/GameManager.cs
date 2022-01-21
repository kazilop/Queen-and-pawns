using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class GameManager : MonoBehaviour
{

    public GameObject queen;
    private Vector3 queenPos;
    public GameObject pawn;

    public int score = 0;
   // public Pawn[] pawns;

    public int pawnCount = 5;


    public TMP_Text scoreValue;

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
    }

    private void PawnCreate(Vector3 pos)
    {
        pos.y = 5f;
        pos.z = pos.z - pawnCount;
        for (int i = 0; i < pawnCount; i++)
        {
            pos.z = pos.z - 1;
            GameObject g = Instantiate(pawn, pos, Quaternion.identity);
            
        }
    }
}

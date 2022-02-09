using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pawn : MonoBehaviour
{
    Rigidbody rb;
    public float speed = 10f;
    public int scoreValue = 100;
    private GameManager manager;
    
    
    private Vector3 move;
    // Start is called before the first frame update
    void Start()
    {
        move = new Vector3(0, 0, speed);
        rb = GetComponent<Rigidbody>();
      //  manager = gameObject.GetComponent<GameManager>();
    }
    private void Awake()
    {
        manager = FindObjectOfType<GameManager>();
    }
    private void Update()
    {
        
    }
    // Update is called once per frame
    void FixedUpdate()
    {
        GoForward();
        if(transform.position.y < -5)
        {
            Destroy(gameObject);
        }
        
    }

    public void OnCollisionEnter(Collision collision)
    {

        Debug.Log("Collision");

        if (collision.gameObject.tag == "Finish")
        {
            Debug.Log("Collision Finish");
            manager.score = manager.score + 100;
            Destroy(this.gameObject);
            manager.pawnInGame--;
        }

        if(collision.gameObject.tag == "Enemy")
        {
            Destroy(this.gameObject);
            manager.pawnInGame--;
        }
        
    }


    public void GoForward()
    {
        rb.AddForce(move);

    }
}


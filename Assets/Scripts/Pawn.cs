using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pawn : MonoBehaviour
{
    Rigidbody rb;
    public float speed = 10f;
    Vector3 move;
    // Start is called before the first frame update
    void Start()
    {
        move = new Vector3(0, 0, speed);
        rb = GetComponent<Rigidbody>();
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

    public void GoForward()
    {
        rb.AddForce(move);
       // move = new Vector3(transform.position.x, transform.position.y, transform.position.z + speed);
       // transform.position = move * Time.deltaTime;
    }
}


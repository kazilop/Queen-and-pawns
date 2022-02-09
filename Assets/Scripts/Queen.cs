using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Queen : MonoBehaviour
{
    public float playerSpeed = 2.0f;
    private Vector3 move;
    public float speed = 10f;
    private Rigidbody rb;

    // Start is called before the first frame update
    void Start()
    {

       // controller = gameObject.AddComponent<CharacterController>();
        rb = GetComponent<Rigidbody>();
        move = Vector3.zero;
    }

    // Update is called once per frame
   

    private void FixedUpdate()
    {
        MovementLogic();

        if (transform.position.y < -5)
        {
            Respawn();
        }
    }

    public void Respawn()
    {

    }

    private void MovementLogic()
    {

        rb.AddForce(move * speed);
    }

    public void MoveForward()
    {
        move = new Vector3(0,0,playerSpeed);
    }

    public void MoveBack()
    {
        move = new Vector3(0,0,- playerSpeed);
    }

    public void MoveLeft()
    {
        move = new Vector3(-playerSpeed, 0,0);
    }

    public void MoveRight()
    {
        move = new Vector3(playerSpeed, 0,0);
    }

    public void MoveStop()
    {
        move = Vector3.zero;
    }
}

  
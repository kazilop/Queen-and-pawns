using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Xml;


public class Queen : MonoBehaviour
{
    public float playerSpeed = 2.0f;
    private Vector3 move;
    public float speed = 10f;
    private Rigidbody rb;
    public GameManager manager;

    public Joysticki joy;
    public float joyspeed;

    private SpriteRenderer spriteRenderer;

   
    void Start()
    {
        manager = FindObjectOfType<GameManager>();
        rb = GetComponent<Rigidbody>();
        spriteRenderer = GetComponent<SpriteRenderer>();

        move = Vector3.zero;

    }

    // Update is called once per frame


    private void FixedUpdate()
    {
        JoystickFun();
        MovementLogic();
        

        if (transform.position.y < -5.0f)
        {
            Respawn();
        }
    }


    public void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Enemy")
        {
            int z = 0;
            foreach (var i in manager.pawns)
            {
                if (i != null)
                {
                    Destroy(i.gameObject);
                    manager.pawns[z] = null;
                    break;
                }
                z++;
            }
            Respawn();
        }
    }

    public void Respawn()
    {
        manager.pawnInGame--;
        manager.QueenRespawn();
    }

    private void MovementLogic()
    {

        rb.AddForce(move * speed);
    }

   
    void JoystickFun()
    {
        joyspeed = joy.speed;
        if (joy.speed > 0.0f)
        {
            Vector2 direction = joy.direction;
            float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;

            move.z = direction.y;
            move.x = direction.x;

            rb.AddForce(move * speed * playerSpeed);

            
        }
    }
}

  
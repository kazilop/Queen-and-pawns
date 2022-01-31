using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyDisk : MonoBehaviour
{
    public float rotationSpeed = 100f;
    public float speed = 10f;

    private float xpos;
    // Start is called before the first frame update
    void Start()
    {
        xpos = gameObject.transform.position.x;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        xpos = gameObject.transform.position.x;
        transform.Rotate(0,0,rotationSpeed * Time.deltaTime);

        if(xpos < -6 || xpos > 6)
        {
            ChangeDirection();
        }

        transform.position = new Vector3(transform.position.x + speed * Time.deltaTime, transform.position.y, transform.position.z);

        if (transform.position.y < -6)
        {
            Destroy(gameObject);
        }
    }

    private void ChangeDirection()
    {
        speed = -speed;
        rotationSpeed = -rotationSpeed;
    }

    private void OnCollisionEnter(Collision collision)
    {
        if(collision.gameObject.tag == "Things")
        {
            ChangeDirection();
        }
    }
}

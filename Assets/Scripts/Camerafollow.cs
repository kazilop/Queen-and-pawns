using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Camerafollow : MonoBehaviour
{
    private Vector3 pos;
    public GameObject player;
    // Start is called before the first frame update
    void Start()
    {
        //player = GetComponent<GameObject>;
        pos = player.transform.position - transform.position;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
       transform.position = player.transform.position - pos; ;
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Globalization;
using System.Xml;



public class Explode : MonoBehaviour
{
    public float radius = 5.0f;
    public float force = 10000.0f;

    private GameObject exp;
    

    public void Start()
    {
       

    }

    public void OnCollisionEnter(Collision collision)
    {
        if (collision != null)
        {
            Exploders();
            StartCoroutine(Example());
           // Destroy(gameObject);
        }
    }
    public void Exploders()
    {
        Collider[] overlappedColliders = Physics.OverlapSphere(transform.position, radius);
        

        for (int i = 0; i < overlappedColliders.Length; i++)
        {
            if (overlappedColliders[i].name != "Pawn1")
            {
                Rigidbody rigidbody = overlappedColliders[i].attachedRigidbody;
                if (rigidbody != null)
                {
                    rigidbody.AddExplosionForce(force, transform.position, radius);
                }
            }
            transform.GetChild(2).gameObject.SetActive(true);
        }


       // GetComponent<Explode>().enabled = true;
        
    }

    IEnumerator Example()
    {
        
        yield return new WaitForSeconds(0.2f);
        Destroy(gameObject);
    }
}

using System.Collections;
using UnityEngine;


public class Explode : MonoBehaviour
{
    public float radius = 5.0f;
    public float force = 10000.0f;

    private GameObject exp;
    private AudioSource expSource;

    public string colName;

    private bool _explosionDone;
    

    public void Start()
    {
       expSource = GetComponent<AudioSource>();

    }

    private void Update()
    {
        if(transform.position.y < -5)
        {
            Destroy(gameObject);
        }
    }

    public void OnCollisionEnter(Collision collision)
    {
        if (collision != null && collision.gameObject.tag != "NoForce")
        {
            Exploders();
            StartCoroutine(Example());
           // Destroy(gameObject);
        }
    }
    private void Exploders()
    {

        Collider[] overlappedColliders = Physics.OverlapSphere(transform.position, radius);
        transform.GetChild(2).gameObject.SetActive(true);

        for (int i = 0; i < overlappedColliders.Length; i++)
        {
  

            if (overlappedColliders[i].gameObject.tag != "Pawn" && overlappedColliders[i].gameObject.tag != "NoForce")
            {
                Rigidbody rigidbody = overlappedColliders[i].attachedRigidbody;
                if (rigidbody != null)
                {
                    rigidbody.AddExplosionForce(force, transform.position, radius, 0.5f);

                    Explode explosion = rigidbody.GetComponent<Explode>();
                    if(explosion != null)
                    {
                        if(Vector3.Distance(transform.position, rigidbody.position) < radius)
                        {
                            explosion.ExplodeWithDelay();
                        }
                        
                    }
                }
            }
            
        }


       // GetComponent<Explode>().enabled = true;
        
    }

    IEnumerator Example()
    {
        
        expSource.Play();
        yield return new WaitForSeconds(0.5f);
        Destroy(gameObject);
    }

    private void OnDrawGizmosSelected()
    {
        Gizmos.DrawWireSphere(transform.position, radius);
    }

    public void ExplodeWithDelay()
    {
        if (_explosionDone) return;
        _explosionDone = true;
        
        Invoke("Exploders", 0.2f);
    }
}

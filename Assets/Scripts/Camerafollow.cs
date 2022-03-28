using UnityEngine;

public class Camerafollow : MonoBehaviour
{
    private Vector3 pos;
    public GameObject player;
    private Camera cam;
    private float camZoom = 1.0f;

    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player");
        //player = GetComponent<GameObject>;
        pos = player.transform.position - transform.position;
        cam =  GetComponent<Camera>();

        if (PlayerPrefs.GetFloat("CameraZoom") == 0)
        {
            PlayerPrefs.SetFloat("CameraZoom", cam.fieldOfView);
       
        }
        else
        {
            cam.fieldOfView = PlayerPrefs.GetFloat("CameraZoom");
        }

    }

    // Update is called once per frame
    void FixedUpdate()
    {
       transform.position = player.transform.position - pos; ;
    }

    public void CamPlus()
    {
        if(cam.fieldOfView > 5 && cam.fieldOfView < 120)
        cam.fieldOfView = cam.fieldOfView - camZoom;
    }

    public void CamMinus()
    {
        if (cam.fieldOfView > 5 && cam.fieldOfView < 120)
            cam.fieldOfView = cam.fieldOfView + camZoom;
    }
}

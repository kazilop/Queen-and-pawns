using UnityEngine;

public class Camerafollow : MonoBehaviour
{
    private Vector3 pos;
    public GameObject player;
    private Camera cam;
    private float camZoom = 10.0f;

    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player");
        //player = GetComponent<GameObject>;
        pos = player.transform.position - transform.position;
        cam =  GetComponent<Camera>();

        cam.fieldOfView = 77f;

        if (PlayerPrefs.GetFloat("CameraZoom") == 0f)
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
        PlayerPrefs.SetFloat("CameraZoom", cam.fieldOfView);
    }

    public void CamMinus()
    {
        if (cam.fieldOfView > 5 && cam.fieldOfView < 120)
            cam.fieldOfView = cam.fieldOfView + camZoom;
        PlayerPrefs.SetFloat("CameraZoom", cam.fieldOfView);
    }
}

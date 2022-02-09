using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ForwardBtn : MonoBehaviour
{
    public GameObject queen;
    public Queen qu;
    // Start is called before the first frame update
    void Start()
    {
        qu = GetComponent<Queen>();
        Button btn = GetComponent<Button>();
        btn.onClick.AddListener(Move);
      //  btn.OnPointerExit(Stop());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Move()
    {
        Debug.Log("Move");
        qu.MoveForward();
    }

    private void Stop()
    {
        qu.MoveStop();
    }


}

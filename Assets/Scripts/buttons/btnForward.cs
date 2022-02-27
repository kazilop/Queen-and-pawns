using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class btnForward : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    Queen queen;
    
    void Start()
    {
        queen = FindObjectOfType<Queen>();
            
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        queen.MoveForward();
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        queen.MoveStop();
    }
    
}

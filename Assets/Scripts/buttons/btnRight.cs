using UnityEngine;
using UnityEngine.EventSystems;

public class btnRight : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    Queen queen;

    void Start()
    {
        queen = FindObjectOfType<Queen>();

    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        queen.MoveRight();
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        queen.MoveStop();
    }
}

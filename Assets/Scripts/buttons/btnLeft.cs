using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class btnLeft : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    Queen queen;

    void Start()
    {
        queen = FindObjectOfType<Queen>();

    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        queen.MoveLeft();
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        queen.MoveStop();
    }
}

using UnityEngine;
using UnityEngine.EventSystems;

public class btnBackToMenu : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    GameManager gameManager;
   
    void Start()
    {
        gameManager = FindObjectOfType<GameManager>();
       
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        gameManager.GoToMenu();
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        
    }
}

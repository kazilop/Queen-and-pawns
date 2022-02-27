using UnityEngine;
using UnityEngine.UI;

public class btnMenu : MonoBehaviour
{
    GameManager gameManager;
    private Button btn;
    void Start()
    {
        gameManager = FindObjectOfType<GameManager>();
        btn = GetComponent<Button>();
        btn.onClick.AddListener(LoadMenu);
    }

    private void LoadMenu()
    {
        gameManager.GoToMenu();
    }
}

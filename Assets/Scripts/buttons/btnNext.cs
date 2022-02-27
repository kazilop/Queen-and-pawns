using UnityEngine;
using UnityEngine.UI;

public class btnNext : MonoBehaviour
{
    GameManager gameManager;
    private Button btn;
    void Start()
    {
        gameManager = FindObjectOfType<GameManager>();
        btn = GetComponent<Button>();
        btn.onClick.AddListener(Next);
    }

    private void Next()
    {
        gameManager.NextLevel();
    }
}

using UnityEngine;
using UnityEngine.UI;

public class btnRepeat : MonoBehaviour
{
    GameManager gameManager;
    private Button btn;
    void Start()
    {
        gameManager = FindObjectOfType<GameManager>();
        btn = GetComponent<Button>();
        btn.onClick.AddListener(Repeat);
    }

    private void Repeat()
    {
        gameManager.Repeat();
    }
}

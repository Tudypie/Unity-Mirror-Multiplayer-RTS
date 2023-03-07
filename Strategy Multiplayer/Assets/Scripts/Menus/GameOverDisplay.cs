using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Mirror;

public class GameOverDisplay : MonoBehaviour
{
    [SerializeField] private GameObject gameOverDisplayParent;
    [SerializeField] private TMP_Text winnerNameText = null;

    private void Start()
    {
        GameOverHandler.ClientOnGameOver += ClientHandleGameover;
    }

    private void OnDestroy()
    {
        GameOverHandler.ClientOnGameOver -= ClientHandleGameover;
    }

    private void ClientHandleGameover(string winner)
    {
        gameOverDisplayParent.SetActive(true);
        winnerNameText.text = $"{winner} has won";
    }

    public void LeaveGame()
    {
        if(NetworkServer.active && NetworkClient.isConnected)
        {
            NetworkManager.singleton.StopHost();
        }
        else
        {
            NetworkManager.singleton.StopClient();
        }
    }

}

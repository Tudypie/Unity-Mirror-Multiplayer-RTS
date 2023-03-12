using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Mirror;
using TMPro;

public class LobbyMenu : MonoBehaviour
{
    [SerializeField] private GameObject lobbyUI;
    [SerializeField] private Button startButton;
    [SerializeField] private TMP_Text[] playerNameTexts = new TMP_Text[4];

    private void Start()
    {
        NM.ClientOnConnected += HandleClientConnected;
        Player.AuthorityOnPartyOwnerStateUpdated += AuthorityHandlePartyOwnerStateUpdated;
        Player.ClientOnInfoUpdated += ClientHandleInfoUpdated;
    }

    private void OnDestroy()
    {
        NM.ClientOnConnected -= HandleClientConnected;
        Player.AuthorityOnPartyOwnerStateUpdated -= AuthorityHandlePartyOwnerStateUpdated;
        Player.ClientOnInfoUpdated -= ClientHandleInfoUpdated;
    }

    private void HandleClientConnected()
    {
        lobbyUI.SetActive(true);
    }

    private void AuthorityHandlePartyOwnerStateUpdated(bool state)
    {
        startButton.gameObject.SetActive(state);
    }

    private void ClientHandleInfoUpdated()
    {
        List<Player> players = ((NM)NetworkManager.singleton).Players;

        for(int i = 0; i < players.Count; i++)
        {
            playerNameTexts[i].text = players[i].GetDisplayName();
        }

        for(int i = players.Count; i < playerNameTexts.Length; i++)
        {
            playerNameTexts[i].text = "Waiting For Player...";
        }

        startButton.interactable = players.Count >= 2;
    }
    
    public void StartGame()
    {
        NetworkClient.connection.identity.GetComponent<Player>().CmdStartGame();
    }

    public void LeaveLobby()
    {
        if(NetworkServer.active && NetworkClient.isConnected)
        {
            NetworkManager.singleton.StopHost();
        }
        else
        {
            NetworkManager.singleton.StopClient();

            SceneManager.LoadScene(0);
        }   
    }
}

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Mirror;

public class NM : NetworkManager
{
    [SerializeField] private GameObject unitBasePrefab = null;
    [SerializeField] private GameObject gameOverHandlerPrefab = null;

    private bool isGameInProgress = false;

    public List<Player> Players { get; } = new List<Player>();

    public static event Action ClientOnConnected;
    public static event Action ClientOnDisconnected;

    #region Server

    public override void OnServerConnect(NetworkConnectionToClient conn)
    {   
        if(!isGameInProgress) return;

        conn.Disconnect();
    }

    public override void OnServerDisconnect(NetworkConnectionToClient conn)
    {   
        Player player = conn.identity.GetComponent<Player>();
    
        Players.Remove(player);

        base.OnServerDisconnect(conn);
    }

    public override void OnStopServer()
    {
        Players.Clear();

        isGameInProgress = false;
    }

    public void StartGame()
    {
        if(Players.Count < 2) return;

        isGameInProgress = true;

        ServerChangeScene("Game");
    }

    public override void OnServerAddPlayer(NetworkConnectionToClient conn)
    {
        base.OnServerAddPlayer(conn);

        Player player = conn.identity.GetComponent<Player>();

        Players.Add(player);

        player.SetDisplayName($"Player {Players.Count}");

        player.SetTeamColor(new Color(UnityEngine.Random.Range(0f, 1f), UnityEngine.Random.Range(0f, 1f), UnityEngine.Random.Range(0f, 1f)));

        player.SetPartyOwner(Players.Count == 1);
    }

    public override void OnServerSceneChanged(string sceneName)
    {
        if(SceneManager.GetActiveScene().name.StartsWith("Game"))
        {
            GameObject gameOverHandlerInstance = Instantiate(gameOverHandlerPrefab);
            
            NetworkServer.Spawn(gameOverHandlerInstance);

            foreach(Player player in Players)
            {
                GameObject baseInstance = Instantiate(unitBasePrefab, GetStartPosition().position, Quaternion.identity);

                NetworkServer.Spawn(baseInstance, player.connectionToClient);
            }
        }
    }

    #endregion

    #region Client

    public override void OnClientConnect()
    {   
        base.OnClientConnect();

        ClientOnConnected?.Invoke();
    }

    public override void OnClientDisconnect()
    {
        base.OnClientDisconnect();

        ClientOnDisconnected?.Invoke();
    }

    public override void OnStopClient()
    {
        Players.Clear();
    }

    private void Update()
    {
        Debug.Log(Players.Count);
    }

    #endregion
}

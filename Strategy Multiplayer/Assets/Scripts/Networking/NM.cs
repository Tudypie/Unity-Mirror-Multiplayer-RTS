using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Mirror;

public class NM : NetworkManager
{
    [SerializeField] private GameObject unitSpawnerPrefab = null;
    [SerializeField] private GameObject gameOverHandlerPrefab = null;

    public override void OnServerAddPlayer(NetworkConnectionToClient conn)
    {
        base.OnServerAddPlayer(conn);

        GameObject unitSpawnerInstance = Instantiate(unitSpawnerPrefab, conn.identity.transform.position, conn.identity.transform.rotation);
        NetworkServer.Spawn(unitSpawnerInstance, conn);
    }

    public override void OnServerSceneChanged(string sceneName)
    {
        if(SceneManager.GetActiveScene().name.StartsWith("Game"))
        {
            GameObject gameOverHandlerInstance = Instantiate(gameOverHandlerPrefab);
            
            NetworkServer.Spawn(gameOverHandlerInstance);
        }
    }
}

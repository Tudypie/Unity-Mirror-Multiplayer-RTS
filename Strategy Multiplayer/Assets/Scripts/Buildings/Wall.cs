using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class Wall : NetworkBehaviour
{
    [SerializeField] private Health health = null;

    public override void OnStartServer()
    {
        health.ServerOnDie += ServerHandleOnDie;
    }

    public override void OnStopServer()
    {
        health.ServerOnDie -= ServerHandleOnDie;
    }

    [Server]
    private void ServerHandleOnDie()
    {
        NetworkServer.Destroy(gameObject);
    }
}

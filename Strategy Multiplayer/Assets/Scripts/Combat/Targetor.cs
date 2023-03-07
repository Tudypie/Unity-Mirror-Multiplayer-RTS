using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class Targetor : NetworkBehaviour
{
    private Targetable target;

    public Targetable GetTarget()
    {
        return target;
    }

    [Command]
    public void CmdSetTarget(GameObject targetGameObject)
    {
        if(!targetGameObject.TryGetComponent<Targetable>(out Targetable newTarget)) return;

        target = newTarget;
    }

    public override void OnStartServer()
    {
        GameOverHandler.ServerOnGameOver += ServerHandleGameOver;
    }

    public override void OnStopServer()
    {
        GameOverHandler.ServerOnGameOver -= ServerHandleGameOver;
    }

    [Server]
    public void ClearTarget()
    {
        target = null;
    }

    [Server]
    private void ServerHandleGameOver()
    {
        ClearTarget();
    }

}

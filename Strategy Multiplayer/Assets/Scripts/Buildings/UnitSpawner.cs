using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using Mirror;

public class UnitSpawner : NetworkBehaviour, IPointerClickHandler
{   
    [SerializeField] private Health health = null;
    [SerializeField] private GameObject unitPrefab;
    [SerializeField] private Transform unitSpawnpoint;

    #region Server

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


    [Command]
    private void CmdSpawnUnit()
    {
        GameObject unitInstance = Instantiate(unitPrefab, unitSpawnpoint.position, unitSpawnpoint.rotation);

        NetworkServer.Spawn(unitInstance, connectionToClient);
    }

    #endregion

    #region Client

    public void OnPointerClick(PointerEventData eventData)
    {
        if(eventData.button != PointerEventData.InputButton.Left) return;

        if(!isOwned) return;

        CmdSpawnUnit();
    }
    
    #endregion
}

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using Mirror;

public class Unit : NetworkBehaviour
{   
    [SerializeField] private Health health;
    [SerializeField] private UnitMovement unitMovement = null;
    [SerializeField] private Targetor targetor = null;
    [SerializeField] private UnityEvent onSelected = null;
    [SerializeField] private UnityEvent onDeselected = null;

    public static event Action<Unit> ServerOnUnitSpawned;
    public static event Action<Unit> ServerOnUnitDespawned;

    public static event Action<Unit> AuthorityOnUnitSpawned;
    public static event Action<Unit> AuthorityOnUnitDespawned;

    public UnitMovement GetUnitMovement()
    {
        return unitMovement;
    }

    public Targetor GetTargetor()
    {
        return targetor;
    }

    #region Server

    public override void OnStartServer()
    {
        ServerOnUnitSpawned?.Invoke(this);
        health.ServerOnDie += ServerHandleOnDie;
    }

    public override void OnStopServer()
    {
        ServerOnUnitDespawned?.Invoke(this);
        health.ServerOnDie -= ServerHandleOnDie;
    }

    [Server]
    private void ServerHandleOnDie()
    {
        NetworkServer.Destroy(gameObject);
    }

    #endregion

    #region Client

    public override void OnStartAuthority()
    {
        AuthorityOnUnitSpawned?.Invoke(this);
    }

    public override void OnStopClient()
    {   
        if(!isOwned) return;

        AuthorityOnUnitDespawned?.Invoke(this);
    }


    [Client]
    public void Select()
    {
        if(!isOwned) return;
        onSelected?.Invoke();
    }

    [Client]
    public void Deselect()
    {
        if(!isOwned) return;
        onDeselected?.Invoke();
    }

    #endregion
}

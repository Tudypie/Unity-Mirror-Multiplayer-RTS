using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Mirror;
using TMPro;

public class UnitSpawner : NetworkBehaviour, IPointerClickHandler
{   
    [SerializeField] private Health health = null;
    [SerializeField] private Unit unitPrefab;
    [SerializeField] private Transform unitSpawnpoint;
    [SerializeField] private TMP_Text remainingUnitsText = null;
    [SerializeField] private Image unitProgressImage = null;
    [SerializeField] private int maxUnitQueue = 5;
    [SerializeField] private float spawnMoveRange = 12;
    [SerializeField] private float unitSpawnDuration = 5f;

    [SyncVar(hook = nameof(ClientHandleQueuedUnitsUpdated))]
    private int queuedUnits;
    [SyncVar]
    private float unitTimer;

    private float progressImageVelocity;

    private void Update()
    {
        if(isServer) ProduceUnits();
        if(isClient) UpdateTimerDisplay();
    }

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
    private void ProduceUnits()
    {
        if(queuedUnits == 0) return;

        unitTimer += Time.deltaTime;

        if(unitTimer < unitSpawnDuration) return;

        GameObject unitInstance = Instantiate(unitPrefab.gameObject, unitSpawnpoint.position, unitSpawnpoint.rotation);

        NetworkServer.Spawn(unitInstance, connectionToClient);

        Vector3 spawnOffset = Vector3.Max(Random.insideUnitSphere * spawnMoveRange, Random.insideUnitSphere * spawnMoveRange);
        spawnOffset.y = unitSpawnpoint.position.y;

        UnitMovement unitMovement = unitInstance.GetComponent<UnitMovement>();
        unitMovement.ServerMove(unitSpawnpoint.position + spawnOffset);

        queuedUnits--;
        unitTimer = 0f;
    }

    [Server]
    private void ServerHandleOnDie()
    {
        NetworkServer.Destroy(gameObject);
    }


    [Command]
    private void CmdSpawnUnit()
    {
        if(queuedUnits == maxUnitQueue) return;

        Player player = connectionToClient.identity.GetComponent<Player>();

        if(player.GetResources() < unitPrefab.GetResourceCost()) return;

        queuedUnits++;

        player.SetResources(player.GetResources() - unitPrefab.GetResourceCost());
    }

    #endregion

    #region Client

    public void OnPointerClick(PointerEventData eventData)
    {
        if(eventData.button != PointerEventData.InputButton.Left) return;

        if(!isOwned) return;

        CmdSpawnUnit();
    }

    private void ClientHandleQueuedUnitsUpdated(int oldQueuedUnits, int newQueuedUnits)
    {
        remainingUnitsText.text = newQueuedUnits.ToString();
    }

    private void UpdateTimerDisplay()
    {
        float newProgress = unitTimer / unitSpawnDuration;

        if(newProgress < unitProgressImage.fillAmount)
        {
            unitProgressImage.fillAmount = newProgress;
        }
        else
        {
            unitProgressImage.fillAmount = Mathf.SmoothDamp(unitProgressImage.fillAmount, newProgress, ref progressImageVelocity, 0.1f);
        }
    }
    
    #endregion
}

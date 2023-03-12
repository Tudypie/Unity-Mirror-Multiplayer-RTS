using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using Mirror;


public class UnitSelectionHandler : MonoBehaviour
{
    public List<Unit> SelectedUnits {get;} = new List<Unit>();

    [SerializeField] private LayerMask layerMask = new LayerMask();

    [SerializeField] private RectTransform unitSelectionArea = null;

    private Vector2 startPos;

    private Player player;
    private Camera mainCamera;
    
    private bool canSelect = true;

    private void Start()
    {
        mainCamera = Camera.main;
        player = NetworkClient.connection.identity.GetComponent<Player>();

        Unit.AuthorityOnUnitDespawned += AuthorityHandleUnitDespawn;
        GameOverHandler.ClientOnGameOver += ClientHandleGameOver;

        BuildingButton.EnableSelectionArea += EnableSelectionArea;
        BuildingButton.DisableSelectionArea += DisableSelectionArea;
        Minimap.EnableSelectionArea += EnableSelectionArea;
        Minimap.DisableSelectionArea += DisableSelectionArea;
    }

    private void OnDestroy()
    {
        Unit.AuthorityOnUnitDespawned -= AuthorityHandleUnitDespawn;
        GameOverHandler.ClientOnGameOver -= ClientHandleGameOver;

        BuildingButton.EnableSelectionArea -= EnableSelectionArea;
        BuildingButton.DisableSelectionArea -= DisableSelectionArea;
        Minimap.EnableSelectionArea -= EnableSelectionArea;
        Minimap.DisableSelectionArea -= DisableSelectionArea;
    }   

    private void Update()
    {   
        if(!canSelect) return;

        if(Mouse.current.leftButton.wasPressedThisFrame)
        {
           StartSelectionArea();
        }
        else if(Mouse.current.leftButton.wasReleasedThisFrame)
        {
            ClearSelectionArea();
        }
        else if(Mouse.current.leftButton.isPressed)
        {
            UpdateSelectionArea();
        }
    }

    
    private void StartSelectionArea()
    {
        if(!Keyboard.current.leftShiftKey.isPressed)
        {
            foreach(Unit selectedUnit in SelectedUnits)
            {
                selectedUnit.Deselect();
            }

            SelectedUnits.Clear();
        }
        
        unitSelectionArea.gameObject.SetActive(true);

        startPos = Mouse.current.position.ReadValue();

        UpdateSelectionArea();
    }

    private void UpdateSelectionArea()
    {
        Vector2 mousePosition = Mouse.current.position.ReadValue();

        float areaWidth = mousePosition.x - startPos.x;
        float areaHeight = mousePosition.y - startPos.y;

        unitSelectionArea.sizeDelta = new Vector2(Mathf.Abs(areaWidth), Mathf.Abs(areaHeight));
        unitSelectionArea.anchoredPosition = startPos + new Vector2(areaWidth/2, areaHeight/2);
    }

    private void ClearSelectionArea()
    {
        unitSelectionArea.gameObject.SetActive(false);

        if(unitSelectionArea.sizeDelta.magnitude == 0)
        {
            Ray ray = mainCamera.ScreenPointToRay(Mouse.current.position.ReadValue());

            if(!Physics.Raycast(ray, out RaycastHit hit, Mathf.Infinity, layerMask)) return;

            if(!hit.collider.TryGetComponent<Unit>(out Unit unit)) return;

            if(!unit.isOwned) return;

            SelectedUnits.Add(unit);

            foreach(Unit selectedUnit in SelectedUnits)
            {
            selectedUnit.Select();
            }

            return;
        }

        Vector2 min = unitSelectionArea.anchoredPosition - (unitSelectionArea.sizeDelta / 2);
        Vector2 max = unitSelectionArea.anchoredPosition + (unitSelectionArea.sizeDelta / 2);

        foreach(Unit unit in player.GetMyUnits())
        {

            if(SelectedUnits.Contains(unit)) continue;

            Vector3 screenPosition = mainCamera.WorldToScreenPoint(unit.transform.position);

            if(screenPosition.x > min.x && screenPosition.x < max.x && 
            screenPosition.y > min.y && screenPosition.y < max.y)
            {

                SelectedUnits.Add(unit);
                unit.Select();
            }
        }
        
    }

    private void AuthorityHandleUnitDespawn(Unit unit)
    {
        SelectedUnits.Remove(unit);
    }

    private void ClientHandleGameOver(string winnerName)
    {
        enabled = false;
    }

    private void EnableSelectionArea()
    {
        canSelect = true;
    }

    private void DisableSelectionArea()
    {
        canSelect = false;
    }

}

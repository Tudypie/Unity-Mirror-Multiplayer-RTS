using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using Mirror;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;

public class BuildingButton : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    [SerializeField] private Building building = null;
    [SerializeField] private Image iconImage= null;
    [SerializeField] private TMP_Text priceText = null;
    [SerializeField] private LayerMask floorMask = new LayerMask();

    private Camera mainCamera;
    private Player player;
    private BoxCollider buildingCollider;
    private GameObject buildingPreviewInstance;
    private Renderer buildingRendererInstance;

    public static event Action DisableSelectionArea;
    public static event Action EnableSelectionArea;


    private void Start()
    {
        mainCamera = Camera.main;
        player = NetworkClient.connection.identity.GetComponent<Player>();
        iconImage.sprite = building.GetIcon();
        priceText.text = building.GetPrice().ToString();
        buildingCollider = building.GetComponent<BoxCollider>();
    }

    private void Update()
    {
        if(buildingPreviewInstance == null) return;

        UpdateBuildingPreview();
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        if(eventData.button != PointerEventData.InputButton.Left) return;

        if(player.GetResources() < building.GetPrice()) return;

        buildingPreviewInstance = Instantiate(building.GetBuildingPreview());
        buildingRendererInstance = buildingPreviewInstance.GetComponentInChildren<Renderer>();

        buildingPreviewInstance.SetActive(false);

        DisableSelectionArea?.Invoke();
    }

    public void OnPointerUp(PointerEventData eventData)
    {   
        if(buildingPreviewInstance == null) return;
        
        Ray ray = mainCamera.ScreenPointToRay(Mouse.current.position.ReadValue());

        if(Physics.Raycast(ray, out RaycastHit hit, Mathf.Infinity, floorMask))
        {
            player.CmdTryPlaceBuilding(building.GetId(), hit.point);
        }

        Destroy(buildingPreviewInstance);

        EnableSelectionArea?.Invoke();
    }

    private void UpdateBuildingPreview()
    {
        Ray ray = mainCamera.ScreenPointToRay(Mouse.current.position.ReadValue());

        if(!Physics.Raycast(ray, out RaycastHit hit, Mathf.Infinity, floorMask)) return;

        buildingPreviewInstance.transform.position = hit.point;

        if(!buildingPreviewInstance.activeSelf)
        {
            buildingPreviewInstance.SetActive(true);
        }

        Color color = player.CanPlaceBuilding(buildingCollider, hit.point) ? Color.green : Color.red;

        buildingRendererInstance.material.SetColor("_Color", color);
    }
}

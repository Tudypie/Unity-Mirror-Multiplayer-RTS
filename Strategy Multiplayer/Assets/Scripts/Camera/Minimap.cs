using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.EventSystems;
using Mirror;

public class Minimap : MonoBehaviour, IPointerDownHandler, IPointerUpHandler, IDragHandler
{
    [SerializeField] private RectTransform minimapRect = null;
    [SerializeField] private float mapScale = 150f;
    [SerializeField] private float offset = -6f;

    private Transform playerCameraTransform;

    public static event Action DisableSelectionArea;
    public static event Action EnableSelectionArea;

    private void Update()
    {
        if(playerCameraTransform != null) return;

        if(NetworkClient.connection?.identity == null) return;

        playerCameraTransform = NetworkClient.connection.identity.GetComponent<Player>().GetCameraTransform();
    }

    private void MoveCamera()
    {
        Vector2 mousePos = Mouse.current.position.ReadValue();

        if(!RectTransformUtility.ScreenPointToLocalPointInRectangle(minimapRect, mousePos, null, out Vector2 localPoint)) return; 

        Vector2 lerp = new Vector2(
            (localPoint.x - minimapRect.rect.x) / minimapRect.rect.width, 
            (localPoint.y - minimapRect.rect.y) / minimapRect.rect.height);

        Vector3 newCameraPos = new Vector3(
            Mathf.Lerp(-mapScale, mapScale, lerp.x),
            playerCameraTransform.position.y,
            Mathf.Lerp(-mapScale, mapScale, lerp.y));

        playerCameraTransform.position = newCameraPos + new Vector3(0f, 0f, offset);

        DisableSelectionArea?.Invoke();
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        MoveCamera();
    }

    public void OnDrag(PointerEventData eventData)
    {
        MoveCamera();
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        EnableSelectionArea?.Invoke();
    }
}

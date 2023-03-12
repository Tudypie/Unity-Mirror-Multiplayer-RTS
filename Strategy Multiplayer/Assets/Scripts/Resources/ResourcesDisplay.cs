using System.Collections;
using System.Collections.Generic;
using TMPro;
using Mirror;
using UnityEngine;

public class ResourcesDisplay : MonoBehaviour
{
    [SerializeField] private TMP_Text resourcesText = null;

    private Player player;

    private void Start()
    {
        player = NetworkClient.connection.identity.GetComponent<Player>();

        ClientHandleResourcesUpdated(player.GetResources());
        
        player.ClientOnResourcesUpdated += ClientHandleResourcesUpdated;
    }

    private void OnDestroy()
    {
        player.ClientOnResourcesUpdated -= ClientHandleResourcesUpdated;
    }

    private void ClientHandleResourcesUpdated(int resources)
    {
        resourcesText.text = $"Resources: {resources}";
    }
}

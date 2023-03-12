using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HealthDisplay : MonoBehaviour
{
    [SerializeField] private Health health = null;
    [SerializeField] private GameObject healthBarParent = null;
    [SerializeField] private Image healthBarImage = null;

    private bool mouseOver = false;

    private void Awake()
    {
        health.ClientOnHealthUpdated += HandleHealthUpdated;
    }

    private void OnDestroy()
    {
        health.ClientOnHealthUpdated -= HandleHealthUpdated;
    }

    private void Update()
    {
        if(!mouseOver)
        {
            healthBarParent.SetActive(false);
            return;
        } 

        healthBarParent.SetActive(true);
    }

    private void OnMouseOver()
    {
        mouseOver = true;
    }

    private void OnMouseExit()
    {
        mouseOver = false;
    }

    private void HandleHealthUpdated(int currentHealth, int maxHealth)
    {
        healthBarImage.fillAmount = (float)currentHealth / maxHealth;
    }


}

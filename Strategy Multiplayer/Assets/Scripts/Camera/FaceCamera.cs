using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FaceCamera : MonoBehaviour
{
    private Transform mainCamTransform = null;

    private void Start()
    {
        mainCamTransform = Camera.main.transform;
    }

    private void LateUpdate()
    {
        transform.LookAt(transform.position + mainCamTransform.rotation * Vector3.forward, mainCamTransform.rotation * Vector3.up);
    }
}

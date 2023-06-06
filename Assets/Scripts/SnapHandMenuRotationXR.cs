using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class SnapHandMenuRotationXR : MonoBehaviour
{
    [SerializeField]
    private XRBaseInteractable interactable;

    [SerializeField]
    private Transform handMenu;

    private bool isDragging = false;

    private void OnEnable()
    {
        interactable.selectEntered.AddListener(OnSelectEntered);
        interactable.selectExited.AddListener(OnSelectExited);
    }

    private void OnDisable()
    {
        interactable.selectEntered.RemoveListener(OnSelectEntered);
        interactable.selectExited.RemoveListener(OnSelectExited);
    }

    private void OnSelectEntered(SelectEnterEventArgs args)
    {
        isDragging = true;
    }

    private void OnSelectExited(SelectExitEventArgs args)
    {
        isDragging = false;
    }

    private void Update()
    {
        if (isDragging)
        {
            Vector3 pointerPosition = interactable.transform.position;
            handMenu.LookAt(pointerPosition);
            handMenu.rotation = Quaternion.Euler(handMenu.eulerAngles.x, handMenu.eulerAngles.y, 0);
        }
    }
}

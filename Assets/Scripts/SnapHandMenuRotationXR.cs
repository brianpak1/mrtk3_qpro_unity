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
        interactable.onSelectEntered.AddListener(OnSelectEntered);
        interactable.onSelectExited.AddListener(OnSelectExited);
    }

    private void OnDisable()
    {
        interactable.onSelectEntered.RemoveListener(OnSelectEntered);
        interactable.onSelectExited.RemoveListener(OnSelectExited);
    }

    private void OnSelectEntered(XRBaseInteractor interactor)
    {
        isDragging = true;
    }

    private void OnSelectExited(XRBaseInteractor interactor)
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

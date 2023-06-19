using UnityEngine;

public class SnapToObject : MonoBehaviour
{
    public Transform targetSocket; // The socket Transform where the object should snap to
    public Transform snapTransform; // Transform that holds the exact position and rotation to snap to
    public float snapDistance = 0.5f; // The distance within which the object will snap to the socket
    public GameObject ghostObject; // The semi-transparent version of the object

    private bool isSnapped = false;
    private bool isDragging = false;
    private Vector3 originalGhostScale; // To store the original scale of the ghost object

    void Start()
    {
        // Store the original scale of the ghost object
        originalGhostScale = ghostObject.transform.localScale;
    }

    void Update()
    {
        // Check if the object is close enough to the socket and has not already snapped
        if (!isSnapped && isDragging && Vector3.Distance(transform.position, targetSocket.position) < snapDistance)
        {
            ShowGhost();
        }
        else
        {
            HideGhost();
        }
    }

    private void ShowGhost()
    {
        // Place the ghost object at the snapTransform's location
        ghostObject.transform.position = snapTransform.position;
        ghostObject.transform.rotation = snapTransform.rotation;

        // Set the ghost object's scale to its original scale
        ghostObject.transform.localScale = originalGhostScale;

        // Show the ghost object
        ghostObject.SetActive(true);
    }

    private void HideGhost()
    {
        // Hide the ghost object
        ghostObject.SetActive(false);
    }

    public void Snap()
    {
        // Hide the ghost object
        HideGhost();

        // Align the object with the snapTransform
        transform.position = snapTransform.position;
        transform.rotation = snapTransform.rotation;

        // Mark the object as snapped
        isSnapped = true;
    }

    // Call this function from ObjectManipulator's OnManipulationStarted
    public void OnManipulationStarted()
    {
        isDragging = true;
        // When dragging starts, set isSnapped to false to allow snapping again
        isSnapped = false;
        // Detach object from socket if it's a child
        transform.SetParent(null);
    }

    // Call this function from ObjectManipulator's OnManipulationEnded
    public void OnManipulationEnded()
    {
        isDragging = false;
        // Snap the object if it's close enough to the target socket
        if (Vector3.Distance(transform.position, targetSocket.position) < snapDistance)
        {
            Snap();
        }
    }
}

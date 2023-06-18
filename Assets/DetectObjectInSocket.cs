using UnityEngine;

public class DetectObjectInSocket : MonoBehaviour
{
    public GameObject objectToDetect; // Assign this from the Inspector
    public Transform parentWhenInsideSocket; // Assign this from the Inspector
    public Transform parentWhenOutsideSocket; // Assign this from the Inspector

    // This function is called when a GameObject enters the BoxCollider
    private void OnTriggerEnter(Collider other)
    {
        // Check if the GameObject that entered the BoxCollider is the objectToDetect
        if (other.gameObject == objectToDetect)
        {
            Debug.Log("The object has entered the socket.");

            // Change parent to parentWhenInsideSocket
            objectToDetect.transform.SetParent(parentWhenInsideSocket);
        }
    }

    // This function is called when a GameObject exits the BoxCollider
    private void OnTriggerExit(Collider other)
    {
        // Check if the GameObject that exited the BoxCollider is the objectToDetect
        if (other.gameObject == objectToDetect)
        {
            Debug.Log("The object has exited the socket.");

            // Change parent to parentWhenOutsideSocket
            objectToDetect.transform.SetParent(parentWhenOutsideSocket);
        }
    }
}

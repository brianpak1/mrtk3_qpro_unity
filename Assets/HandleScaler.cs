using System.Collections;
using UnityEngine;
using UnityEngine.Events;

public class HandleScaler : MonoBehaviour
{
    public Transform lineHandle; // Drag the transform of the line (handle) here.
    public float scaleFactor = 2f; // Set how much bigger you want the line to be when grabbed.
    public float transitionDuration = 0.3f; // Set duration of the transition.

    private Vector3 initialScale;

    void Start()
    {
        // Store the initial scale of the line handle.
        initialScale = lineHandle.localScale;
    }

    public void OnGrabbed() // This can be assigned to the ManipulationStarted event.
    {
        // Stop other scaling routines to prevent conflicts.
        StopAllCoroutines();
        // Start scaling routine for a smooth transition.
        StartCoroutine(ScaleOverTime(lineHandle, initialScale * scaleFactor, transitionDuration));
    }

    public void OnReleased() // This can be assigned to the ManipulationEnded event.
    {
        // Stop other scaling routines to prevent conflicts.
        StopAllCoroutines();
        // Start scaling routine for a smooth transition.
        StartCoroutine(ScaleOverTime(lineHandle, initialScale, transitionDuration));
    }

    IEnumerator ScaleOverTime(Transform transformToScale, Vector3 targetScale, float duration)
    {
        float timeElapsed = 0;

        Vector3 originalScale = transformToScale.localScale;

        while (timeElapsed < duration)
        {
            transformToScale.localScale = Vector3.Lerp(originalScale, targetScale, timeElapsed / duration);
            timeElapsed += Time.deltaTime;
            yield return null;
        }
        // Ensuring that the scale is exactly our target one at the end of the transition
        transformToScale.localScale = targetScale;
    }
}

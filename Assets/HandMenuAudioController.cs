using UnityEngine;
using Microsoft.MixedReality.Toolkit.SpatialManipulation;

public class HandMenuAudioController : MonoBehaviour
{
    public HandConstraint handConstraint;
    public AudioManager audioManager;
    public float lowPassCutoffFrequencyMenuActive = 5000f;
    public float lowPassCutoffFrequencyMenuInactive = 22000f;
    public float highPassCutoffFrequencyMenuActive = 1000f;
    public float highPassCutoffFrequencyMenuInactive = 10f;
    public float transitionTime = 2.0f; // Transition time in seconds

    private float currentLowPassFrequency;
    private float targetLowPassFrequency;
    private float currentHighPassFrequency;
    private float targetHighPassFrequency;
    private float transitionTimer;

    private void OnEnable()
    {
        handConstraint.OnHandActivate.AddListener(OnHandMenuActive);
        handConstraint.OnHandDeactivate.AddListener(OnHandMenuInactive);
    }

    private void OnDisable()
    {
        handConstraint.OnHandActivate.RemoveListener(OnHandMenuActive);
        handConstraint.OnHandDeactivate.RemoveListener(OnHandMenuInactive);
    }

    private void OnHandMenuActive()
    {
        targetLowPassFrequency = lowPassCutoffFrequencyMenuActive;
        targetHighPassFrequency = highPassCutoffFrequencyMenuActive;
        transitionTimer = transitionTime;
    }

    private void OnHandMenuInactive()
    {
        targetLowPassFrequency = lowPassCutoffFrequencyMenuInactive;
        targetHighPassFrequency = highPassCutoffFrequencyMenuInactive;
        transitionTimer = transitionTime;
    }

    private void Update()
    {
        if (Mathf.Abs(currentLowPassFrequency - targetLowPassFrequency) > 0.01f ||
            Mathf.Abs(currentHighPassFrequency - targetHighPassFrequency) > 0.01f)
        {
            transitionTimer -= Time.deltaTime;
            float t = Mathf.Clamp01(1f - (transitionTimer / transitionTime));
            currentLowPassFrequency = Mathf.Lerp(currentLowPassFrequency, targetLowPassFrequency, t);
            currentHighPassFrequency = Mathf.Lerp(currentHighPassFrequency, targetHighPassFrequency, t);
            audioManager.SetLowPassFilter(currentLowPassFrequency);
            audioManager.SetHighPassFilter(currentHighPassFrequency);
        }
    }
}

using UnityEngine;
using AK.Wwise;

public class RTPCFader : MonoBehaviour
{
    public string rtpcName = "pausing"; // Name of the RTPC parameter in Wwise
    public float fadeDuration = 1.0f; // Duration of the fade in seconds

    private float currentRtpcValue;
    private bool isFading = false;

    private void Start()
    {
        currentRtpcValue = 100f;
        AkSoundEngine.SetRTPCValue(rtpcName, currentRtpcValue);
    }

    public void ToggleRTPC()
    {
        if (!isFading)
        {
            StartCoroutine(FadeRTPC());
        }
    }

    private System.Collections.IEnumerator FadeRTPC()
    {
        isFading = true;

        float startValue = currentRtpcValue;
        float endValue = currentRtpcValue == 100f ? 0f : 100f;

        float startTime = Time.time;
        float elapsed = 0f;

        while (elapsed < fadeDuration)
        {
            elapsed = Time.time - startTime;
            currentRtpcValue = Mathf.Lerp(startValue, endValue, elapsed / fadeDuration);

            AkSoundEngine.SetRTPCValue(rtpcName, currentRtpcValue);

            yield return null;
        }

        currentRtpcValue = endValue;
        isFading = false;
    }
}

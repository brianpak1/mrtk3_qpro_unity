using UnityEngine;
using UnityEngine.Events;
using Microsoft.MixedReality.Toolkit.UX;

public class WwiseVolumeControl : MonoBehaviour
{
    [SerializeField]
    private string rtpcName = "MasterVolume"; // The name of your RTPC in Wwise

    [SerializeField]
    private float maxDecibels = 0f; // The max decibel value for the volume range in Wwise

    [SerializeField]
    private float minDecibels = -96f; // The min decibel value for the volume range in Wwise

    private Slider slider; // Reference to the Slider component

    private void Start()
    {
        // Find the Slider component attached to this game object
        slider = GetComponent<Slider>();

        // Subscribe to the OnValueUpdated event of the Slider component
        slider.OnValueUpdated.AddListener(UpdateMasterVolume);
    }

    public void UpdateMasterVolume(SliderEventData eventData)
    {
        float value = eventData.NewValue;
        float volumeInDecibels = Mathf.Lerp(maxDecibels, minDecibels, value);
        AkSoundEngine.SetRTPCValue(rtpcName, volumeInDecibels);
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MusicVisualizer : MonoBehaviour
{
    public AudioSource unityAudioSource;
    public float volumeRatio = 0.1f; // Adjust this value to control the volume ratio
    public float scaleFactor = 0.01f;
    private float baseScale;
    private bool isPaused = false; // Flag for muting the visualization

    // Add this variable to control the start time offset from the inspector
    public float startTimeOffset = 0f;

    // Static list to hold all active instances of MusicVisualizer
    public static List<MusicVisualizer> AllInstances = new List<MusicVisualizer>();

    void Awake()
    {
        // Add this instance to the list when it's created
        AllInstances.Add(this);
    }

    void OnDestroy()
    {
        // Remove this instance from the list when it's destroyed
        AllInstances.Remove(this);
    }

    void Start()
    {
        baseScale = transform.localScale.x;
        // Mute or unmute the Unity audio source based on the initial state of the visualization
        unityAudioSource.volume = isPaused ? 0f : unityAudioSource.volume * volumeRatio;

        // Set the start time offset and start the audio
        unityAudioSource.time = startTimeOffset;
        unityAudioSource.Play();
    }

    void Update()
    {
        // Get the audio spectrum data from Unity audio if not muted
        if (!isPaused)
        {
            float[] spectrumData = new float[256];
            unityAudioSource.GetSpectrumData(spectrumData, 0, FFTWindow.Triangle);

            // Calculate the average amplitude of the spectrum data
            float averageAmplitude = 0f;
            for (int i = 0; i < spectrumData.Length; i++)
            {
                averageAmplitude += spectrumData[i];
            }
            averageAmplitude /= spectrumData.Length;

            // Apply the average amplitude to the scale of the capsule
            float newScale = baseScale + averageAmplitude * scaleFactor;
            transform.localScale = new Vector3(newScale, newScale, newScale);
        }
    }

    public void TogglePauseResume()
    {
        isPaused = !isPaused;

        if (isPaused)
        {
            unityAudioSource.Pause();
        }
        else
        {
            unityAudioSource.Play();
        }
    }
}

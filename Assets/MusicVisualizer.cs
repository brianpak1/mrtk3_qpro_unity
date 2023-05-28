using UnityEngine;

public class MusicVisualizer : MonoBehaviour
{
    public AudioSource unityAudioSource;
    public float volumeRatio = 0.1f; // Adjust this value to control the volume ratio
    public float scaleFactor = 0.01f;
    private float baseScale;
    private bool isMuted = false; // Flag for muting the visualization

    void Start()
    {
        baseScale = transform.localScale.x;
        // Mute or unmute the Unity audio source based on the initial state of the visualization
        unityAudioSource.volume = isMuted ? 0f : unityAudioSource.volume * volumeRatio;
    }

    void Update()
    {
        // Get the audio spectrum data from Unity audio if not muted
        if (!isMuted)
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

    public void SetMute(bool mute)
    {
        isMuted = mute;
        unityAudioSource.volume = isMuted ? 0f : unityAudioSource.volume * volumeRatio;
    }
}

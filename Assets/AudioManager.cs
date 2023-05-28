using UnityEngine;

public class AudioManager : MonoBehaviour
{
    public static AudioManager Instance { get; private set; }

    public float volume = 1f;
    public float spatialBlend = 1f;
    public float dopplerLevel = 0f;
    public AudioRolloffMode rolloffMode = AudioRolloffMode.Logarithmic;
    public float minDistance = 1f;
    public float maxDistance = 500f;
    public bool applyLowPassFilter = false;
    public float lowPassCutoffFrequency = 5000f;
    public bool applyHighPassFilter = false;
    public float highPassCutoffFrequency = 10f;

    private AudioSource currentAudioSource = null;
    private AudioHighPassFilter highPassFilter;

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(this.gameObject);
        }
        else
        {
            Instance = this;
        }
    }

    public AudioSource CreateAudioSourceAtPosition(Vector3 position, AudioClip audioClip)
    {
        if (currentAudioSource != null)
        {
            Destroy(currentAudioSource.gameObject);
        }

        GameObject audioSourceGameObject = new GameObject("AudioSource");
        audioSourceGameObject.transform.position = position;

        currentAudioSource = audioSourceGameObject.AddComponent<AudioSource>();
        currentAudioSource.clip = audioClip;
        currentAudioSource.spatialBlend = spatialBlend;
        currentAudioSource.dopplerLevel = dopplerLevel;
        currentAudioSource.rolloffMode = rolloffMode;
        currentAudioSource.minDistance = minDistance;
        currentAudioSource.maxDistance = maxDistance;
        currentAudioSource.volume = volume;

        currentAudioSource.loop = true;

        currentAudioSource.Play();
   

        if (applyLowPassFilter)
        {
            AudioLowPassFilter lowPassFilter = audioSourceGameObject.AddComponent<AudioLowPassFilter>();
            lowPassFilter.cutoffFrequency = lowPassCutoffFrequency;
        }

        if (applyHighPassFilter)
        {
            highPassFilter = audioSourceGameObject.AddComponent<AudioHighPassFilter>();
            highPassFilter.cutoffFrequency = highPassCutoffFrequency;
        }

        return currentAudioSource;
    }

    public void SetLowPassFilter(float cutoffFrequency)
    {
        if (currentAudioSource != null)
        {
            AudioLowPassFilter lowPassFilter = currentAudioSource.GetComponent<AudioLowPassFilter>();
            if (lowPassFilter != null)
            {
                lowPassFilter.cutoffFrequency = cutoffFrequency;
            }
        }
    }

    public void SetHighPassFilter(float cutoffFrequency)
    {
        if (currentAudioSource != null)
        {
            AudioHighPassFilter highPassFilter = currentAudioSource.GetComponent<AudioHighPassFilter>();
            if (highPassFilter != null)
            {
                highPassFilter.cutoffFrequency = cutoffFrequency;
            }
        }
    }
}

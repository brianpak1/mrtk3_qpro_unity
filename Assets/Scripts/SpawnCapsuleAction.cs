using System.Collections;
using UnityEngine;

public class SpawnCapsuleAction : MonoBehaviour
{
    public GameObject capsulePrefab;
    public Transform spawnTransform;
    public Vector3 spawnOffset;
    public AK.Wwise.Event wwiseEvent;
    public uint lastPlayingID;
    public AK.Wwise.RTPC handMenuOpenRTPC;
    public AK.Wwise.RTPC handMenuCloseRTPC;
    [SerializeField]
    private GameObject handMenu;
    public float transitionDuration = 1f;

    public Transform LastSpawnedCapsuleTransform { get; private set; }

    private bool wasHandMenuActive = false;
    private float targetOpenRTPCValue = 100f;
    private float currentOpenRTPCValue = 100f;
    private float currentCloseRTPCValue = 0f;
    private AK.Wwise.Event lastEvent;
    private Coroutine pitchShiftCoroutine = null;

    void Start()
    {
        handMenuCloseRTPC.SetGlobalValue(0f);
    }

    void Update()
    {
        bool isHandMenuActive = handMenu.activeSelf;

        if (isHandMenuActive != wasHandMenuActive)
        {
            wasHandMenuActive = isHandMenuActive;
            targetOpenRTPCValue = isHandMenuActive ? 0f : 100f;

            // If hand menu is opening
            if (!isHandMenuActive && pitchShiftCoroutine == null)
            {
                pitchShiftCoroutine = StartCoroutine(HandlePitchShift());
            }
        }

        currentOpenRTPCValue = Mathf.Lerp(currentOpenRTPCValue, targetOpenRTPCValue, Time.deltaTime / transitionDuration);
        handMenuOpenRTPC.SetGlobalValue(currentOpenRTPCValue);
    }

    IEnumerator HandlePitchShift()
    {
        float startTime = Time.time;

        while (Time.time - startTime < transitionDuration)
        {
            currentCloseRTPCValue = Mathf.Lerp(0, 100, (Time.time - startTime) / transitionDuration);
            handMenuCloseRTPC.SetGlobalValue(currentCloseRTPCValue);
            yield return null;
        }

        handMenuCloseRTPC.SetGlobalValue(0f);
        pitchShiftCoroutine = null;
    }

    public void Execute()
    {
        if (capsulePrefab != null && spawnTransform != null)
        {
            if (lastEvent != null)
            {
                lastEvent.Stop(LastSpawnedCapsuleTransform.gameObject);
            }

            GameObject capsuleInstance = Instantiate(capsulePrefab, spawnTransform.position + spawnOffset, Quaternion.identity);
            LastSpawnedCapsuleTransform = capsuleInstance.transform;

            wwiseEvent.Post(capsuleInstance);
            lastEvent = wwiseEvent;
            lastPlayingID = wwiseEvent.Post(capsuleInstance);
            lastEvent = wwiseEvent;
            //TogglePlayPause.isPlaying = true; // Add this line
        }
    }
}

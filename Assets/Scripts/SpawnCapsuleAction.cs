using UnityEngine;

public class SpawnCapsuleAction : MonoBehaviour
{
    public GameObject capsulePrefab;
    public Transform spawnTransform;
    public Vector3 spawnOffset;
    public AK.Wwise.Event wwiseEvent;
    public AK.Wwise.RTPC handMenuOpenRTPC;
    [SerializeField]
    private GameObject handMenu;
    public float transitionDuration = 1f;  // adjust this value to your preference

public Transform LastSpawnedCapsuleTransform { get; private set; }

    private bool wasHandMenuActive = false;
    private float targetRTPCValue = 100f;
    private float currentRTPCValue = 100f;
    private AK.Wwise.Event lastEvent;  // new field to store the last playing sound event

    void Update()
    {
        bool isHandMenuActive = handMenu.activeSelf;

        if (isHandMenuActive != wasHandMenuActive)
        {
            wasHandMenuActive = isHandMenuActive;
            targetRTPCValue = isHandMenuActive ? 0f : 100f;
        }

        // smoothly transition RTPC value
        currentRTPCValue = Mathf.Lerp(currentRTPCValue, targetRTPCValue, Time.deltaTime / transitionDuration);
        handMenuOpenRTPC.SetGlobalValue(currentRTPCValue);
    }

    public void Execute()
    {
        if (capsulePrefab != null && spawnTransform != null)
        {
            // Stop the last sound event, if one exists
            if (lastEvent != null)
            {
                lastEvent.Stop(LastSpawnedCapsuleTransform.gameObject);
            }

            GameObject capsuleInstance = Instantiate(capsulePrefab, spawnTransform.position + spawnOffset, Quaternion.identity);
            LastSpawnedCapsuleTransform = capsuleInstance.transform;

            wwiseEvent.Post(capsuleInstance);
            lastEvent = wwiseEvent;  // store the sound event for later
        }
    }

}
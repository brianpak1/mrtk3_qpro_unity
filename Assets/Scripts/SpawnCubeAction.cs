using UnityEngine;

public class SpawnCubeAction : BaseButtonAction
{
    public GameObject cubePrefab;
    public SpawnCapsuleAction capsuleSpawner;

    public override void Execute()
    {
        if (cubePrefab != null && capsuleSpawner != null)
        {
            Transform lastCapsuleTransform = capsuleSpawner.LastSpawnedCapsuleTransform;
            if (lastCapsuleTransform != null)
            {
                Instantiate(cubePrefab, lastCapsuleTransform.position, Quaternion.identity);
            }
        }
    }
}

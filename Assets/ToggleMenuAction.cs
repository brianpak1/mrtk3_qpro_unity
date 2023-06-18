using UnityEngine;

public class ToggleMenuAction : BaseButtonAction
{
    public GameObject menuObject; // This should be the actual GameObject, not a prefab
    public Transform spawnTransform;
    public Vector3 spawnOffset;

    private GameObject currentMenuObject;
    private bool isMenuOpen;

    public override void Execute()
    {
        if (isMenuOpen)
        {
            CloseMenu();
        }
        else
        {
            OpenMenu();
        }
    }

    private void OpenMenu()
    {
        if (menuObject != null && spawnTransform != null)
        {
            if (currentMenuObject == null)
            {
                Vector3 spawnPosition = spawnTransform.position + spawnOffset;
                menuObject.transform.position = spawnPosition;
                menuObject.transform.SetParent(spawnTransform);
                currentMenuObject = menuObject;
            }
            else
            {
                currentMenuObject.SetActive(true);
            }

            isMenuOpen = true;
        }
    }

    private void CloseMenu()
    {
        if (currentMenuObject != null)
        {
            currentMenuObject.SetActive(false);
            isMenuOpen = false;
        }
    }
}

using UnityEngine;

public class ToggleMenuAction : MonoBehaviour
{
    public GameObject menuObject;
    public Transform spawnTransform;
    public Vector3 spawnOffset;

    private GameObject currentMenuObject;
    private bool isMenuOpen;

    public void Execute()
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
                menuObject.transform.position = spawnTransform.position + spawnOffset;
                menuObject.transform.rotation = spawnTransform.rotation;
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

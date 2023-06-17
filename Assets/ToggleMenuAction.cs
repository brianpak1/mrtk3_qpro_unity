using UnityEngine;

public class ToggleMenuAction : BaseButtonAction
{
    public GameObject menuPrefab;
    public Transform spawnTransform;

    private GameObject spawnedMenu;
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
        if (menuPrefab != null && spawnTransform != null)
        {
            if (spawnedMenu == null)
            {
                spawnedMenu = Instantiate(menuPrefab, spawnTransform.position, Quaternion.identity);
                spawnedMenu.transform.SetParent(spawnTransform);
            }
            else
            {
                spawnedMenu.SetActive(true);
            }

            isMenuOpen = true;
        }
    }

    private void CloseMenu()
    {
        if (spawnedMenu != null)
        {
            spawnedMenu.SetActive(false);
            isMenuOpen = false;
        }
    }
}

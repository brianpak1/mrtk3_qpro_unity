using UnityEngine;

public class HandMenuSwitcher : MonoBehaviour
{
    [SerializeField] private GameObject handMenu1;
    [SerializeField] private GameObject handMenu2;
    [SerializeField] private GameObject toggleButton;

    private bool isMenu1Active = true;

    private void Start()
    {
        handMenu1.SetActive(true);
        handMenu2.SetActive(false);
    }

    public void SwitchHandMenu()
    {
        if (isMenu1Active)
        {
            handMenu1.SetActive(false);
            handMenu2.SetActive(true);
            toggleButton.SetActive(false);
        }
        else
        {
            handMenu1.SetActive(true);
            handMenu2.SetActive(false);
            toggleButton.SetActive(true);
        }

        isMenu1Active = !isMenu1Active;
    }
}

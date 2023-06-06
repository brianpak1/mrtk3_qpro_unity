using UnityEngine;

public class ToggleAllVisualizers : MonoBehaviour
{
    public void Toggle()
    {
        // Loop through all active instances of MusicVisualizer and toggle pause/resume
        foreach (MusicVisualizer visualizer in MusicVisualizer.AllInstances)
        {
            visualizer.TogglePauseResume();
        }
    }
}

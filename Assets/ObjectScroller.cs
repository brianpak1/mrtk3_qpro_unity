using UnityEngine;
using Microsoft.MixedReality.Toolkit.UX;

public class ObjectScroller : MonoBehaviour
{
    [SerializeField]
    private Slider slider; // Reference to the slider that will control the scrolling

    [SerializeField]
    private RectTransform scrollContent; // Reference to the content of your scroll view

    private float initialSliderValue = -1;
    private Vector3 initialScrollPosition;

    public void Start()
    {
        // Assuming that you will hook up the ScrollObjectWithSlider method to the slider event in the Unity Editor
    }

    public void ScrollObjectWithSlider(SliderEventData args)
    {
        // If this is our first slider event, let's record the initial values.
        if (initialSliderValue < 0)
        {
            initialScrollPosition = scrollContent.anchoredPosition;
            initialSliderValue = args.NewValue;
        }

        // Adjust the scroll position based on the difference between the current slider's value and where it started.
        // We multiply by -1 to invert the direction of the scrolling.
        float sliderDelta = (args.NewValue - initialSliderValue) * -1;
        scrollContent.anchoredPosition = initialScrollPosition + new Vector3(0, sliderDelta * 1000); // Modify the value "1000" to adjust the speed of scrolling
    }
}

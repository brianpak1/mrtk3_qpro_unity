using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.Interaction.Toolkit;

namespace Microsoft.MixedReality.Toolkit.UX
{
    /// <summary>
    /// Allows a <see cref="ScrollRect"/> to be scrolled by XRI interactors with sound effects.
    /// </summary>
    public class Scrollable2 : PressableButton
    {
        [Tooltip("The scroll rect to scroll.")]
        [SerializeField]
        private ScrollRect scrollRect = null;

        /// <summary>
        /// The <see cref="ScrollRect"/> to scroll.
        /// </summary>
        public ScrollRect ScrollRect
        {
            get => scrollRect;
            set => scrollRect = value;
        }

        [Tooltip("The scroll rect to scroll.")]
        [SerializeField]
        private float sensitivity = 0.5f;

        [Tooltip("The deadzone for scrolling.")]
        [SerializeField]
        private float deadzone = 10.0f;

        [Header("Sound Effects")]
        [SerializeField]
        private AudioSource audioSource = null;

        //[SerializeField]
        //private AudioClip interactionStartSound = null;

        //[SerializeField]
        //private AudioClip interactionEndSound = null;

        [SerializeField]
        private AudioClip tickSound = null;

        [SerializeField]
        [Range(0.0f, 1.0f)]
        private float startPitch = 0.9f;

        [SerializeField]
        [Range(0.0f, 1.0f)]
        private float endPitch = 1.1f;

        [SerializeField]
        private float minSecondsBetweenTicks = 0.1f;

        [Header("Scroll Menu")]
        //[SerializeField]
        //private GameObject startPrefab = null;

        //[SerializeField]
        //private GameObject endPrefab = null;

        private Dictionary<IXRInteractor, Vector2> touchPoints = new Dictionary<IXRInteractor, Vector2>();

        private Vector2 velocity;

        private Vector2 startNormalizedPosition;

        private Vector2 sprungNormalizedPosition;
        private Vector2 startTouchPoint;

        private bool isDead;

        private float lastTickTime;

        private bool isScrolling;

        /// <inheritdoc />
        public override void ProcessInteractable(XRInteractionUpdateOrder.UpdatePhase updatePhase)
        {
            base.ProcessInteractable(updatePhase);

            if (updatePhase == XRInteractionUpdateOrder.UpdatePhase.Dynamic)
            {
                Vector2 dragDelta = Vector2.zero;
                Vector2 thisFrame = startTouchPoint;

                foreach (var interactor in interactorsSelecting)
                {
                    Vector2 lastFrame = Vector2.zero;
                    thisFrame = scrollRect.transform.InverseTransformPoint(interactor.GetAttachTransform(this).position);

                    if (touchPoints.ContainsKey(interactor))
                    {
                        lastFrame = touchPoints[interactor];
                    }
                    else
                    {
                        lastFrame = thisFrame;
                    }

                    dragDelta = thisFrame - lastFrame;
                    touchPoints[interactor] = thisFrame;
                }

                float displacementFromStart = (thisFrame - startTouchPoint).magnitude / Mathf.Max(deadzone, 0.01f);

                dragDelta *= Mathf.Clamp01(displacementFromStart * sensitivity);


                float contentHeight = scrollRect.content.rect.height - scrollRect.viewport.rect.height;
                float contentWidth = scrollRect.content.rect.width - scrollRect.viewport.rect.width;

                if (contentHeight > 0.0f)
                    scrollRect.verticalNormalizedPosition -= (dragDelta.y / contentHeight);

                if (contentWidth > 0.0f)
                    scrollRect.horizontalNormalizedPosition -= (dragDelta.x / contentWidth);


                if (displacementFromStart < 0.01f)
                {
                    velocity = Vector2.zero;

                    // Reset scrolling state
                    if (isScrolling)
                    {
                        audioSource.Stop();
                        isScrolling = false;
                    }
                }
                else
                {
                    velocity = dragDelta * (1.0f / Time.deltaTime);

                    // Start scrolling state and play tick sound
                    if (!isScrolling)
                    {
                        isScrolling = true;
                        audioSource.pitch = startPitch;
                        audioSource.PlayOneShot(tickSound);
                        lastTickTime = Time.time;
                    }

                    // Update pitch based on scroll position
                    float scrollValue = scrollRect.verticalNormalizedPosition;
                    float pitch = Mathf.Lerp(startPitch, endPitch, scrollValue);
                    audioSource.pitch = pitch;

                    // Play tick sound if enough time has passed
                    if (Time.time - lastTickTime > minSecondsBetweenTicks)
                    {
                        audioSource.PlayOneShot(tickSound);
                        lastTickTime = Time.time;
                    }
                }
            }
        }

        protected override void OnSelectEntered(SelectEnterEventArgs args)
        {
            Vector2 thisFrame = scrollRect.transform.InverseTransformPoint(args.interactorObject.GetAttachTransform(this).position);

            touchPoints[args.interactorObject] = thisFrame;

            startNormalizedPosition = new Vector2(scrollRect.horizontalNormalizedPosition, scrollRect.verticalNormalizedPosition);
            startTouchPoint = thisFrame;
        }

        protected override void OnSelectExited(SelectExitEventArgs args)
        {
            base.OnSelectExited(args);

            if (touchPoints.ContainsKey(args.interactorObject))
            {
                scrollRect.velocity = velocity;
            }

            touchPoints.Remove(args.interactorObject);
        }
    }
}

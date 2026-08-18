#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 138 member(s).
namespace DirectUI {
class DxamlCoreTestHooks {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTestLTE@DxamlCoreTestHooks@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@0_N11PEAPEAU3456@@Z
    virtual long AddTestLTE(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IUIElement *, bool, bool, bool, ::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyElevationEffect@DxamlCoreTestHooks@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@I@Z
    virtual long ApplyElevationEffect(::Windows::UI::Xaml::IUIElement *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateAvailableMonitorRect@DxamlCoreTestHooks@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@UPoint@Foundation@6@PEAURect@86@PEAU786@32@Z
    virtual long CalculateAvailableMonitorRect(::Windows::UI::Xaml::IUIElement *, WindissectOpaque, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanFireKeyboardInputEvent@DxamlCoreTestHooks@DirectUI@@UEAA_NXZ
    virtual bool CanFireKeyboardInputEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelAllConnectedAnimationsAndResetDefaults@DxamlCoreTestHooks@DirectUI@@UEAAJXZ
    virtual long CancelAllConnectedAnimationsAndResetDefaults();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanUpAfterTest@DxamlCoreTestHooks@DirectUI@@UEAAXXZ
    virtual void CleanUpAfterTest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupReleaseQueue@DxamlCoreTestHooks@DirectUI@@UEAAXXZ
    virtual void CleanupReleaseQueue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllRuntimeFeatureOverrides@DxamlCoreTestHooks@DirectUI@@UEAAXXZ
    virtual void ClearAllRuntimeFeatureOverrides();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearApplicationLanguageOverride@DxamlCoreTestHooks@DirectUI@@UEAAJXZ
    virtual long ClearApplicationLanguageOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearDefaultLanguageString@DxamlCoreTestHooks@DirectUI@@UEAAJXZ
    virtual long ClearDefaultLanguageString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearDesignModeSettings@DxamlCoreTestHooks@DirectUI@@UEAAXXZ
    virtual void ClearDesignModeSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearMockUIAClientsListening@DxamlCoreTestHooks@DirectUI@@UEAAXXZ
    virtual void ClearMockUIAClientsListening();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPrimaryPointerLastPositionOverride@DxamlCoreTestHooks@DirectUI@@UEAAXPEAUIXamlRoot@Xaml@UI@Windows@@@Z
    virtual void ClearPrimaryPointerLastPositionOverride(::Windows::UI::Xaml::IXamlRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearTestLTEs@DxamlCoreTestHooks@DirectUI@@UEAAJXZ
    virtual long ClearTestLTEs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseAllPopupsForTreeReset@DxamlCoreTestHooks@DirectUI@@UEAAXXZ
    virtual void CloseAllPopupsForTreeReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLoopingSelector@DxamlCoreTestHooks@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long CreateLoopingSelector(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeletePlatformFamilyCache@DxamlCoreTestHooks@DirectUI@@UEAAXXZ
    virtual void DeletePlatformFamilyCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteResourceDictionaryCaches@DxamlCoreTestHooks@DirectUI@@UEAAXXZ
    virtual void DeleteResourceDictionaryCaches();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableKeyboardInputEvent@DxamlCoreTestHooks@DirectUI@@UEAAXXZ
    virtual void DisableKeyboardInputEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmitHeapHandleExportEtwEvent@DxamlCoreTestHooks@DirectUI@@UEAAXXZ
    virtual void EmitHeapHandleExportEtwEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableKeyboardInputEvent@DxamlCoreTestHooks@DirectUI@@UEAAJXZ
    virtual long EnableKeyboardInputEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableShadowsForTests@DxamlCoreTestHooks@DirectUI@@UEAAJXZ
    virtual long EnableShadowsForTests();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSatelliteDLLCustomDPCleanup@DxamlCoreTestHooks@DirectUI@@UEAAJXZ
    virtual long EnsureSatelliteDLLCustomDPCleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireDCompAnimationCompleted@DxamlCoreTestHooks@DirectUI@@UEAAXPEAUIStoryboard@Animation@Media@Xaml@UI@Windows@@@Z
    virtual void FireDCompAnimationCompleted(::Windows::UI::Xaml::Media::Animation::IStoryboard *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceDisconnectRootOnSuspend@DxamlCoreTestHooks@DirectUI@@UEAAX_N@Z
    virtual void ForceDisconnectRootOnSuspend(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllXamlRoots@DxamlCoreTestHooks@DirectUI@@UEAAXPEAPEAU?$IVectorView@PEAVXamlRoot@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual void GetAllXamlRoots(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatedCenterPoint@DxamlCoreTestHooks@DirectUI@@UEAAXPEAUIUIElement@Xaml@UI@Windows@@PEAUVector3@Numerics@Foundation@6@@Z
    virtual void GetAnimatedCenterPoint(::Windows::UI::Xaml::IUIElement *, WindissectOpaque*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatedRotation@DxamlCoreTestHooks@DirectUI@@UEAAXPEAUIUIElement@Xaml@UI@Windows@@PEAM@Z
    virtual void GetAnimatedRotation(::Windows::UI::Xaml::IUIElement *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatedRotationAxis@DxamlCoreTestHooks@DirectUI@@UEAAXPEAUIUIElement@Xaml@UI@Windows@@PEAUVector3@Numerics@Foundation@6@@Z
    virtual void GetAnimatedRotationAxis(::Windows::UI::Xaml::IUIElement *, WindissectOpaque*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatedScale@DxamlCoreTestHooks@DirectUI@@UEAAXPEAUIUIElement@Xaml@UI@Windows@@PEAUVector3@Numerics@Foundation@6@@Z
    virtual void GetAnimatedScale(::Windows::UI::Xaml::IUIElement *, WindissectOpaque*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatedTransformMatrix@DxamlCoreTestHooks@DirectUI@@UEAAXPEAUIUIElement@Xaml@UI@Windows@@PEAUMatrix4x4@Numerics@Foundation@6@@Z
    virtual void GetAnimatedTransformMatrix(::Windows::UI::Xaml::IUIElement *, WindissectOpaque*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatedTranslation@DxamlCoreTestHooks@DirectUI@@UEAAXPEAUIUIElement@Xaml@UI@Windows@@PEAUVector3@Numerics@Foundation@6@@Z
    virtual void GetAnimatedTranslation(::Windows::UI::Xaml::IUIElement *, WindissectOpaque*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationMouseModeEnabled@DxamlCoreTestHooks@DirectUI@@UEAA_NPEAUIXamlRoot@Xaml@UI@Windows@@@Z
    virtual bool GetApplicationMouseModeEnabled(::Windows::UI::Xaml::IXamlRoot *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrowserHostCursor@DxamlCoreTestHooks@DirectUI@@UEAAJPEAH@Z
    virtual long GetBrowserHostCursor(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushForXamlRoot@DxamlCoreTestHooks@DirectUI@@UEAAJPEAUIXamlCompositionBrushBase@Media@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU8@@Z
    virtual long GetBrushForXamlRoot(::Windows::UI::Xaml::Media::IXamlCompositionBrushBase *, IInspectable *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCountOfVisualsTargeted@DxamlCoreTestHooks@DirectUI@@UEAAJPEAUIXamlLight@Media@Xaml@UI@Windows@@PEAUIUIElement@567@PEAH@Z
    virtual long GetCountOfVisualsTargeted(::Windows::UI::Xaml::Media::IXamlLight *, ::Windows::UI::Xaml::IUIElement *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDCompDevice@DxamlCoreTestHooks@DirectUI@@UEBAXPEAPEAUIDCompositionDesktopDevicePartner@@@Z
    virtual void GetDCompDevice(IDCompositionDesktopDevicePartner * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementsRenderedCount@DxamlCoreTestHooks@DirectUI@@UEAAJPEAH@Z
    virtual long GetElementsRenderedCount(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementsTargetedByLight@DxamlCoreTestHooks@DirectUI@@UEAAJPEAUIXamlLight@Media@Xaml@UI@Windows@@PEAU?$IVector@PEAVUIElement@Xaml@UI@Windows@@@Collections@Foundation@7@@Z
    virtual long GetElementsTargetedByLight(::Windows::UI::Xaml::Media::IXamlLight *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFinalReleaseQueue@DxamlCoreTestHooks@DirectUI@@UEAAJPEAPEAU?$IVectorView@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long GetFinalReleaseQueue(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGripperData@DxamlCoreTestHooks@DirectUI@@UEAAJPEAUIInspectable@@PEAUJupiterGripperData@@@Z
    virtual long GetGripperData(IInspectable *, JupiterGripperData *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastInputMethod@DxamlCoreTestHooks@DirectUI@@UEAA?AW4LastInputDeviceType@Input@Xaml@UI@Windows@@PEAUIXamlRoot@567@@Z
    virtual int GetLastInputMethod(::Windows::UI::Xaml::IXamlRoot *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLightsTargetingElement@DxamlCoreTestHooks@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAU?$IVector@PEAVXamlLight@Media@Xaml@UI@Windows@@@Collections@Foundation@6@@Z
    virtual long GetLightsTargetingElement(::Windows::UI::Xaml::IUIElement *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPopupOverlayElement@DxamlCoreTestHooks@DirectUI@@UEAAJPEAUIPopup@Primitives@Controls@Xaml@UI@Windows@@PEAPEAUIFrameworkElement@678@@Z
    virtual long GetPopupOverlayElement(::Windows::UI::Xaml::Controls::Primitives::IPopup *, ::Windows::UI::Xaml::IFrameworkElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealCompositionSurface@DxamlCoreTestHooks@DirectUI@@UEAAJPEAUILoadedImageSurface@Media@Xaml@UI@Windows@@PEAPEAUICompositionSurface@Composition@67@@Z
    virtual long GetRealCompositionSurface(::Windows::UI::Xaml::Media::ILoadedImageSurface *, ::Windows::UI::Composition::ICompositionSurface * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSeeitSayitPatternID@DxamlCoreTestHooks@DirectUI@@UEAAXPEAH@Z
    virtual void GetSeeitSayitPatternID(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIAWindow@DxamlCoreTestHooks@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUHWND__@@PEAPEAUIInspectable@@@Z
    virtual long GetUIAWindow(::Windows::UI::Xaml::IDependencyObject *, HWND__*, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleContentBounds@DxamlCoreTestHooks@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAURect@Foundation@6@@Z
    virtual long GetVisibleContentBounds(::Windows::UI::Xaml::IUIElement *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWantsCompositionTargetRenderedEvent@DxamlCoreTestHooks@DirectUI@@UEAAXPEAE@Z
    virtual void GetWantsCompositionTargetRenderedEvent(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWantsRenderingEvent@DxamlCoreTestHooks@DirectUI@@UEAAXPEAE@Z
    virtual void GetWantsRenderingEvent(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetZoomScale@DxamlCoreTestHooks@DirectUI@@UEBAMXZ
    virtual float GetZoomScale() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeMouseMode@DxamlCoreTestHooks@DirectUI@@UEAAJPEAUIXamlRoot@Xaml@UI@Windows@@PEAUControllerNavigationFunctions@@@Z
    virtual long InitializeMouseMode(::Windows::UI::Xaml::IXamlRoot *, ControllerNavigationFunctions *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeXaml@DxamlCoreTestHooks@DirectUI@@UEAAJXZ
    virtual long InitializeXaml();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InjectBackButtonPress@DxamlCoreTestHooks@DirectUI@@UEAAJPEAE@Z
    virtual long InjectBackButtonPress(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InjectWindowMessage@DxamlCoreTestHooks@DirectUI@@UEAAEIIIPEAUIXamlRoot@Xaml@UI@Windows@@@Z
    virtual unsigned char InjectWindowMessage(unsigned int, unsigned int, unsigned int, ::Windows::UI::Xaml::IXamlRoot *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDragDropInProgress@DxamlCoreTestHooks@DirectUI@@UEAA_NXZ
    virtual bool IsDragDropInProgress();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsKeepingVisible@DxamlCoreTestHooks@DirectUI@@UEAAEPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual unsigned char IsKeepingVisible(::Windows::UI::Xaml::IUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRuntimeEnabledFeatureEnabled@DxamlCoreTestHooks@DirectUI@@UEAA_NW4RuntimeEnabledFeature@RuntimeFeatureBehavior@@@Z
    virtual bool IsRuntimeEnabledFeatureEnabled(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStoryboardActive@DxamlCoreTestHooks@DirectUI@@UEAA_NPEAUIStoryboard@Animation@Media@Xaml@UI@Windows@@@Z
    virtual bool IsStoryboardActive(::Windows::UI::Xaml::Media::Animation::IStoryboard *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTrackingEffectiveVisibility@DxamlCoreTestHooks@DirectUI@@UEAAEPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual unsigned char IsTrackingEffectiveVisibility(::Windows::UI::Xaml::IUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowActivated@DxamlCoreTestHooks@DirectUI@@UEAAJPEAUIXamlRoot@Xaml@UI@Windows@@PEAE@Z
    virtual long IsWindowActivated(::Windows::UI::Xaml::IXamlRoot *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowFocused@DxamlCoreTestHooks@DirectUI@@UEAAJPEAEPEAUIXamlRoot@Xaml@UI@Windows@@@Z
    virtual long IsWindowFocused(unsigned char *, ::Windows::UI::Xaml::IXamlRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverrideAccentColor@DxamlCoreTestHooks@DirectUI@@UEAAJI@Z
    virtual long OverrideAccentColor(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverrideSystemTheme@DxamlCoreTestHooks@DirectUI@@UEAAJW4ApplicationTheme@Xaml@UI@Windows@@@Z
    virtual long OverrideSystemTheme(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverrideTrimImageResourceDelay@DxamlCoreTestHooks@DirectUI@@UEAAX_N@Z
    virtual void OverrideTrimImageResourceDelay(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostTestCheckForLeaks@DxamlCoreTestHooks@DirectUI@@UEAAXI@Z
    virtual void PostTestCheckForLeaks(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutApplicationMouseModeEnabled@DxamlCoreTestHooks@DirectUI@@UEAAXPEAUIXamlRoot@Xaml@UI@Windows@@E@Z
    virtual void PutApplicationMouseModeEnabled(::Windows::UI::Xaml::IXamlRoot *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseKeepAlive@DxamlCoreTestHooks@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long ReleaseKeepAlive(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAccentColorOverride@DxamlCoreTestHooks@DirectUI@@UEAAJXZ
    virtual long RemoveAccentColorOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTestLTE@DxamlCoreTestHooks@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long RemoveTestLTE(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestKeepAlive@DxamlCoreTestHooks@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long RequestKeepAlive(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestReplayPreviousPointerUpdate_TempTestHook@DxamlCoreTestHooks@DirectUI@@UEAAXXZ
    virtual void RequestReplayPreviousPointerUpdate_TempTestHook();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAtlasSizeHint@DxamlCoreTestHooks@DirectUI@@UEAAXXZ
    virtual void ResetAtlasSizeHint();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDeviceAndVisuals@DxamlCoreTestHooks@DirectUI@@UEAAJXZ
    virtual long ResetDeviceAndVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDeviceAndVisualsAndDManip@DxamlCoreTestHooks@DirectUI@@UEAAJXZ
    virtual long ResetDeviceAndVisualsAndDManip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetMetadata@DxamlCoreTestHooks@DirectUI@@UEAAJXZ
    virtual long ResetMetadata();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetVisualTree@DxamlCoreTestHooks@DirectUI@@UEAAXXZ
    virtual void ResetVisualTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreDefaultFlipViewScrollWheelDelay@DxamlCoreTestHooks@DirectUI@@UEAAXXZ
    virtual void RestoreDefaultFlipViewScrollWheelDelay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreMouseMode@DxamlCoreTestHooks@DirectUI@@UEAAJPEAUIXamlRoot@Xaml@UI@Windows@@@Z
    virtual long RestoreMouseMode(::Windows::UI::Xaml::IXamlRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleWaitForAnimatedFacadePropertyChanges@DxamlCoreTestHooks@DirectUI@@UEAAXH@Z
    virtual void ScheduleWaitForAnimatedFacadePropertyChanges(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetApplicationLanguageOverride@DxamlCoreTestHooks@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long SetApplicationLanguageOverride(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetApplicationRequestedTheme@DxamlCoreTestHooks@DirectUI@@UEAAJW4ApplicationTheme@Xaml@UI@Windows@@@Z
    virtual long SetApplicationRequestedTheme(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBrushForXamlRoot@DxamlCoreTestHooks@DirectUI@@UEAAJPEAUIXamlCompositionBrushBase@Media@Xaml@UI@Windows@@PEAUIInspectable@@1@Z
    virtual long SetBrushForXamlRoot(::Windows::UI::Xaml::Media::IXamlCompositionBrushBase *, IInspectable *, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCanTickWithNoContent@DxamlCoreTestHooks@DirectUI@@UEAAX_N@Z
    virtual void SetCanTickWithNoContent(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCaretBrowsingModeGlobal@DxamlCoreTestHooks@DirectUI@@UEAAX_N0@Z
    virtual void SetCaretBrowsingModeGlobal(bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompleteTimelinesAutomatically@DxamlCoreTestHooks@DirectUI@@UEAAX_N@Z
    virtual void SetCompleteTimelinesAutomatically(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoreWindowVisibilityOverride@DxamlCoreTestHooks@DirectUI@@UEAAJE@Z
    virtual long SetCoreWindowVisibilityOverride(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDCompDeviceLeakDetectionEnabled@DxamlCoreTestHooks@DirectUI@@UEAAX_N@Z
    virtual void SetDCompDeviceLeakDetectionEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFlipViewScrollWheelDelay@DxamlCoreTestHooks@DirectUI@@UEAAXH@Z
    virtual void SetFlipViewScrollWheelDelay(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForceFallbackToLocalLights@DxamlCoreTestHooks@DirectUI@@UEAAJE@Z
    virtual long SetForceFallbackToLocalLights(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForceIsFullScreen@DxamlCoreTestHooks@DirectUI@@UEAAX_N@Z
    virtual void SetForceIsFullScreen(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGenericXamlFilePathForMUX@DxamlCoreTestHooks@DirectUI@@UEAAXPEAUHSTRING__@@@Z
    virtual void SetGenericXamlFilePathForMUX(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHdrOutputOverride@DxamlCoreTestHooks@DirectUI@@UEAAJ_N@Z
    virtual long SetHdrOutputOverride(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsHolographic@DxamlCoreTestHooks@DirectUI@@UEAAX_N@Z
    virtual void SetIsHolographic(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsRenderEnabled@DxamlCoreTestHooks@DirectUI@@UEAAX_N@Z
    virtual void SetIsRenderEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsSuspended@DxamlCoreTestHooks@DirectUI@@UEAAX_N@Z
    virtual void SetIsSuspended(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLastInputMethod@DxamlCoreTestHooks@DirectUI@@UEAAXW4LastInputDeviceType@Input@Xaml@UI@Windows@@PEAUIXamlRoot@567@@Z
    virtual void SetLastInputMethod(int, ::Windows::UI::Xaml::IXamlRoot *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLastLayoutExceptionElement@DxamlCoreTestHooks@DirectUI@@UEAAXPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual void SetLastLayoutExceptionElement(::Windows::UI::Xaml::IUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMockUIAClientsListening@DxamlCoreTestHooks@DirectUI@@UEAAXXZ
    virtual void SetMockUIAClientsListening();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrimaryPointerLastPositionOverride@DxamlCoreTestHooks@DirectUI@@UEAAXUPoint@Foundation@Windows@@PEAUIXamlRoot@Xaml@UI@5@@Z
    virtual void SetPrimaryPointerLastPositionOverride(WindissectOpaque, ::Windows::UI::Xaml::IXamlRoot *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRuntimeEnabledFeatureOverride@DxamlCoreTestHooks@DirectUI@@UEAAXW4RuntimeEnabledFeature@RuntimeFeatureBehavior@@_NPEA_N@Z
    virtual void SetRuntimeEnabledFeatureOverride(int, bool, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShouldCheckQuirkCache@DxamlCoreTestHooks@DirectUI@@UEAAJ_N@Z
    virtual long SetShouldCheckQuirkCache(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSimulateShadowsDisabledByPolicy@DxamlCoreTestHooks@DirectUI@@UEAAJE@Z
    virtual long SetSimulateShadowsDisabledByPolicy(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStoryboardStartedCallback@DxamlCoreTestHooks@DirectUI@@UEAAJP6AJPEAUIStoryboard@Animation@Media@Xaml@UI@Windows@@PEAUIUIElement@678@@Z@Z
    virtual long SetStoryboardStartedCallback(long ( *)(::Windows::UI::Xaml::Media::Animation::IStoryboard *, ::Windows::UI::Xaml::IUIElement *));
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuspendOffThreadDecoding@DxamlCoreTestHooks@DirectUI@@UEAAX_N@Z
    virtual void SetSuspendOffThreadDecoding(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuspendSurfaceUpdates@DxamlCoreTestHooks@DirectUI@@UEAAX_N@Z
    virtual void SetSuspendSurfaceUpdates(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSystemFontCollectionOverride@DxamlCoreTestHooks@DirectUI@@UEAAJPEAUIDWriteFontCollection@@@Z
    virtual long SetSystemFontCollectionOverride(IDWriteFontCollection *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThreadingAssertOverride@DxamlCoreTestHooks@DirectUI@@UEAAX_N@Z
    virtual void SetThreadingAssertOverride(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTimeManagerClockOverrideConstant@DxamlCoreTestHooks@DirectUI@@UEAAXN@Z
    virtual void SetTimeManagerClockOverrideConstant(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibleBounds@DxamlCoreTestHooks@DirectUI@@UEAAXURect@Foundation@Windows@@@Z
    virtual void SetVisibleBounds(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowSizeOverride@DxamlCoreTestHooks@DirectUI@@UEAAJAEBUSize@Foundation@Windows@@AEBURect@45@M_N@Z
    virtual long SetWindowSizeOverride(WindissectOpaque const &, WindissectOpaque const &, float, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseTypographicFontModel@DxamlCoreTestHooks@DirectUI@@UEAAJPEA_N@Z
    virtual long ShouldUseTypographicFontModel(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShrinkApplicationViewVisibleBounds@DxamlCoreTestHooks@DirectUI@@UEAAX_N@Z
    virtual void ShrinkApplicationViewVisibleBounds(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownXaml@DxamlCoreTestHooks@DirectUI@@UEAAJXZ
    virtual long ShutdownXaml();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SimulateComponentHosted@DxamlCoreTestHooks@DirectUI@@UEAAX_N@Z
    virtual void SimulateComponentHosted(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SimulateDeviceLost@DxamlCoreTestHooks@DirectUI@@UEAAJXZ
    virtual long SimulateDeviceLost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SimulateDeviceLostOnMetadataParse@DxamlCoreTestHooks@DirectUI@@UEAAJXZ
    virtual long SimulateDeviceLostOnMetadataParse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SimulateDeviceLostOnOffThreadImageUpload@DxamlCoreTestHooks@DirectUI@@UEAAJXZ
    virtual long SimulateDeviceLostOnOffThreadImageUpload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SimulateInputPaneOccludedRect@DxamlCoreTestHooks@DirectUI@@UEAAJURect@Foundation@Windows@@PEAUIScrollViewer@Controls@Xaml@UI@5@@Z
    virtual long SimulateInputPaneOccludedRect(WindissectOpaque, ::Windows::UI::Xaml::Controls::IScrollViewer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SimulateRegionsForContentDialog@DxamlCoreTestHooks@DirectUI@@UEAAJPEAUIContentDialog@Controls@Xaml@UI@Windows@@@Z
    virtual long SimulateRegionsForContentDialog(::Windows::UI::Xaml::Controls::IContentDialog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SimulateResumeToResumeAnimations@DxamlCoreTestHooks@DirectUI@@UEAAXXZ
    virtual void SimulateResumeToResumeAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SimulateSuspendToPauseAnimations@DxamlCoreTestHooks@DirectUI@@UEAAXXZ
    virtual void SimulateSuspendToPauseAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SimulateSwallowedDeviceLostOnStartup@DxamlCoreTestHooks@DirectUI@@UEAAJXZ
    virtual long SimulateSwallowedDeviceLostOnStartup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SimulateThemeChanged@DxamlCoreTestHooks@DirectUI@@UEAAXXZ
    virtual void SimulateThemeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SimulateXamlPresenterBehavior@DxamlCoreTestHooks@DirectUI@@UEAAX_N@Z
    virtual void SimulateXamlPresenterBehavior(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendMouseMode@DxamlCoreTestHooks@DirectUI@@UEAAJPEAUIXamlRoot@Xaml@UI@Windows@@@Z
    virtual long SuspendMouseMode(::Windows::UI::Xaml::IXamlRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TestGetActualToolTip@DxamlCoreTestHooks@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAPEAUIToolTip@Controls@456@@Z
    virtual long TestGetActualToolTip(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::Controls::IToolTip * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TestGetGlobalBoundsForUIElement@DxamlCoreTestHooks@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@EPEAURect@Foundation@6@@Z
    virtual long TestGetGlobalBoundsForUIElement(::Windows::UI::Xaml::IUIElement *, unsigned char, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerLowMemory@DxamlCoreTestHooks@DirectUI@@UEAAXXZ
    virtual void TriggerLowMemory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerResume@DxamlCoreTestHooks@DirectUI@@UEAAXXZ
    virtual void TriggerResume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerSuspend@DxamlCoreTestHooks@DirectUI@@UEAAX_N0@Z
    virtual void TriggerSuspend(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsetApplicationRequestedTheme@DxamlCoreTestHooks@DirectUI@@UEAAJXZ
    virtual long UnsetApplicationRequestedTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFontScale@DxamlCoreTestHooks@DirectUI@@UEAAJM@Z
    virtual long UpdateFontScale(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMouseMode@DxamlCoreTestHooks@DirectUI@@UEAAJPEAUIXamlRoot@Xaml@UI@Windows@@PEAUIControl@Controls@456@_N@Z
    virtual long UpdateMouseMode(::Windows::UI::Xaml::IXamlRoot *, ::Windows::UI::Xaml::Controls::IControl *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMouseModeArea@DxamlCoreTestHooks@DirectUI@@UEAAJPEAUIXamlRoot@Xaml@UI@Windows@@@Z
    virtual long UpdateMouseModeArea(::Windows::UI::Xaml::IXamlRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForCommitCompletion@DxamlCoreTestHooks@DirectUI@@UEAAJXZ
    virtual long WaitForCommitCompletion();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DxamlCoreTestHooks@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeResourceLibraries@DxamlCoreTestHooks@DirectUI@@AEAAXXZ
    void FreeResourceLibraries();
};
} // namespace DirectUI

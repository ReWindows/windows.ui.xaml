#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 182 member(s).
namespace DirectUI {
class DXamlCore {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAnimationsEnabledChangedHandler@DXamlCore@DirectUI@@QEAAJXZ
    long AddAnimationsEnabledChangedHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToReferenceTrackingList@DXamlCore@DirectUI@@UEAAXPEAUIReferenceTrackerInternal@Hosting@Xaml@UI@Windows@@@Z
    virtual void AddToReferenceTrackingList(::Windows::UI::Xaml::Hosting::IReferenceTrackerInternal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateAvailableMonitorRect@DXamlCore@DirectUI@@QEAAJPEAVCUIElement@@UPoint@Foundation@Windows@@PEAURect@56@PEAU456@32@Z
    long CalculateAvailableMonitorRect(CUIElement *, WindissectOpaque, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCaches@DXamlCore@DirectUI@@QEAAJXZ
    long ClearCaches();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientToScreen@DXamlCore@DirectUI@@QEAAXPEAUPoint@Foundation@Windows@@@Z
    void ClientToScreen(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompositionTarget_HasHandlers@DXamlCore@DirectUI@@SA_NXZ
    static bool CompositionTarget_HasHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureCoreWindow@DXamlCore@DirectUI@@QEAAJPEAUICoreWindow@Core@UI@Windows@@_N@Z
    long ConfigureCoreWindow(::Windows::UI::Core::ICoreWindow *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCoreWindow@DXamlCore@DirectUI@@QEAAJPEBUWindowCreationParameters@Xaml@UI@Windows@@@Z
    long CreateCoreWindow(::Windows::UI::Xaml::WindowCreationParameters const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateProviderForAP@DXamlCore@DirectUI@@QEAAJPEAVCAutomationPeer@@PEAPEAVCUIAWrapper@@@Z
    long CreateProviderForAP(CAutomationPeer *, CUIAWrapper * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecrementReferenceLockEnterCount@DXamlCore@DirectUI@@UEAAJXZ
    virtual long DecrementReferenceLockEnterCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deinitialize@DXamlCore@DirectUI@@SAJW4DeinitializationType@@@Z
    static long Deinitialize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCoreApplicationInitialized@DXamlCore@DirectUI@@QEAAJXZ
    long EnsureCoreApplicationInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateRawElementProviderRuntimeId@DXamlCore@DirectUI@@UEAAIXZ
    virtual unsigned int GenerateRawElementProviderRuntimeId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationBarService@DXamlCore@DirectUI@@QEAAJAEAV?$ComPtr@UIApplicationBarService@DirectUI@@@ctl@@@Z
    long GetApplicationBarService(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomaticDragHelper@DXamlCore@DirectUI@@QEAAPEAVAutomaticDragHelper@2@PEAVUIElement@2@@Z
    ::DirectUI::AutomaticDragHelper * GetAutomaticDragHelper(::DirectUI::UIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBudgetManager@DXamlCore@DirectUI@@QEAAJAEAV?$ComPtr@VBudgetManager@DirectUI@@@ctl@@@Z
    long GetBudgetManager(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBuildTreeService@DXamlCore@DirectUI@@QEAAJAEAV?$ComPtr@VBuildTreeService@DirectUI@@@ctl@@@Z
    long GetBuildTreeService(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedNullKeyedResource@DXamlCore@DirectUI@@QEAA?AV?$ComPtr@VNullKeyedResource@DirectUI@@@ctl@@XZ
    WindissectOpaque GetCachedNullKeyedResource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentBoundsForElement@DXamlCore@DirectUI@@QEAAJPEAVCDependencyObject@@PEAURect@Foundation@Windows@@@Z
    long GetContentBoundsForElement(CDependencyObject *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentDialogMetadata@DXamlCore@DirectUI@@QEAAJPEAPEAVContentDialogMetadata@2@@Z
    long GetContentDialogMetadata(::DirectUI::ContentDialogMetadata * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentLayoutBoundsForElement@DXamlCore@DirectUI@@QEAAJPEAVCDependencyObject@@PEAURect@Foundation@Windows@@@Z
    long GetContentLayoutBoundsForElement(CDependencyObject *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrent@DXamlCore@DirectUI@@SAPEAV12@XZ
    static DXamlCore * GetCurrent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPresentTargetNoRef@DXamlCore@DirectUI@@QEAAPEAVWindowsPresentTarget@@XZ
    WindowsPresentTarget * GetCurrentPresentTargetNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDCompDevice@DXamlCore@DirectUI@@QEBAXPEAPEAUIDCompositionDesktopDevicePartner@@@Z
    void GetDCompDevice(IDCompositionDesktopDevicePartner * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataContextChangedEventArgsFromPool@DXamlCore@DirectUI@@QEAAJPEAUIInspectable@@PEAPEAUIDataContextChangedEventArgs@Xaml@UI@Windows@@@Z
    long GetDataContextChangedEventArgsFromPool(IInspectable *, ::Windows::UI::Xaml::IDataContextChangedEventArgs * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayInformationNoRef@DXamlCore@DirectUI@@QEAAPEAUIDisplayInformation@Display@Graphics@Windows@@XZ
    ::Windows::Graphics::Display::IDisplayInformation * GetDisplayInformationNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementSoundPlayerServiceNoRef@DXamlCore@DirectUI@@QEAAPEAVElementSoundPlayerService@2@XZ
    ::DirectUI::ElementSoundPlayerService * GetElementSoundPlayerServiceNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtendViewIntoTitleBarHeight@DXamlCore@DirectUI@@SAJPEAN@Z
    static long GetExtendViewIntoTitleBarHeight(double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFinalReleaseQueue@DXamlCore@DirectUI@@QEAAJPEAPEAU?$IVectorView@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    long GetFinalReleaseQueue(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlyoutMetadata@DXamlCore@DirectUI@@QEAAJPEAPEAVFlyoutMetadata@2@@Z
    long GetFlyoutMetadata(::DirectUI::FlyoutMetadata * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusManagerGettingFocusEventSource@DXamlCore@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAVGettingFocusEventArgs@Input@Xaml@UI@Windows@@@Foundation@Windows@@UIInspectable@@UIGettingFocusEventArgs@Input@Xaml@UI@3@@2@@Z
    long GetFocusManagerGettingFocusEventSource(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusManagerGotFocusEventSource@DXamlCore@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAVFocusManagerGotFocusEventArgs@Input@Xaml@UI@Windows@@@Foundation@Windows@@UIInspectable@@UIFocusManagerGotFocusEventArgs@Input@Xaml@UI@3@@2@@Z
    long GetFocusManagerGotFocusEventSource(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusManagerLosingFocusEventSource@DXamlCore@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAVLosingFocusEventArgs@Input@Xaml@UI@Windows@@@Foundation@Windows@@UIInspectable@@UILosingFocusEventArgs@Input@Xaml@UI@3@@2@@Z
    long GetFocusManagerLosingFocusEventSource(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusManagerLostFocusEventSource@DXamlCore@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAVFocusManagerLostFocusEventArgs@Input@Xaml@UI@Windows@@@Foundation@Windows@@UIInspectable@@UIFocusManagerLostFocusEventArgs@Input@Xaml@UI@3@@2@@Z
    long GetFocusManagerLostFocusEventSource(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedElementRemovedEventSource@DXamlCore@DirectUI@@QEAAJPEAPEAV?$CEventSource@UIFocusedElementRemovedEventHandler@Input@Xaml@UI@Windows@@UIInspectable@@UIFocusedElementRemovedEventArgs@2345@@2@@Z
    long GetFocusedElementRemovedEventSource(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFromDependencyObject@DXamlCore@DirectUI@@SAPEAV12@PEAVDependencyObject@2@@Z
    static DXamlCore * GetFromDependencyObject(::DirectUI::DependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputPaneOccludeRect@DXamlCore@DirectUI@@QEAAJPEAVCUIElement@@PEAURect@Foundation@Windows@@@Z
    long GetInputPaneOccludeRect(CUIElement *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputPaneOccludeRect@DXamlCore@DirectUI@@QEAAJPEAVUIElement@2@PEAURect@Foundation@Windows@@@Z
    long GetInputPaneOccludeRect(::DirectUI::UIElement *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsKeyboardPresent@DXamlCore@DirectUI@@QEAA_NXZ
    bool GetIsKeyboardPresent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalizedResourceString@DXamlCore@DirectUI@@QEAAJIPEAPEAUHSTRING__@@@Z
    long GetLocalizedResourceString(unsigned int, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNonLocalizedErrorString@DXamlCore@DirectUI@@QEAAJIPEAPEAUHSTRING__@@@Z
    long GetNonLocalizedErrorString(unsigned int, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPopupOpeningEventSource@DXamlCore@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAVPopupOpeningEventArgs@Xaml@UI@Windows@@@Foundation@Windows@@UIInspectable@@UIPopupOpeningEventArgs@Xaml@UI@3@@2@@Z
    long GetPopupOpeningEventSource(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPopupPlacementEventSource@DXamlCore@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAVPopupPlacementEventArgs@Xaml@UI@Windows@@@Foundation@Windows@@UIInspectable@@UIPopupPlacementEventArgs@Xaml@UI@3@@2@@Z
    long GetPopupPlacementEventSource(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRTWElementCount@DXamlCore@DirectUI@@UEBA_KXZ
    virtual uint64_t GetRTWElementCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRTWTotalCompressedImageSize@DXamlCore@DirectUI@@UEBA_KXZ
    virtual uint64_t GetRTWTotalCompressedImageSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReferenceLockEnterCount@DXamlCore@DirectUI@@UEAAJXZ
    virtual long GetReferenceLockEnterCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReferenceSrwLock@DXamlCore@DirectUI@@UEAAAEAU_RTL_SRWLOCK@@XZ
    virtual _RTL_SRWLOCK & GetReferenceSrwLock();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderedEventSource@DXamlCore@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAVRenderedEventArgs@Media@Xaml@UI@Windows@@@Foundation@Windows@@UIInspectable@@UIRenderedEventArgs@Media@Xaml@UI@3@@2@@Z
    long GetRenderedEventSource(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderingEventSource@DXamlCore@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@UIInspectable@@U4@@2@@Z
    long GetRenderingEventSource(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceBytes@DXamlCore@DirectUI@@QEAAJPEBGPEAUXamlBuffer@Parser@@@Z
    long GetResourceBytes(unsigned short const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsFlyoutMetadata@DXamlCore@DirectUI@@QEAAJAEAPEAVSettingsFlyoutMetadata@2@@Z
    long GetSettingsFlyoutMetadata(::DirectUI::SettingsFlyoutMetadata * &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSimulatedInputPaneOccludedRect@DXamlCore@DirectUI@@SA?AURect@Foundation@Windows@@XZ
    static WindissectOpaque GetSimulatedInputPaneOccludedRect();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurfaceContentsLostEventSource@DXamlCore@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@UIInspectable@@U4@@2@@Z
    long GetSurfaceContentsLostEventSource(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTestHooks@DXamlCore@DirectUI@@QEAA?AV?$ComPtr@VDxamlCoreTestHooks@DirectUI@@@ctl@@XZ
    WindissectOpaque GetTestHooks();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextControlFlyout@DXamlCore@DirectUI@@QEBAPEAVTextControlFlyout@2@PEAVCFlyoutBase@@@Z
    ::DirectUI::TextControlFlyout * GetTextControlFlyout(CFlyoutBase *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemeShadowIsUsingDropShadowsResourceValue@DXamlCore@DirectUI@@UEAA_NXZ
    virtual bool GetThemeShadowIsUsingDropShadowsResourceValue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThreadId@DXamlCore@DirectUI@@UEAAIXZ
    virtual unsigned int GetThreadId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToolTipServiceMetadata@DXamlCore@DirectUI@@QEAAJAEAPEAVToolTipServiceMetadata@2@@Z
    long GetToolTipServiceMetadata(::DirectUI::ToolTipServiceMetadata * &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTranslationFromTargetWindowToRootWindow@DXamlCore@DirectUI@@QEAAJIPEAVVisualTree@@PEAUPoint@Foundation@Windows@@AEA_N@Z
    long GetTranslationFromTargetWindowToRootWindow(unsigned int, VisualTree *, WindissectOpaque *, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUISettings@DXamlCore@DirectUI@@QEAAJAEAV?$ComPtr@UIUISettings@ViewManagement@UI@Windows@@@ctl@@@Z
    long GetUISettings(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVectorChangedEventArgsFromPool@DXamlCore@DirectUI@@QEAAJPEAPEAVVectorChangedEventArgs@2@@Z
    long GetVectorChangedEventArgsFromPool(::DirectUI::VectorChangedEventArgs * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleContentBoundsForElement@DXamlCore@DirectUI@@QEAAJ_N0PEAVCDependencyObject@@PEAURect@Foundation@Windows@@@Z
    long GetVisibleContentBoundsForElement(bool, bool, CDependencyObject *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleContentBoundsForElement@DXamlCore@DirectUI@@QEAAJPEAVCDependencyObject@@PEAURect@Foundation@Windows@@@Z
    long GetVisibleContentBoundsForElement(CDependencyObject *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXamlDirectDefaultInstanceNoRef@DXamlCore@DirectUI@@QEAAPEAVXamlDirect@2@XZ
    ::DirectUI::XamlDirect * GetXamlDirectDefaultInstanceNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXamlDispatcher@DXamlCore@DirectUI@@UEAAJPEAV?$ComPtr@VIDispatcher@DirectUI@@@ctl@@@Z
    virtual long GetXamlDispatcher(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncrementReferenceLockEnterCount@DXamlCore@DirectUI@@UEAAJXZ
    virtual long IncrementReferenceLockEnterCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InjectWindowMessage@DXamlCore@DirectUI@@QEAAEIIIPEAUIXamlRoot@Xaml@UI@Windows@@@Z
    unsigned char InjectWindowMessage(unsigned int, unsigned int, unsigned int, ::Windows::UI::Xaml::IXamlRoot *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnimationEnabled@DXamlCore@DirectUI@@QEAA_NXZ
    bool IsAnimationEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFinalReleaseQueueEmpty@DXamlCore@DirectUI@@UEAAEXZ
    virtual unsigned char IsFinalReleaseQueueEmpty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialized@DXamlCore@DirectUI@@UEAA_NXZ
    virtual bool IsInitialized();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitializedStatic@DXamlCore@DirectUI@@SA_NXZ
    static bool IsInitializedStatic();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitializing@DXamlCore@DirectUI@@UEBA_NXZ
    virtual bool IsInitializing() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMapControl@DXamlCore@DirectUI@@SA_NPEAVCDependencyObject@@@Z
    static bool IsMapControl(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShutdown@DXamlCore@DirectUI@@UEAA_NXZ
    virtual bool IsShutdown();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShutdownStatic@DXamlCore@DirectUI@@SA_NXZ
    static bool IsShutdownStatic();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShuttingDownOrGoingIdleStatic@DXamlCore@DirectUI@@SA_NXZ
    static bool IsShuttingDownOrGoingIdleStatic();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShuttingDownStatic@DXamlCore@DirectUI@@SA_NXZ
    static bool IsShuttingDownStatic();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSpanning@DXamlCore@DirectUI@@SA_NXZ
    static bool IsSpanning();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWinRTDndOperationInProgress@DXamlCore@DirectUI@@SA_NXZ
    static bool IsWinRTDndOperationInProgress();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAfterAppSuspend@DXamlCore@DirectUI@@UEAAJXZ
    virtual long OnAfterAppSuspend();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplicationFocusVisualKindChanged@DXamlCore@DirectUI@@QEAAXXZ
    void OnApplicationFocusVisualKindChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplicationHighContrastAdjustmentChanged@DXamlCore@DirectUI@@QEAAJXZ
    long OnApplicationHighContrastAdjustmentChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAutoHideScrollbarsChanged@DXamlCore@DirectUI@@QEAAJXZ
    long OnAutoHideScrollbarsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeforeAppResume@DXamlCore@DirectUI@@UEAAJXZ
    virtual long OnBeforeAppResume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeforeAppSuspend@DXamlCore@DirectUI@@UEAAJXZ
    virtual long OnBeforeAppSuspend();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowDestroyed@DXamlCore@DirectUI@@QEAAXPEAUHWND__@@@Z
    void OnWindowDestroyed(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAllDeferredInvokes@DXamlCore@DirectUI@@QEAAXXZ
    void ProcessAllDeferredInvokes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueObjectForFinalRelease@DXamlCore@DirectUI@@UEAAXPEAVWeakReferenceSourceNoThreadId@ctl@@@Z
    virtual void QueueObjectForFinalRelease(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueObjectForUnreachableCleanup@DXamlCore@DirectUI@@UEAAXPEAVWeakReferenceSourceNoThreadId@ctl@@@Z
    virtual void QueueObjectForUnreachableCleanup(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReferenceTrackerWalkOnCoreGCRoots@DXamlCore@DirectUI@@UEAAXW4EReferenceTrackerWalkType@2@@Z
    virtual void ReferenceTrackerWalkOnCoreGCRoots(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForChangeVisualStateOnDynamicScrollbarsSettingChanged@DXamlCore@DirectUI@@QEAAXPEAVControl@2@@Z
    void RegisterForChangeVisualStateOnDynamicScrollbarsSettingChanged(::DirectUI::Control *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDataContextChangedEventArgsToPool@DXamlCore@DirectUI@@QEAAJPEAUIDataContextChangedEventArgs@Xaml@UI@Windows@@@Z
    long ReleaseDataContextChangedEventArgsToPool(::Windows::UI::Xaml::IDataContextChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseQueuedObjects@DXamlCore@DirectUI@@QEAAXE@Z
    void ReleaseQueuedObjects(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseVectorChangedEventArgsToPool@DXamlCore@DirectUI@@QEAAJPEAVVectorChangedEventArgs@2@@Z
    long ReleaseVectorChangedEventArgsToPool(::DirectUI::VectorChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAnimationsEnabledChangedHandler@DXamlCore@DirectUI@@QEAAXXZ
    void RemoveAnimationsEnabledChangedHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAutoHideScrollBarsChangedHandler@DXamlCore@DirectUI@@QEAAXXZ
    void RemoveAutoHideScrollBarsChangedHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromReferenceTrackingList@DXamlCore@DirectUI@@UEAAXPEAUIReferenceTrackerInternal@Hosting@Xaml@UI@Windows@@@Z
    virtual void RemoveFromReferenceTrackingList(::Windows::UI::Xaml::Hosting::IReferenceTrackerInternal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrievePageNavigationCompleteEvent@DXamlCore@DirectUI@@QEAAJXZ
    long RetrievePageNavigationCompleteEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunMessageLoop@DXamlCore@DirectUI@@QEAAJXZ
    long RunMessageLoop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScreenToClient@DXamlCore@DirectUI@@QEAAXPEAURect@Foundation@Windows@@@Z
    void ScreenToClient(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAtlasSizeHint@DXamlCore@DirectUI@@QEAAXII@Z
    void SetAtlasSizeHint(unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutomaticDragHelper@DXamlCore@DirectUI@@QEAAXPEAVUIElement@2@PEAVAutomaticDragHelper@2@@Z
    void SetAutomaticDragHelper(::DirectUI::UIElement *, ::DirectUI::AutomaticDragHelper *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBinding@DXamlCore@DirectUI@@SAJPEAUIInspectable@@PEAUHSTRING__@@PEAUIDependencyObject@Xaml@UI@Windows@@W4KnownPropertyIndex@@PEAUIValueConverter@Data@678@@Z
    static long SetBinding(IInspectable *, HSTRING__*, ::Windows::UI::Xaml::IDependencyObject *, int, ::Windows::UI::Xaml::Data::IValueConverter *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBindingCore@DXamlCore@DirectUI@@SAJPEAVCDependencyObject@@PEAUHSTRING__@@0W4KnownPropertyIndex@@@Z
    static long SetBindingCore(CDependencyObject *, HSTRING__*, CDependencyObject *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHostServices@DXamlCore@DirectUI@@QEAAXPEAUIXamlUIPresenterHost@Hosting@Xaml@UI@Windows@@@Z
    void SetHostServices(::Windows::UI::Xaml::Hosting::IXamlUIPresenterHost *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsWinRTDndOperationInProgress@DXamlCore@DirectUI@@QEAAX_N@Z
    void SetIsWinRTDndOperationInProgress(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRTWElementCount@DXamlCore@DirectUI@@UEAAX_K@Z
    virtual void SetRTWElementCount(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRTWTotalCompressedImageSize@DXamlCore@DirectUI@@UEAAX_K@Z
    virtual void SetRTWTotalCompressedImageSize(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSynchronizationInfo@DXamlCore@DirectUI@@QEAAJPEAXPEAUHWND__@@@Z
    long SetSynchronizationInfo(void *, HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextControlFlyout@DXamlCore@DirectUI@@QEAAXPEAVFlyoutBase@2@PEAVTextControlFlyout@2@@Z
    void SetTextControlFlyout(::DirectUI::FlyoutBase *, ::DirectUI::TextControlFlyout *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransparentBackground@DXamlCore@DirectUI@@QEAAJ_N@Z
    long SetTransparentBackground(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowSizeOverride@DXamlCore@DirectUI@@QEAAJPEBUXSIZE@@M@Z
    long SetWindowSizeOverride(XSIZE const *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldTryLoadAppXaml@DXamlCore@DirectUI@@QEBA_NAEBVxstring_ptr@@@Z
    bool ShouldTryLoadAppXaml(xstring_ptr const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseAppBarProxy@DXamlCore@DirectUI@@SA_NXZ
    static bool ShouldUseAppBarProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseDynamicScrollbars@DXamlCore@DirectUI@@SA_NXZ
    static bool ShouldUseDynamicScrollbars();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownAllPeers@DXamlCore@DirectUI@@UEAAJXZ
    virtual long ShutdownAllPeers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalWindowMutation@DXamlCore@DirectUI@@QEAAXW4VisualMutationType@@@Z
    void SignalWindowMutation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SimulateDeviceLost@DXamlCore@DirectUI@@QEAAJ_N0@Z
    long SimulateDeviceLost(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SynchronizeCommitsWithWindow@DXamlCore@DirectUI@@QEAAJPEAUHWND__@@@Z
    long SynchronizeCommitsWithWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerResume@DXamlCore@DirectUI@@QEAAXXZ
    void TriggerResume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerSuspend@DXamlCore@DirectUI@@QEAAX_N0@Z
    void TriggerSuspend(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetApplicationBarService@DXamlCore@DirectUI@@QEAAJAEAV?$ComPtr@UIApplicationBarService@DirectUI@@@ctl@@@Z
    long TryGetApplicationBarService(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetElementSoundPlayerServiceNoRef@DXamlCore@DirectUI@@QEBAPEAVElementSoundPlayerService@2@XZ
    ::DirectUI::ElementSoundPlayerService * TryGetElementSoundPlayerServiceNoRef() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetXamlIslandBoundsForElement@DXamlCore@DirectUI@@QEAA_NPEAVCDependencyObject@@PEAURect@Foundation@Windows@@@Z
    bool TryGetXamlIslandBoundsForElement(CDependencyObject *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetGenericXamlFilePathFromMUX@DXamlCore@DirectUI@@QEAAXAEBVxstring_ptr_view@@@Z
    void TrySetGenericXamlFilePathFromMUX(xstring_ptr_view const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterFromDynamicScrollbarsSettingChanged@DXamlCore@DirectUI@@QEAAXPEAVControl@2@@Z
    void UnregisterFromDynamicScrollbarsSettingChanged(::DirectUI::Control *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAnimationsEnabled@DXamlCore@DirectUI@@QEAAJXZ
    long UpdateAnimationsEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFontScale@DXamlCore@DirectUI@@QEAAJM@Z
    long UpdateFontScale(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScaleFactor@DXamlCore@DirectUI@@QEAAJMM_N@Z
    long UpdateScaleFactor(float, float, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WrapHwnd@DXamlCore@DirectUI@@QEAAJPEAUHWND__@@@Z
    long WrapHwnd(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?XamlPalSetCoreWindow@DXamlCore@DirectUI@@QEAAJXZ
    long XamlPalSetCoreWindow();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DXamlCore@DirectUI@@QEAA@XZ
    ~DXamlCore();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommonShutdown@DXamlCore@DirectUI@@AEAAJXZ
    long CommonShutdown();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DXamlCore@DirectUI@@AEAA@XZ
    DXamlCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeinitializeInstance@DXamlCore@DirectUI@@AEAAJXZ
    long DeinitializeInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeinitializeInstanceToIdle@DXamlCore@DirectUI@@AEAAJXZ
    long DeinitializeInstanceToIdle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteDragDrop@DXamlCore@DirectUI@@AEAAXXZ
    void DeleteDragDrop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesMsgSenderHaveEnoughPrivileges@DXamlCore@DirectUI@@AEAAJXZ
    long DoesMsgSenderHaveEnoughPrivileges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureEventArgs@DXamlCore@DirectUI@@AEAAJXZ
    long EnsureEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPeerPrivate@DXamlCore@DirectUI@@AEAAJPEAUIInspectable@@PEAVCDependencyObject@@W4GetPeerPrivateCreateMode@12@W4KnownTypeIndex@@IIPEAIPEAPEAVDependencyObject@2@@Z
    long GetPeerPrivate(IInspectable *, CDependencyObject *, int, int, unsigned int, unsigned int, unsigned int *, ::DirectUI::DependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPeerPrivate@DXamlCore@DirectUI@@AEAAJPEAUIInspectable@@PEAVCDependencyObject@@W4GetPeerPrivateCreateMode@12@IPEAIPEAPEAVDependencyObject@2@@Z
    long GetPeerPrivate(IInspectable *, CDependencyObject *, int, unsigned int, unsigned int *, ::DirectUI::DependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowForScaling@DXamlCore@DirectUI@@AEAAJPEAPEAUHWND__@@@Z
    long GetWindowForScaling(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDPIScaling@DXamlCore@DirectUI@@AEAAJXZ
    long InitializeDPIScaling();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeImpl@DXamlCore@DirectUI@@CAJW4InitializationType@@_N@Z
    static long InitializeImpl(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInstance@DXamlCore@DirectUI@@AEAAJW4InitializationType@@_N@Z
    long InitializeInstance(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInstanceForXbf@DXamlCore@DirectUI@@AEAAJXZ
    long InitializeInstanceForXbf();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInstanceFromIdle@DXamlCore@DirectUI@@AEAAJXZ
    long InitializeInstanceFromIdle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MessageWindowProc@DXamlCore@DirectUI@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t MessageWindowProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusManagerGettingFocusEvent@DXamlCore@DirectUI@@AEAAJPEAUIGettingFocusEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnFocusManagerGettingFocusEvent(::Windows::UI::Xaml::Input::IGettingFocusEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusManagerGotFocusEvent@DXamlCore@DirectUI@@AEAAJPEAUIFocusManagerGotFocusEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnFocusManagerGotFocusEvent(::Windows::UI::Xaml::Input::IFocusManagerGotFocusEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusManagerLosingFocusEvent@DXamlCore@DirectUI@@AEAAJPEAUILosingFocusEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnFocusManagerLosingFocusEvent(::Windows::UI::Xaml::Input::ILosingFocusEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusManagerLostFocusEvent@DXamlCore@DirectUI@@AEAAJPEAUIFocusManagerLostFocusEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnFocusManagerLostFocusEvent(::Windows::UI::Xaml::Input::IFocusManagerLostFocusEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusedElementRemovedEvent@DXamlCore@DirectUI@@AEAAJPEAUIFocusedElementRemovedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnFocusedElementRemovedEvent(::Windows::UI::Xaml::Input::IFocusedElementRemovedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutUpdated@DXamlCore@DirectUI@@AEAAJPEAUIInspectable@@@Z
    long OnLayoutUpdated(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRenderedEvent@DXamlCore@DirectUI@@AEAAJPEAUIRenderedEventArgs@Media@Xaml@UI@Windows@@@Z
    long OnRenderedEvent(::Windows::UI::Xaml::Media::IRenderedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRenderingEvent@DXamlCore@DirectUI@@AEAAJPEAUIInspectable@@@Z
    long OnRenderingEvent(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSurfaceContentsLostEvent@DXamlCore@DirectUI@@AEAAJPEAUIInspectable@@@Z
    long OnSurfaceContentsLostEvent(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisualDiagInit@DXamlCore@DirectUI@@CAJPEAXPEBXH@Z
    static long OnVisualDiagInit(void *, void const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryScaleFactor@DXamlCore@DirectUI@@EEAAJPEAM@Z
    virtual long QueryScaleFactor(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryScalePercentage@DXamlCore@DirectUI@@AEAAJPEAI@Z
    long QueryScalePercentage(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseEvent@DXamlCore@DirectUI@@AEAAJPEAVCDependencyObject@@PEAVCEventArgs@@W4ManagedEvent@2@@Z
    long RaiseEvent(CDependencyObject *, CEventArgs *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterLayoutUpdatedEventSource@DXamlCore@DirectUI@@AEAAJPEAVFrameworkElement@2@@Z
    long RegisterLayoutUpdatedEventSource(::DirectUI::FrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterScaleChangeNotifications@DXamlCore@DirectUI@@AEAAJXZ
    long RegisterScaleChangeNotifications();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterVisualDiagnosticsPort@DXamlCore@DirectUI@@AEAAJXZ
    long RegisterVisualDiagnosticsPort();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseWindow@DXamlCore@DirectUI@@AEAAXXZ
    void ReleaseWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoreWindow@DXamlCore@DirectUI@@AEAAJPEAUICoreWindow@Core@UI@Windows@@@Z
    long SetCoreWindow(::Windows::UI::Core::ICoreWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StaticMessageWindowProc@DXamlCore@DirectUI@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t StaticMessageWindowProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterLayoutUpdatedEventSource@DXamlCore@DirectUI@@AEAAXPEAVFrameworkElement@2@@Z
    void UnregisterLayoutUpdatedEventSource(::DirectUI::FrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterScaleChangeNotifications@DXamlCore@DirectUI@@AEAAJXZ
    long UnregisterScaleChangeNotifications();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterVisualDiagnosticsPort@DXamlCore@DirectUI@@AEAAXXZ
    void UnregisterVisualDiagnosticsPort();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScaleFactor@DXamlCore@DirectUI@@AEAAJI@Z
    long UpdateScaleFactor(unsigned int);
};
} // namespace DirectUI

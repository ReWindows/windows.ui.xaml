#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 118 member(s).
namespace DirectUI {
class UIElement {
public:
    class VirtualizationInformation;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyElevationEffectProxy@UIElement@DirectUI@@SAJPEAVCUIElement@@I@Z
    static long ApplyElevationEffectProxy(CUIElement *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreAutomationPeerChildrenReversed@UIElement@DirectUI@@UEAAEXZ
    virtual unsigned char AreAutomationPeerChildrenReversed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringIntoView@UIElement@DirectUI@@QEAAXURect@Foundation@Windows@@EEENNNN@Z
    void BringIntoView(WindissectOpaque, unsigned char, unsigned char, unsigned char, double, double, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CapturePointerImpl@UIElement@DirectUI@@QEAAJPEAUIPointer@Input@Xaml@UI@Windows@@PEAE@Z
    long CapturePointerImpl(::Windows::UI::Xaml::Input::IPointer *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDCompTranslateTransform@UIElement@DirectUI@@QEAAJPEAPEAUIUnknown@@@Z
    long CreateDCompTranslateTransform(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectChildrenRecursive@UIElement@DirectUI@@QEAAJXZ
    long DisconnectChildrenRecursive();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanManipulateElements@UIElement@DirectUI@@SAJPEAVCUIElement@@PEAI11@Z
    static long GetCanManipulateElements(CUIElement *, unsigned int *, unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChild@UIElement@DirectUI@@UEAAJHPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long GetChild(int, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenCount@UIElement@DirectUI@@UEAAJPEAH@Z
    virtual long GetChildrenCount(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenInTabFocusOrderImpl@UIElement@DirectUI@@QEAAJPEAPEAU?$IIterable@PEAVDependencyObject@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    long GetChildrenInTabFocusOrderImpl(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDCompVisual@UIElement@DirectUI@@QEAAJPEAPEAUIUnknown@@@Z
    long GetDCompVisual(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDManipElement@UIElement@DirectUI@@SAJPEAVCUIElement@@PEAPEAVCDependencyObject@@@Z
    static long GetDManipElement(CUIElement *, CDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDManipElement@UIElement@DirectUI@@UEAAJPEAPEAVCDependencyObject@@@Z
    virtual long GetDManipElement(CDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDManipElementAndProperty@UIElement@DirectUI@@SAJPEAVCUIElement@@W4KnownPropertyIndex@@PEAPEAVCDependencyObject@@PEAI@Z
    static long GetDManipElementAndProperty(CUIElement *, int, CDependencyObject * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDManipElementAndProperty@UIElement@DirectUI@@UEAAJW4KnownPropertyIndex@@PEAPEAVCDependencyObject@@PEAI@Z
    virtual long GetDManipElementAndProperty(int, CDependencyObject * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDragStartingEventSourceNoRef@UIElement@DirectUI@@UEAAJPEAPEAV?$CRoutedEventSource@U?$ITypedEventHandler@PEAVUIElement@Xaml@UI@Windows@@PEAVDragStartingEventArgs@234@@Foundation@Windows@@UIUIElement@Xaml@UI@3@UIDragStartingEventArgs@563@@2@@Z
    virtual long GetDragStartingEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementVisual@UIElement@DirectUI@@QEAAJPEAPEAUIVisual@Composition@UI@Windows@@@Z
    long GetElementVisual(::Windows::UI::Composition::IVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstFocusableElement@UIElement@DirectUI@@SAJPEAVCDependencyObject@@PEAPEAV3@@Z
    static long GetFirstFocusableElement(CDependencyObject *, CDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstFocusableElementOverride@UIElement@DirectUI@@UEAAJPEAPEAVDependencyObject@2@@Z
    virtual long GetFirstFocusableElementOverride(::DirectUI::DependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandle@UIElement@DirectUI@@QEBAPEAVCUIElement@@XZ
    CUIElement * GetHandle() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastFocusableElement@UIElement@DirectUI@@SAJPEAVCDependencyObject@@PEAPEAV3@@Z
    static long GetLastFocusableElement(CDependencyObject *, CDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastFocusableElementOverride@UIElement@DirectUI@@UEAAJPEAPEAVDependencyObject@2@@Z
    virtual long GetLastFocusableElementOverride(::DirectUI::DependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulatedElement@UIElement@DirectUI@@SAJPEAVCUIElement@@PEAVCDependencyObject@@0PEAPEAV3@@Z
    static long GetManipulatedElement(CUIElement *, CDependencyObject *, CUIElement *, CUIElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulatedElement@UIElement@DirectUI@@UEAAJPEAVDependencyObject@2@PEAV12@PEAPEAV12@@Z
    virtual long GetManipulatedElement(::DirectUI::DependencyObject *, UIElement *, UIElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulationPrimaryContent@UIElement@DirectUI@@SAJPEAVCUIElement@@0PEAUXSIZEF@@PEAUXRECTF_WH@@PEAI3PEAM4333@Z
    static long GetManipulationPrimaryContent(CUIElement *, CUIElement *, XSIZEF *, XRECTF_WH *, unsigned int *, unsigned int *, float *, float *, unsigned int *, unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulationPrimaryContent@UIElement@DirectUI@@UEAAJPEAV12@PEAUXSIZEF@@PEAUXRECTF_WH@@PEAW4DMAlignment@2@3PEAM4PEAE55@Z
    virtual long GetManipulationPrimaryContent(UIElement *, XSIZEF *, XRECTF_WH *, int *, int *, float *, float *, unsigned char *, unsigned char *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulationPrimaryContentTransform@UIElement@DirectUI@@SAJPEAVCUIElement@@0IIIPEAIPEAM22@Z
    static long GetManipulationPrimaryContentTransform(CUIElement *, CUIElement *, unsigned int, unsigned int, unsigned int, unsigned int *, float *, float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulationPrimaryContentTransform@UIElement@DirectUI@@UEAAJPEAV12@EEEAEAEPEAM22@Z
    virtual long GetManipulationPrimaryContentTransform(UIElement *, unsigned char, unsigned char, unsigned char, unsigned char &, float *, float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulationSecondaryContent@UIElement@DirectUI@@UEAAJPEAV12@PEAUXSIZEF@@@Z
    virtual long GetManipulationSecondaryContent(UIElement *, XSIZEF *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulationSecondaryContentTransform@UIElement@DirectUI@@UEAAJPEAV12@PEAM11@Z
    virtual long GetManipulationSecondaryContentTransform(UIElement *, float *, float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulationSnapPoints@UIElement@DirectUI@@SAJPEAVCUIElement@@0IPEAI11PEAM21PEAPEAM1@Z
    static long GetManipulationSnapPoints(CUIElement *, CUIElement *, unsigned int, unsigned int *, unsigned int *, unsigned int *, float *, float *, unsigned int *, float * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulationSnapPoints@UIElement@DirectUI@@UEAAJPEAV12@W4DMMotionTypes@2@PEAE22PEAM3PEAIPEAPEAMPEAW4DMSnapCoordinate@2@@Z
    virtual long GetManipulationSnapPoints(UIElement *, int, unsigned char *, unsigned char *, unsigned char *, float *, float *, unsigned int *, float * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulationViewport@UIElement@DirectUI@@SAJPEAVCUIElement@@0PEAUXRECTF_WH@@PEAVCMILMatrix@@PEAI3333PEAEPEAPEAI3@Z
    static long GetManipulationViewport(CUIElement *, CUIElement *, XRECTF_WH *, CMILMatrix *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned char *, unsigned int * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulationViewport@UIElement@DirectUI@@UEAAJPEAV12@PEAUXRECTF_WH@@PEAVCMILMatrix@@PEAW4DMConfigurations@2@33PEAW4DMOverpanMode@2@4PEAEPEAPEAW452@PEAW4DMMotionTypes@2@@Z
    virtual long GetManipulationViewport(UIElement *, XRECTF_WH *, CMILMatrix *, int *, int *, int *, int *, int *, unsigned char *, int * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextTabStop@UIElement@DirectUI@@SAJPEAVCDependencyObject@@PEAPEAV3@@Z
    static long GetNextTabStop(CDependencyObject *, CDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextTabStopOverride@UIElement@DirectUI@@UEAAJPEAPEAVDependencyObject@2@@Z
    virtual long GetNextTabStopOverride(::DirectUI::DependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateAutomationPeer@UIElement@DirectUI@@QEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    long GetOrCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviousTabStop@UIElement@DirectUI@@SAJPEAVCDependencyObject@@PEAPEAV3@@Z
    static long GetPreviousTabStop(CDependencyObject *, CDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviousTabStopOverride@UIElement@DirectUI@@UEAAJPEAPEAVDependencyObject@2@@Z
    virtual long GetPreviousTabStopOverride(::DirectUI::DependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollContentPresenterViewportRatios@UIElement@DirectUI@@SAJPEAVCUIElement@@PEAVCDependencyObject@@PEAUXSIZEF@@@Z
    static long GetScrollContentPresenterViewportRatios(CUIElement *, CDependencyObject *, XSIZEF *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIElementFocusCandidate@UIElement@DirectUI@@SAJPEAUIInspectable@@PEAV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@@Z
    static long GetUIElementFocusCandidate(IInspectable *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitVirtualizationInformation@UIElement@DirectUI@@QEAAJXZ
    long InitVirtualizationInformation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsArrangeDirty@UIElement@DirectUI@@QEAA_NXZ
    bool IsArrangeDirty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDraggableOrPannable@UIElement@DirectUI@@SAJPEAVCUIElement@@PEA_N@Z
    static long IsDraggableOrPannable(CUIElement *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDraggableOrPannableImpl@UIElement@DirectUI@@UEAA_NXZ
    virtual bool IsDraggableOrPannableImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsScrollViewerContentScrollable@UIElement@DirectUI@@SAJPEAVCUIElement@@PEA_N1@Z
    static long IsScrollViewerContentScrollable(CUIElement *, bool *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyBringIntoViewportNeeded@UIElement@DirectUI@@UEAAJPEAV12@MMMEE@Z
    virtual long NotifyBringIntoViewportNeeded(UIElement *, float, float, float, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyBringIntoViewportNeeded@UIElement@DirectUI@@SAJPEAVCUIElement@@0MMMII@Z
    static long NotifyBringIntoViewportNeeded(CUIElement *, CUIElement *, float, float, float, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCanDragChanged@UIElement@DirectUI@@SAJPEAVCUIElement@@I@Z
    static long NotifyCanDragChanged(CUIElement *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyContentAlignmentAffectingPropertyChanged@UIElement@DirectUI@@SAJPEAVCUIElement@@0III@Z
    static long NotifyContentAlignmentAffectingPropertyChanged(CUIElement *, CUIElement *, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyContentAlignmentAffectingPropertyChanged@UIElement@DirectUI@@UEAAJPEAV12@EEE@Z
    virtual long NotifyContentAlignmentAffectingPropertyChanged(UIElement *, unsigned char, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInputPaneStateChange@UIElement@DirectUI@@SAJPEAVCUIElement@@W4InputPaneState@2@UXRECTF_WH@@@Z
    static long NotifyInputPaneStateChange(CUIElement *, int, XRECTF_WH);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyManipulatabilityAffectingPropertyChanged@UIElement@DirectUI@@UEAAJE@Z
    virtual long NotifyManipulatabilityAffectingPropertyChanged(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyManipulatabilityAffectingPropertyChanged@UIElement@DirectUI@@SAJPEAVCUIElement@@I@Z
    static long NotifyManipulatabilityAffectingPropertyChanged(CUIElement *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyManipulationProgress@UIElement@DirectUI@@SAJPEAVCUIElement@@0IMMMMMMMMIIII@Z
    static long NotifyManipulationProgress(CUIElement *, CUIElement *, unsigned int, float, float, float, float, float, float, float, float, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyManipulationProgress@UIElement@DirectUI@@UEAAJPEAV12@W4DMManipulationState@2@MMMMMMMMEEEE@Z
    virtual long NotifyManipulationProgress(UIElement *, int, float, float, float, float, float, float, float, float, unsigned char, unsigned char, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyManipulationStateChanged@UIElement@DirectUI@@UEAAJW4DMManipulationState@2@@Z
    virtual long NotifyManipulationStateChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyManipulationStateChanged@UIElement@DirectUI@@SAJPEAVCUIElement@@I@Z
    static long NotifyManipulationStateChanged(CUIElement *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySnapPointsChanged@UIElement@DirectUI@@SAJPEAVCUIElement@@I@Z
    static long NotifySnapPointsChanged(CUIElement *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBringIntoViewRequestedFromCore@UIElement@DirectUI@@SAJPEAVCUIElement@@PEAVCRoutedEventArgs@@@Z
    static long OnBringIntoViewRequestedFromCore(CUIElement *, CRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDirectManipulationCrossSlideContainerStart@UIElement@DirectUI@@UEAAJW4DMConfigurations@2@0AEAE@Z
    virtual long OnDirectManipulationCrossSlideContainerStart(int, int, unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDirectManipulationCrossSlideContainerStart@UIElement@DirectUI@@SAJPEAVCUIElement@@IIPEAI@Z
    static long OnDirectManipulationCrossSlideContainerStart(CUIElement *, unsigned int, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDirectManipulationDraggingStarted@UIElement@DirectUI@@SAJPEAVCUIElement@@@Z
    static long OnDirectManipulationDraggingStarted(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDropCompleted@UIElement@DirectUI@@QEAAJW4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Z
    long OnDropCompleted(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHandInVisualRemoved@UIElement@DirectUI@@SAJPEAVCUIElement@@PEAUIVisual@Composition@UI@Windows@@@Z
    static long OnHandInVisualRemoved(CUIElement *, ::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHandInVisualSet@UIElement@DirectUI@@SAJPEAVCUIElement@@PEAUIVisual@Composition@UI@Windows@@@Z
    static long OnHandInVisualSet(CUIElement *, ::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProcessKeyboardAcceleratorsImpl@UIElement@DirectUI@@QEAAJPEAUIProcessKeyboardAcceleratorEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnProcessKeyboardAcceleratorsImpl(::Windows::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTouchDragStarted@UIElement@DirectUI@@UEAAJPEAUIPointerPoint@Input@UI@Windows@@PEAUIPointer@4Xaml@56@@Z
    virtual long OnTouchDragStarted(::Windows::UI::Input::IPointerPoint *, ::Windows::UI::Xaml::Input::IPointer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedResource@UIElement@DirectUI@@QEAAJPEAXAEBU_GUID@@PEAPEAX@Z
    long OpenSharedResource(void *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulatePropertyInfo@UIElement@DirectUI@@UEAAJPEAUHSTRING__@@PEAUIAnimationPropertyInfo@Composition@UI@Windows@@@Z
    virtual long PopulatePropertyInfo(HSTRING__*, ::Windows::UI::Composition::IAnimationPropertyInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulatePropertyInfoOverrideImpl@UIElement@DirectUI@@QEAAJPEAUHSTRING__@@PEAUIAnimationPropertyInfo@Composition@UI@Windows@@@Z
    long PopulatePropertyInfoOverrideImpl(HSTRING__*, ::Windows::UI::Composition::IAnimationPropertyInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCandidateTabStopOverride@UIElement@DirectUI@@UEAAJPEAVDependencyObject@2@00_NPEAPEAV32@PEAE@Z
    virtual long ProcessCandidateTabStopOverride(::DirectUI::DependencyObject *, ::DirectUI::DependencyObject *, ::DirectUI::DependencyObject *, bool, ::DirectUI::DependencyObject * *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTabStop@UIElement@DirectUI@@SAJPEAVCDependencyObject@@0_N1PEAPEAV3@PEAI@Z
    static long ProcessTabStop(CDependencyObject *, CDependencyObject *, bool, bool, CDependencyObject * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTabStopOverride@UIElement@DirectUI@@UEAAJPEAVDependencyObject@2@0_N1PEAPEAV32@PEAE@Z
    virtual long ProcessTabStopOverride(::DirectUI::DependencyObject *, ::DirectUI::DependencyObject *, bool, bool, ::DirectUI::DependencyObject * *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@UIElement@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseKeyboardAcceleratorInvokedStatic@UIElement@DirectUI@@SAJPEAVCDependencyObject@@PEAVKeyboardAcceleratorInvokedEventArgs@2@PEAE@Z
    static long RaiseKeyboardAcceleratorInvokedStatic(CDependencyObject *, ::DirectUI::KeyboardAcceleratorInvokedEventArgs *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseProcessKeyboardAcceleratorsStatic@UIElement@DirectUI@@SAJPEAVCUIElement@@W4VirtualKey@System@Windows@@W4VirtualKeyModifiers@56@PEAE3@Z
    static long RaiseProcessKeyboardAcceleratorsStatic(CUIElement *, int, int, unsigned char *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAutomationPeer@UIElement@DirectUI@@QEAAJXZ
    long ResetAutomationPeer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetManipulationHandler@UIElement@DirectUI@@SAJPEAVCUIElement@@PEAX@Z
    static long SetManipulationHandler(CUIElement *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetManipulationHandlerWantsNotifications@UIElement@DirectUI@@SAJPEAVCUIElement@@0I@Z
    static long SetManipulationHandlerWantsNotifications(CUIElement *, CUIElement *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetManipulationHandlerWantsNotifications@UIElement@DirectUI@@UEAAJPEAV12@E@Z
    virtual long SetManipulationHandlerWantsNotifications(UIElement *, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPointedElement@UIElement@DirectUI@@SAJPEAVCUIElement@@PEAVCDependencyObject@@@Z
    static long SetPointedElement(CUIElement *, CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPointedElement@UIElement@DirectUI@@UEAAJPEAVDependencyObject@2@@Z
    virtual long SetPointedElement(::DirectUI::DependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldPlayImplicitShowHideAnimation@UIElement@DirectUI@@QEAA_NXZ
    bool ShouldPlayImplicitShowHideAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldPlayImplicitShowHideAnimation@UIElement@DirectUI@@SA_NPEAVCUIElement@@@Z
    static bool ShouldPlayImplicitShowHideAnimation(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartBringIntoViewImpl@UIElement@DirectUI@@QEAAJXZ
    long StartBringIntoViewImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartBringIntoViewWithOptionsImpl@UIElement@DirectUI@@QEAAJPEAUIBringIntoViewOptions@Xaml@UI@Windows@@@Z
    long StartBringIntoViewWithOptionsImpl(::Windows::UI::Xaml::IBringIntoViewOptions *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartDragAsyncImpl@UIElement@DirectUI@@QEAAJPEAUIPointerPoint@Input@UI@Windows@@PEAPEAU?$IAsyncOperation@W4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Foundation@6@@Z
    long StartDragAsyncImpl(::Windows::UI::Input::IPointerPoint *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryInvokeKeyboardAcceleratorImpl@UIElement@DirectUI@@QEAAJPEAUIProcessKeyboardAcceleratorEventArgs@Input@Xaml@UI@Windows@@@Z
    long TryInvokeKeyboardAcceleratorImpl(::Windows::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIElement@DirectUI@@QEAA@XZ
    UIElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PreviewKeyDown@UIElement@DirectUI@@UEAAJPEAUIKeyEventHandler@Input@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PreviewKeyDown(::Windows::UI::Xaml::Input::IKeyEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PreviewKeyUp@UIElement@DirectUI@@UEAAJPEAUIKeyEventHandler@Input@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PreviewKeyUp(::Windows::UI::Xaml::Input::IKeyEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AccessKeyScopeOwnerImpl@UIElement@DirectUI@@QEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long get_AccessKeyScopeOwnerImpl(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActualSizeImpl@UIElement@DirectUI@@QEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z
    long get_ActualSizeImpl(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanManipulateElements@UIElement@DirectUI@@UEAAJPEAE00@Z
    virtual long get_CanManipulateElements(unsigned char *, unsigned char *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LightsImpl@UIElement@DirectUI@@QEAAJPEAPEAU?$IVector@PEAVXamlLight@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    long get_LightsImpl(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RenderTransform@UIElement@DirectUI@@UEAAJPEAPEAUITransform@Media@Xaml@UI@Windows@@@Z
    virtual long get_RenderTransform(::Windows::UI::Xaml::Media::ITransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UIContextImpl@UIElement@DirectUI@@QEAAJPEAPEAUIUIContext@UI@Windows@@@Z
    long get_UIContextImpl(::Windows::UI::IUIContext * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AccessKeyScopeOwnerImpl@UIElement@DirectUI@@QEAAJPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long put_AccessKeyScopeOwnerImpl(::Windows::UI::Xaml::IDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ManipulationHandler@UIElement@DirectUI@@UEAAJPEAX@Z
    virtual long put_ManipulationHandler(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RasterizationScaleImpl@UIElement@DirectUI@@QEAAJN@Z
    long put_RasterizationScaleImpl(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_XamlRootImpl@UIElement@DirectUI@@UEAAJPEAUIXamlRoot@Xaml@UI@Windows@@@Z
    virtual long put_XamlRootImpl(::Windows::UI::Xaml::IXamlRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PreviewKeyDown@UIElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PreviewKeyDown(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PreviewKeyUp@UIElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PreviewKeyUp(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UIElement@DirectUI@@UEAA@XZ
    virtual ~UIElement();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureAutomaticDragHelper@UIElement@DirectUI@@IEAAJ_N@Z
    long ConfigureAutomaticDragHelper(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DirectManipulationCrossSlideContainerCompleted@UIElement@DirectUI@@IEAAJXZ
    long DirectManipulationCrossSlideContainerCompleted();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnchorPoint@UIElement@DirectUI@@IEAAXUPoint@Foundation@Windows@@PEAU345@@Z
    void GetAnchorPoint(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptured@UIElement@DirectUI@@MEAAJXZ
    virtual long OnPointerCaptured();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldAutomaticDragHelperHandleInputEvents@UIElement@DirectUI@@MEAA_NXZ
    virtual bool ShouldAutomaticDragHelperHandleInputEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsDirectManipulationCrossSlideContainer@UIElement@DirectUI@@IEAAJE@Z
    long put_IsDirectManipulationCrossSlideContainer(unsigned char);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHolding@UIElement@DirectUI@@AEAAJPEAUIInspectable@@PEAUIHoldingRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnHolding(IInspectable *, ::Windows::UI::Xaml::Input::IHoldingRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@UIElement@DirectUI@@AEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnPointerCaptureLost(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@UIElement@DirectUI@@AEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnPointerMoved(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@UIElement@DirectUI@@AEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnPointerPressed(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@UIElement@DirectUI@@AEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnPointerReleased(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCandidateTabStopInternal@UIElement@DirectUI@@AEAAJPEAVDependencyObject@2@0EPEAPEAV32@PEAE@Z
    long ProcessCandidateTabStopInternal(::DirectUI::DependencyObject *, ::DirectUI::DependencyObject *, unsigned char, ::DirectUI::DependencyObject * *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTabStopInternal@UIElement@DirectUI@@AEAAJPEAVDependencyObject@2@_N1PEAPEAV32@PEAE@Z
    long ProcessTabStopInternal(::DirectUI::DependencyObject *, bool, bool, ::DirectUI::DependencyObject * *, unsigned char *);
};
} // namespace DirectUI

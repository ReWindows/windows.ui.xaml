#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 250 member(s).
namespace DirectUI {
class ScrollViewer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@ScrollViewer@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long ArrangeOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BlockIndicatorsFromShowing@ScrollViewer@DirectUI@@QEAAJXZ
    long BlockIndicatorsFromShowing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringIntoViewport@ScrollViewer@DirectUI@@QEAAJAEAUXRECTF_WH@@EEEPEAE@Z
    long BringIntoViewport(XRECTF_WH &, unsigned char, unsigned char, unsigned char, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeView@ScrollViewer@DirectUI@@SAJPEAVCScrollViewer@@PEAN1PEAMPEAE@Z
    static long ChangeView(CScrollViewer *, double *, double *, float *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeViewInternal@ScrollViewer@DirectUI@@QEAAJPEAU?$IReference@N@Foundation@Windows@@0PEAU?$IReference@M@45@PEAMEEEEEEEEPEAE@Z
    long ChangeViewInternal(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, float *, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableLockScreenModeImpl@ScrollViewer@DirectUI@@QEAAJXZ
    long EnableLockScreenModeImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentUIElement@ScrollViewer@DirectUI@@QEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    long GetContentUIElement(::Windows::UI::Xaml::IUIElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDManipElement@ScrollViewer@DirectUI@@UEAAJPEAPEAVCDependencyObject@@@Z
    virtual long GetDManipElement(CDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDManipElementAndProperty@ScrollViewer@DirectUI@@UEAAJW4KnownPropertyIndex@@PEAPEAVCDependencyObject@@PEAI@Z
    virtual long GetDManipElementAndProperty(int, CDependencyObject * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDManipView@ScrollViewer@DirectUI@@QEAAJPEAN0PEAM@Z
    long GetDManipView(double *, double *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGamepadNavigationCandidate@ScrollViewer@DirectUI@@QEAAJW4FocusNavigationDirection@Input@Xaml@UI@Windows@@_NHMPEAPEAUIInspectable@@@Z
    long GetGamepadNavigationCandidate(int, bool, int, float, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeadersSize@ScrollViewer@DirectUI@@QEAAJPEAUXSIZEF@@@Z
    long GetHeadersSize(XSIZEF *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyboardMessageZoomAction@ScrollViewer@DirectUI@@SA?AW4ZoomDirection@2@W4VirtualKeyModifiers@System@Windows@@W4VirtualKey@56@@Z
    static int GetKeyboardMessageZoomAction(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulatedElement@ScrollViewer@DirectUI@@UEAAJPEAVDependencyObject@2@PEAVUIElement@2@PEAPEAV42@@Z
    virtual long GetManipulatedElement(::DirectUI::DependencyObject *, ::DirectUI::UIElement *, ::DirectUI::UIElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulationPrimaryContent@ScrollViewer@DirectUI@@UEAAJPEAVUIElement@2@PEAUXSIZEF@@PEAUXRECTF_WH@@PEAW4DMAlignment@2@3PEAM4PEAE55@Z
    virtual long GetManipulationPrimaryContent(::DirectUI::UIElement *, XSIZEF *, XRECTF_WH *, int *, int *, float *, float *, unsigned char *, unsigned char *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulationPrimaryContentTransform@ScrollViewer@DirectUI@@UEAAJPEAVUIElement@2@EEEAEAEPEAM22@Z
    virtual long GetManipulationPrimaryContentTransform(::DirectUI::UIElement *, unsigned char, unsigned char, unsigned char, unsigned char &, float *, float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulationSecondaryContent@ScrollViewer@DirectUI@@UEAAJPEAVUIElement@2@PEAUXSIZEF@@@Z
    virtual long GetManipulationSecondaryContent(::DirectUI::UIElement *, XSIZEF *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulationSecondaryContentTransform@ScrollViewer@DirectUI@@UEAAJPEAVUIElement@2@PEAM11@Z
    virtual long GetManipulationSecondaryContentTransform(::DirectUI::UIElement *, float *, float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulationSnapPoints@ScrollViewer@DirectUI@@UEAAJPEAVUIElement@2@W4DMMotionTypes@2@PEAE22PEAM3PEAIPEAPEAMPEAW4DMSnapCoordinate@2@@Z
    virtual long GetManipulationSnapPoints(::DirectUI::UIElement *, int, unsigned char *, unsigned char *, unsigned char *, float *, float *, unsigned int *, float * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulationViewport@ScrollViewer@DirectUI@@UEAAJPEAVUIElement@2@PEAUXRECTF_WH@@PEAVCMILMatrix@@PEAW4DMConfigurations@2@33PEAW4DMOverpanMode@2@4PEAEPEAPEAW462@PEAW4DMMotionTypes@2@@Z
    virtual long GetManipulationViewport(::DirectUI::UIElement *, XRECTF_WH *, CMILMatrix *, int *, int *, int *, int *, int *, unsigned char *, int * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetView@ScrollViewer@DirectUI@@QEAAJPEAN0PEAM@Z
    long GetTargetView(double *, double *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewportRatios@ScrollViewer@DirectUI@@QEAAJPEAVDependencyObject@2@PEAUXSIZEF@@@Z
    long GetViewportRatios(::DirectUI::DependencyObject *, XSIZEF *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateScrollInfoImpl@ScrollViewer@DirectUI@@UEAAJXZ
    virtual long InvalidateScrollInfoImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsContentScrollable@ScrollViewer@DirectUI@@QEAAJ_N0PEA_N1@Z
    long IsContentScrollable(bool, bool, bool *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDraggableOrPannableImpl@ScrollViewer@DirectUI@@UEAA_NXZ
    virtual bool IsDraggableOrPannableImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInChildInvalidateMeasure@ScrollViewer@DirectUI@@UEAAJAEAE@Z
    virtual long IsInChildInvalidateMeasure(unsigned char &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInDirectManipulationZoom@ScrollViewer@DirectUI@@UEAAJAEAE@Z
    virtual long IsInDirectManipulationZoom(unsigned char &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInManipulation@ScrollViewer@DirectUI@@QEBAEXZ
    unsigned char IsInManipulation() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsThumbDragging@ScrollViewer@DirectUI@@QEAAJPEAE@Z
    long IsThumbDragging(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@ScrollViewer@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long MeasureOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyBringIntoViewportNeeded@ScrollViewer@DirectUI@@UEAAJPEAVUIElement@2@MMMEE@Z
    virtual long NotifyBringIntoViewportNeeded(::DirectUI::UIElement *, float, float, float, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyContentAlignmentAffectingPropertyChanged@ScrollViewer@DirectUI@@UEAAJPEAVUIElement@2@EEE@Z
    virtual long NotifyContentAlignmentAffectingPropertyChanged(::DirectUI::UIElement *, unsigned char, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyHeaderParented@ScrollViewer@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@EE@Z
    long NotifyHeaderParented(::Windows::UI::Xaml::IUIElement *, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyHeaderParenting@ScrollViewer@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@EE@Z
    long NotifyHeaderParenting(::Windows::UI::Xaml::IUIElement *, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyHeaderUnparented@ScrollViewer@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@EE@Z
    long NotifyHeaderUnparented(::Windows::UI::Xaml::IUIElement *, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyHorizontalOffsetChanging@ScrollViewer@DirectUI@@UEAAJNN@Z
    virtual long NotifyHorizontalOffsetChanging(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyLayoutRefreshed@ScrollViewer@DirectUI@@UEAAJXZ
    virtual long NotifyLayoutRefreshed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyManipulatabilityAffectingPropertyChanged@ScrollViewer@DirectUI@@UEAAJE@Z
    virtual long NotifyManipulatabilityAffectingPropertyChanged(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyManipulationProgress@ScrollViewer@DirectUI@@UEAAJPEAVUIElement@2@W4DMManipulationState@2@MMMMMMMMEEEE@Z
    virtual long NotifyManipulationProgress(::DirectUI::UIElement *, int, float, float, float, float, float, float, float, float, unsigned char, unsigned char, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyManipulationStateChanged@ScrollViewer@DirectUI@@UEAAJW4DMManipulationState@2@@Z
    virtual long NotifyManipulationStateChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyVerticalOffsetChanging@ScrollViewer@DirectUI@@UEAAJNN@Z
    virtual long NotifyVerticalOffsetChanging(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@ScrollViewer@DirectUI@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@ScrollViewer@DirectUI@@UEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnGotFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@ScrollViewer@DirectUI@@UEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@ScrollViewer@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerEntered(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@ScrollViewer@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerExited(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@ScrollViewer@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerMoved(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@ScrollViewer@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerPressed(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@ScrollViewer@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerReleased(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerWheelChanged@ScrollViewer@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerWheelChanged(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightTappedUnhandled@ScrollViewer@DirectUI@@UEAAJPEAUIRightTappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnRightTappedUnhandled(::Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollContentPresenterMeasured@ScrollViewer@DirectUI@@QEAAJXZ
    long OnScrollContentPresenterMeasured();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSnapPointsChanged@ScrollViewer@DirectUI@@QEAAJW4DMMotionTypes@2@@Z
    long OnSnapPointsChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTreeParentUpdated@ScrollViewer@DirectUI@@UEAAJPEAVCDependencyObject@@E@Z
    virtual long OnTreeParentUpdated(CDependencyObject *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostDirectManipulationLayoutRefreshed@ScrollViewer@DirectUI@@QEAAJXZ
    long PostDirectManipulationLayoutRefreshed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessGamepadNavigation@ScrollViewer@DirectUI@@QEAAJW4VirtualKey@System@Windows@@0AEAE@Z
    long ProcessGamepadNavigation(int, int, unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPureInertiaInputMessage@ScrollViewer@DirectUI@@QEAAJW4ZoomDirection@2@PEAE@Z
    long ProcessPureInertiaInputMessage(int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPureInertiaInputMessage@ScrollViewer@DirectUI@@UEAAJW4ZoomDirection@2@@Z
    virtual long ProcessPureInertiaInputMessage(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAnchorCandidateImpl@ScrollViewer@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    long RegisterAnchorCandidateImpl(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAsSemanticZoomHost@ScrollViewer@DirectUI@@QEAAJXZ
    long RegisterAsSemanticZoomHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetBlockIndicatorsFromShowing@ScrollViewer@DirectUI@@QEAAJXZ
    long ResetBlockIndicatorsFromShowing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollForFocusNavigation@ScrollViewer@DirectUI@@QEAAJW4VirtualKey@System@Windows@@W4FocusNavigationDirection@Input@Xaml@UI@5@NPEAE@Z
    long ScrollForFocusNavigation(int, int, double, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollInDirection@ScrollViewer@DirectUI@@QEAAJW4VirtualKey@System@Windows@@E@Z
    long ScrollInDirection(int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollToHorizontalOffsetImpl@ScrollViewer@DirectUI@@UEAAJN@Z
    virtual long ScrollToHorizontalOffsetImpl(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollToVerticalOffsetImpl@ScrollViewer@DirectUI@@UEAAJN@Z
    virtual long ScrollToVerticalOffsetImpl(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAsideSpaceForPeekThrough@ScrollViewer@DirectUI@@QEAAJUSize@Foundation@Windows@@@Z
    long SetAsideSpaceForPeekThrough(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConstantVelocities@ScrollViewer@DirectUI@@QEAAJMM@Z
    long SetConstantVelocities(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirectManipulationOverridingZoomBoundaries@ScrollViewer@DirectUI@@QEAAJXZ
    long SetDirectManipulationOverridingZoomBoundaries();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayoutSize@ScrollViewer@DirectUI@@QEAAJUSize@Foundation@Windows@@@Z
    long SetLayoutSize(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetManipulationHandlerWantsNotifications@ScrollViewer@DirectUI@@UEAAJPEAVUIElement@2@E@Z
    virtual long SetManipulationHandlerWantsNotifications(::DirectUI::UIElement *, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOverpanModes@ScrollViewer@DirectUI@@QEAAJW4DMOverpanMode@2@0@Z
    long SetOverpanModes(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPointedElement@ScrollViewer@DirectUI@@UEAAJPEAVDependencyObject@2@@Z
    virtual long SetPointedElement(::DirectUI::DependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopUseOfActualSizeAsExtent@ScrollViewer@DirectUI@@QEAAX_N@Z
    void StopUseOfActualSizeAsExtent(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterAnchorCandidateImpl@ScrollViewer@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    long UnregisterAnchorCandidateImpl(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanManipulateElements@ScrollViewer@DirectUI@@UEAAJPEAE00@Z
    virtual long get_CanManipulateElements(unsigned char *, unsigned char *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentAnchorImpl@ScrollViewer@DirectUI@@QEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    long get_CurrentAnchorImpl(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtentHeight@ScrollViewer@DirectUI@@UEAAJPEAN@Z
    virtual long get_ExtentHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtentWidth@ScrollViewer@DirectUI@@UEAAJPEAN@Z
    virtual long get_ExtentWidth(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeaderHeight@ScrollViewer@DirectUI@@QEAAJPEAN@Z
    long get_HeaderHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalOffset@ScrollViewer@DirectUI@@UEAAJPEAN@Z
    virtual long get_HorizontalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScrollInfo@ScrollViewer@DirectUI@@UEAAJPEAPEAUIScrollInfo@2@@Z
    virtual long get_ScrollInfo(::DirectUI::IScrollInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScrollableHeight@ScrollViewer@DirectUI@@UEAAJPEAN@Z
    virtual long get_ScrollableHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScrollableWidth@ScrollViewer@DirectUI@@UEAAJPEAN@Z
    virtual long get_ScrollableWidth(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalOffset@ScrollViewer@DirectUI@@UEAAJPEAN@Z
    virtual long get_VerticalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewportHeight@ScrollViewer@DirectUI@@UEAAJPEAN@Z
    virtual long get_ViewportHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewportWidth@ScrollViewer@DirectUI@@UEAAJPEAN@Z
    virtual long get_ViewportWidth(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ZoomFactorImpl@ScrollViewer@DirectUI@@UEAAJPEAM@Z
    virtual long get_ZoomFactorImpl(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ZoomSnapPointsImpl@ScrollViewer@DirectUI@@QEAAJPEAPEAU?$IVector@M@Collections@Foundation@Windows@@@Z
    long get_ZoomSnapPointsImpl(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ExtentHeight@ScrollViewer@DirectUI@@UEAAJN@Z
    virtual long put_ExtentHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ExtentWidth@ScrollViewer@DirectUI@@UEAAJN@Z
    virtual long put_ExtentWidth(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HorizontalOffset@ScrollViewer@DirectUI@@UEAAJN@Z
    virtual long put_HorizontalOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ManipulationHandler@ScrollViewer@DirectUI@@UEAAJPEAX@Z
    virtual long put_ManipulationHandler(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxZoomFactor@ScrollViewer@DirectUI@@UEAAJM@Z
    virtual long put_MaxZoomFactor(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ScrollInfo@ScrollViewer@DirectUI@@UEAAJPEAUIScrollInfo@2@@Z
    virtual long put_ScrollInfo(::DirectUI::IScrollInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VerticalOffset@ScrollViewer@DirectUI@@UEAAJN@Z
    virtual long put_VerticalOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ViewportHeight@ScrollViewer@DirectUI@@UEAAJN@Z
    virtual long put_ViewportHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ViewportWidth@ScrollViewer@DirectUI@@UEAAJN@Z
    virtual long put_ViewportWidth(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ZoomFactor@ScrollViewer@DirectUI@@UEAAJM@Z
    virtual long put_ZoomFactor(float);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@ScrollViewer@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleHorizontalScroll@ScrollViewer@DirectUI@@IEAAJW4ScrollEventType@Primitives@Controls@Xaml@UI@Windows@@N@Z
    long HandleHorizontalScroll(int, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleVerticalScroll@ScrollViewer@DirectUI@@IEAAJW4ScrollEventType@Primitives@Controls@Xaml@UI@Windows@@N@Z
    long HandleVerticalScroll(int, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ScrollViewer@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInputPaneShow@ScrollViewer@DirectUI@@MEAAEXZ
    virtual unsigned char IsInputPaneShow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRootScrollViewer@ScrollViewer@DirectUI@@MEAAEXZ
    virtual unsigned char IsRootScrollViewer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRootScrollViewerAllowImplicitStyle@ScrollViewer@DirectUI@@MEAAEXZ
    virtual unsigned char IsRootScrollViewerAllowImplicitStyle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentChanged@ScrollViewer@DirectUI@@MEAAJPEAUIInspectable@@0@Z
    virtual long OnContentChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@ScrollViewer@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@ScrollViewer@DirectUI@@MEAAJPEAVIsEnabledChangedEventArgs@2@@Z
    virtual long OnIsEnabledChanged(::DirectUI::IsEnabledChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@ScrollViewer@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ScrollViewer@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollViewer@DirectUI@@IEAA@XZ
    ScrollViewer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputPaneOffsetX@ScrollViewer@DirectUI@@MEAAJXZ
    virtual long UpdateInputPaneOffsetX();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputPaneOffsetY@ScrollViewer@DirectUI@@MEAAJXZ
    virtual long UpdateInputPaneOffsetY();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputPaneTransition@ScrollViewer@DirectUI@@MEAAXXZ
    virtual void UpdateInputPaneTransition();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScrollViewer@DirectUI@@MEAA@XZ
    virtual ~ScrollViewer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustLogicalOffsetWithMandatorySnapPoints@ScrollViewer@DirectUI@@AEAAJEPEAN@Z
    long AdjustLogicalOffsetWithMandatorySnapPoints(unsigned char, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustOffsetWithMandatorySnapPoints@ScrollViewer@DirectUI@@AEAAJENNNNNMPEAN@Z
    long AdjustOffsetWithMandatorySnapPoints(unsigned char, double, double, double, double, double, float, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustPixelContentDim@ScrollViewer@DirectUI@@AEAANN@Z
    double AdjustPixelContentDim(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustTargetHorizontalOffset@ScrollViewer@DirectUI@@AEAAJEEMNNNPEAN000@Z
    long AdjustTargetHorizontalOffset(unsigned char, unsigned char, float, double, double, double, double *, double *, double *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustTargetVerticalOffset@ScrollViewer@DirectUI@@AEAAJEEMNNNPEAN000@Z
    long AdjustTargetVerticalOffset(unsigned char, unsigned char, float, double, double, double, double *, double *, double *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustViewWithMandatorySnapPoints@ScrollViewer@DirectUI@@AEAAJNNNNNNMMNNPEAN000PEAM@Z
    long AdjustViewWithMandatorySnapPoints(double, double, double, double, double, double, float, float, double, double, double *, double *, double *, double *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustZoomFactorWithMandatorySnapPoints@ScrollViewer@DirectUI@@AEAAJMMPEAM@Z
    long AdjustZoomFactorWithMandatorySnapPoints(float, float, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreBothScrollBarsVisible@ScrollViewer@DirectUI@@AEAA_NXZ
    bool AreBothScrollBarsVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreExtentChangesExpected@ScrollViewer@DirectUI@@AEAAJAEAE@Z
    long AreExtentChangesExpected(unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringIntoViewportInternal@ScrollViewer@DirectUI@@AEAAJAEAUXRECTF_WH@@MMMEEEEEEPEAE@Z
    long BringIntoViewportInternal(XRECTF_WH &, float, float, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanScrollForFocusNavigation@ScrollViewer@DirectUI@@AEAAJW4VirtualKey@System@Windows@@W4FocusNavigationDirection@Input@Xaml@UI@5@PEA_N@Z
    long CanScrollForFocusNavigation(int, int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoerceMaxZoomFactor@ScrollViewer@DirectUI@@AEAAJXZ
    long CoerceMaxZoomFactor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoerceZoomFactor@ScrollViewer@DirectUI@@AEAAJXZ
    long CoerceZoomFactor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeAnchorPoint@ScrollViewer@DirectUI@@AEAAJAEBURect@Foundation@Windows@@PEAN1@Z
    long ComputeAnchorPoint(WindissectOpaque const &, double *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeElementAnchorPoint@ScrollViewer@DirectUI@@AEAAJ_NPEAN1@Z
    long ComputeElementAnchorPoint(bool, double *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeHorizontalAlignment@ScrollViewer@DirectUI@@AEAAJEAEAW4DMAlignment@2@@Z
    long ComputeHorizontalAlignment(unsigned char, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePixelExtentHeight@ScrollViewer@DirectUI@@AEAAJPEAN@Z
    long ComputePixelExtentHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePixelExtentHeight@ScrollViewer@DirectUI@@AEAAJ_NPEAUIManipulationDataProvider@2@PEAN@Z
    long ComputePixelExtentHeight(bool, ::DirectUI::IManipulationDataProvider *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePixelExtentWidth@ScrollViewer@DirectUI@@AEAAJPEAN@Z
    long ComputePixelExtentWidth(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePixelExtentWidth@ScrollViewer@DirectUI@@AEAAJ_NPEAUIManipulationDataProvider@2@PEAN@Z
    long ComputePixelExtentWidth(bool, ::DirectUI::IManipulationDataProvider *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePixelScrollableHeight@ScrollViewer@DirectUI@@AEAAJPEAUIManipulationDataProvider@2@AEAN@Z
    long ComputePixelScrollableHeight(::DirectUI::IManipulationDataProvider *, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePixelScrollableWidth@ScrollViewer@DirectUI@@AEAAJPEAUIManipulationDataProvider@2@AEAN@Z
    long ComputePixelScrollableWidth(::DirectUI::IManipulationDataProvider *, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePixelViewportHeight@ScrollViewer@DirectUI@@AEAAJPEAUIManipulationDataProvider@2@EPEAN@Z
    long ComputePixelViewportHeight(::DirectUI::IManipulationDataProvider *, unsigned char, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePixelViewportWidth@ScrollViewer@DirectUI@@AEAAJPEAUIManipulationDataProvider@2@EPEAN@Z
    long ComputePixelViewportWidth(::DirectUI::IManipulationDataProvider *, unsigned char, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeTranslationXCorrection@ScrollViewer@DirectUI@@AEAAJEEEPEAUIManipulationDataProvider@2@NNMPEAM@Z
    long ComputeTranslationXCorrection(unsigned char, unsigned char, unsigned char, ::DirectUI::IManipulationDataProvider *, double, double, float, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeTranslationYCorrection@ScrollViewer@DirectUI@@AEAAJEEEPEAUIManipulationDataProvider@2@NNMPEAM@Z
    long ComputeTranslationYCorrection(unsigned char, unsigned char, unsigned char, ::DirectUI::IManipulationDataProvider *, double, double, float, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeVerticalAlignment@ScrollViewer@DirectUI@@AEAAJEAEAW4DMAlignment@2@@Z
    long ComputeVerticalAlignment(unsigned char, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeViewportAnchorPoint@ScrollViewer@DirectUI@@AEAAJAEBUXRECTF_WH@@PEAN1@Z
    long ComputeViewportAnchorPoint(XRECTF_WH const &, double *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeViewportToElementAnchorPointsDistance@ScrollViewer@DirectUI@@AEAAJAEBUXRECTF_WH@@_NPEAUSize@Foundation@Windows@@@Z
    long ComputeViewportToElementAnchorPointsDistance(XRECTF_WH const &, bool, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyMotionSnapPointsFromVector@ScrollViewer@DirectUI@@AEAAJEPEAU?$IVectorView@M@Collections@Foundation@Windows@@W4SnapPointsAlignment@Primitives@Controls@Xaml@UI@6@NNMMPEAIPEAPEAM@Z
    long CopyMotionSnapPointsFromVector(unsigned char, WindissectOpaque *, int, double, double, float, float, unsigned int *, float * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAnchorCandidateVector@ScrollViewer@DirectUI@@AEAAJXZ
    long EnsureAnchorCandidateVector();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAnchorElementSelection@ScrollViewer@DirectUI@@AEAAJAEBUXRECTF_WH@@@Z
    long EnsureAnchorElementSelection(XRECTF_WH const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterIntermediateViewChangedMode@ScrollViewer@DirectUI@@AEAAJXZ
    long EnterIntermediateViewChangedMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushViewChanged@ScrollViewer@DirectUI@@AEAAJJ@Z
    long FlushViewChanged(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushViewChanging@ScrollViewer@DirectUI@@AEAAJJ@Z
    long FlushViewChanging(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescendantBounds@ScrollViewer@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@0PEAURect@Foundation@6@@Z
    long GetDescendantBounds(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IUIElement *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescendantBounds@ScrollViewer@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@0AEBURect@Foundation@6@PEAU786@@Z
    long GetDescendantBounds(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IUIElement *, WindissectOpaque const &, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveDMOverpanMode@ScrollViewer@DirectUI@@AEAAJEPEAW4DMOverpanMode@2@@Z
    long GetEffectiveDMOverpanMode(unsigned char, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveHorizontalAlignment@ScrollViewer@DirectUI@@AEAAJEAEAW4DMAlignment@2@@Z
    long GetEffectiveHorizontalAlignment(unsigned char, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveHorizontalScrollMode@ScrollViewer@DirectUI@@AEAAJEAEAW4ScrollMode@Controls@Xaml@UI@Windows@@@Z
    long GetEffectiveHorizontalScrollMode(unsigned char, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveVerticalAlignment@ScrollViewer@DirectUI@@AEAAJEAEAW4DMAlignment@2@@Z
    long GetEffectiveVerticalAlignment(unsigned char, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveZoomMode@ScrollViewer@DirectUI@@AEAAJEAEAW4ZoomMode@Controls@Xaml@UI@Windows@@@Z
    long GetEffectiveZoomMode(unsigned char, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFloatValue@ScrollViewer@DirectUI@@AEAAJPEAUIInspectable@@AEAM@Z
    long GetFloatValue(IInspectable *, float &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInnerManipulationDataProvider@ScrollViewer@DirectUI@@AEAAJEPEAPEAUIManipulationDataProvider@2@@Z
    long GetInnerManipulationDataProvider(unsigned char, ::DirectUI::IManipulationDataProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInnerManipulationDataProvider@ScrollViewer@DirectUI@@AEAAJPEAPEAUIManipulationDataProvider@2@@Z
    long GetInnerManipulationDataProvider(::DirectUI::IManipulationDataProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulationConfigurations@ScrollViewer@DirectUI@@AEAAJPEAEE00PEAW4DMConfigurations@2@110PEAPEAW432@@Z
    long GetManipulationConfigurations(unsigned char *, unsigned char, unsigned char *, unsigned char *, int *, int *, int *, unsigned char *, int * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNonTouchManipulationConfiguration@ScrollViewer@DirectUI@@AEAAJEPEAW4DMConfigurations@2@@Z
    long GetNonTouchManipulationConfiguration(unsigned char, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollInfoAsElement@ScrollViewer@DirectUI@@AEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    long GetScrollInfoAsElement(::Windows::UI::Xaml::IUIElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollSnapPoints@ScrollViewer@DirectUI@@AEAAJEMMNEPEAE00PEAM1PEAIPEAPEAMPEAW4DMSnapCoordinate@2@@Z
    long GetScrollSnapPoints(unsigned char, float, float, double, unsigned char, unsigned char *, unsigned char *, unsigned char *, float *, float *, unsigned int *, float * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollViewerGlobalBoundsWithoutHeaders@ScrollViewer@DirectUI@@AEAAJPEAUXRECTF_RB@@@Z
    long GetScrollViewerGlobalBoundsWithoutHeaders(XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShouldClearFocus@ScrollViewer@DirectUI@@AEAAJPEAE@Z
    long GetShouldClearFocus(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTopLeftMargins@ScrollViewer@DirectUI@@AEAAJPEAVUIElement@2@AEAN1@Z
    long GetTopLeftMargins(::DirectUI::UIElement *, double &, double &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnobstructedScrollViewerGlobalBounds@ScrollViewer@DirectUI@@AEAAJPEAURect@Foundation@Windows@@@Z
    long GetUnobstructedScrollViewerGlobalBounds(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualChild@ScrollViewer@DirectUI@@AEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    long GetVisualChild(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleCoreInputViewOcclusionsChanged@ScrollViewer@DirectUI@@AEAA_NXZ
    bool HandleCoreInputViewOcclusionsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleManipulationCompleted@ScrollViewer@DirectUI@@AEAAJPEAVUIElement@2@EMM@Z
    long HandleManipulationCompleted(::DirectUI::UIElement *, unsigned char, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleManipulationDelta@ScrollViewer@DirectUI@@AEAAJPEAVUIElement@2@MMMEEE@Z
    long HandleManipulationDelta(::DirectUI::UIElement *, float, float, float, unsigned char, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleManipulationLastDelta@ScrollViewer@DirectUI@@AEAAJPEAVUIElement@2@NNAEAE@Z
    long HandleManipulationLastDelta(::DirectUI::UIElement *, double, double, unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleManipulationStarting@ScrollViewer@DirectUI@@AEAAJPEAVUIElement@2@E@Z
    long HandleManipulationStarting(::DirectUI::UIElement *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookScrollSnapPointsInfoEvents@ScrollViewer@DirectUI@@AEAAJE@Z
    long HookScrollSnapPointsInfoEvents(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndicatorStateStoryboardCompleted@ScrollViewer@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long IndicatorStateStoryboardCompleted(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateScrollInfo_TryUpdateValues@ScrollViewer@DirectUI@@AEAAJPEAUIScrollInfo@2@AEAE111111@Z
    long InvalidateScrollInfo_TryUpdateValues(::DirectUI::IScrollInfo *, unsigned char &, unsigned char &, unsigned char &, unsigned char &, unsigned char &, unsigned char &, unsigned char &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnchoring@ScrollViewer@DirectUI@@AEAAJPEA_N000@Z
    long IsAnchoring(bool *, bool *, bool *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnimationEnabled@ScrollViewer@DirectUI@@CA_NXZ
    static bool IsAnimationEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsElementValidAnchor@ScrollViewer@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@PEA_N@Z
    long IsElementValidAnchor(::Windows::UI::Xaml::IUIElement *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsElementValidAnchor@ScrollViewer@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@0PEA_N@Z
    long IsElementValidAnchor(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IUIElement *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExtentXChangeExpected@ScrollViewer@DirectUI@@AEAAJAEAE@Z
    long IsExtentXChangeExpected(unsigned char &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExtentYChangeExpected@ScrollViewer@DirectUI@@AEAAJAEAE@Z
    long IsExtentYChangeExpected(unsigned char &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPanelACarouselPanel@ScrollViewer@DirectUI@@AEAAJEAEAE@Z
    long IsPanelACarouselPanel(unsigned char, unsigned char &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsScrollContentPresenterScrollClient@ScrollViewer@DirectUI@@AEAAJAEAE@Z
    long IsScrollContentPresenterScrollClient(unsigned char &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidFloatValue@ScrollViewer@DirectUI@@AEAAJPEAUIInspectable@@AEAMPEAE@Z
    long IsValidFloatValue(IInspectable *, float &, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveIntermediateViewChangedMode@ScrollViewer@DirectUI@@AEAAJE@Z
    long LeaveIntermediateViewChangedMode(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeVisible@ScrollViewer@DirectUI@@AEAAJPEAVUIElement@2@URect@Foundation@Windows@@EEENNNN@Z
    long MakeVisible(::DirectUI::UIElement *, WindissectOpaque, unsigned char, unsigned char, unsigned char, double, double, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoIndicatorStateStoryboardCompleted@ScrollViewer@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long NoIndicatorStateStoryboardCompleted(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyHeadersParented@ScrollViewer@DirectUI@@AEAAJXZ
    long NotifyHeadersParented();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyManipulatableElementChanged@ScrollViewer@DirectUI@@AEAAJXZ
    long NotifyManipulatableElementChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOffsetChanging@ScrollViewer@DirectUI@@AEAAJNN@Z
    long NotifyOffsetChanging(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyZoomFactorChanging@ScrollViewer@DirectUI@@AEAAJM@Z
    long NotifyZoomFactorChanging(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBringIntoViewRequested@ScrollViewer@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUIBringIntoViewRequestedEventArgs@456@@Z
    long OnBringIntoViewRequested(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IBringIntoViewRequestedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCanContentRenderOutsideBoundsChanged@ScrollViewer@DirectUI@@AEAAJPEAUIInspectable@@@Z
    long OnCanContentRenderOutsideBoundsChanged(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentAlignmentAffectingPropertyChanged@ScrollViewer@DirectUI@@AEAAJEE@Z
    long OnContentAlignmentAffectingPropertyChanged(unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHeaderPropertyChanged@ScrollViewer@DirectUI@@AEAAJEEPEAUIInspectable@@0@Z
    long OnHeaderPropertyChanged(unsigned char, unsigned char, IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHorizontalScrollBarScroll@ScrollViewer@DirectUI@@AEAAJPEAUIInspectable@@PEAUIScrollEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    long OnHorizontalScrollBarScroll(IInspectable *, ::Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHorizontalScrollbarPointerEntered@ScrollViewer@DirectUI@@AEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnHorizontalScrollbarPointerEntered(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHorizontalScrollbarPointerExited@ScrollViewer@DirectUI@@AEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnHorizontalScrollbarPointerExited(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@ScrollViewer@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnLoaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulatabilityAffectingPropertyChanged@ScrollViewer@DirectUI@@AEAAJPEAEEEEE@Z
    long OnManipulatabilityAffectingPropertyChanged(unsigned char *, unsigned char, unsigned char, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMaxZoomFactorPropertyChanged@ScrollViewer@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnMaxZoomFactorPropertyChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMinZoomFactorPropertyChanged@ScrollViewer@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnMinZoomFactorPropertyChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPrimaryContentAffectingPropertyChanged@ScrollViewer@DirectUI@@AEAAJEEEE@Z
    long OnPrimaryContentAffectingPropertyChanged(unsigned char, unsigned char, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPrimaryContentChanged@ScrollViewer@DirectUI@@AEAAJEEEEE@Z
    long OnPrimaryContentChanged(unsigned char, unsigned char, unsigned char, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPrimaryContentTransformChanged@ScrollViewer@DirectUI@@AEAAJEEE@Z
    long OnPrimaryContentTransformChanged(unsigned char, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReduceViewportForCoreInputViewOcclusionsChanged@ScrollViewer@DirectUI@@AEAAJXZ
    long OnReduceViewportForCoreInputViewOcclusionsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollBarThumbDragCompleted@ScrollViewer@DirectUI@@AEAAJPEAUIInspectable@@PEAUIDragCompletedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    long OnScrollBarThumbDragCompleted(IInspectable *, ::Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollBarThumbDragStarted@ScrollViewer@DirectUI@@AEAAJPEAUIInspectable@@PEAUIDragStartedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    long OnScrollBarThumbDragStarted(IInspectable *, ::Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollBarVisibilityChanged@ScrollViewer@DirectUI@@AEAAJXZ
    long OnScrollBarVisibilityChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSnapPointsAffectingPropertyChanged@ScrollViewer@DirectUI@@AEAAJW4DMMotionTypes@2@E@Z
    long OnSnapPointsAffectingPropertyChanged(int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloaded@ScrollViewer@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnUnloaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVerticalScrollBarScroll@ScrollViewer@DirectUI@@AEAAJPEAUIInspectable@@PEAUIScrollEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    long OnVerticalScrollBarScroll(IInspectable *, ::Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVerticalScrollbarPointerEntered@ScrollViewer@DirectUI@@AEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnVerticalScrollbarPointerEntered(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVerticalScrollbarPointerExited@ScrollViewer@DirectUI@@AEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnVerticalScrollbarPointerExited(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewportAffectingPropertyChanged@ScrollViewer@DirectUI@@AEAAJEEEEEEEPEAE@Z
    long OnViewportAffectingPropertyChanged(unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewportConfigurationsAffectingPropertyChanged@ScrollViewer@DirectUI@@AEAAJXZ
    long OnViewportConfigurationsAffectingPropertyChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZoomFactorBoundaryChanged@ScrollViewer@DirectUI@@AEAAJEMM@Z
    long OnZoomFactorBoundaryChanged(unsigned char, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZoomFactorChanged@ScrollViewer@DirectUI@@AEAAJMM@Z
    long OnZoomFactorChanged(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZoomFactorPropertyChanged@ScrollViewer@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnZoomFactorPropertyChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZoomSnapPointsCollectionChanged@ScrollViewer@DirectUI@@AEAAJPEAU?$IObservableVector@M@Collections@Foundation@Windows@@PEAUIVectorChangedEventArgs@456@@Z
    long OnZoomSnapPointsCollectionChanged(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformPositionAdjustment@ScrollViewer@DirectUI@@AEAAJ_NMAEBUXRECTF_WH@@@Z
    long PerformPositionAdjustment(bool, float, XRECTF_WH const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInputMessage@ScrollViewer@DirectUI@@AEAAJ_NAEAE@Z
    long ProcessInputMessage(bool, unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseAnchorRequested@ScrollViewer@DirectUI@@AEAAJXZ
    long RaiseAnchorRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseDirectManipulationCompleted@ScrollViewer@DirectUI@@AEAAJXZ
    long RaiseDirectManipulationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseDirectManipulationStarted@ScrollViewer@DirectUI@@AEAAJXZ
    long RaiseDirectManipulationStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseViewChanged@ScrollViewer@DirectUI@@AEAAJE@Z
    long RaiseViewChanged(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseViewChanging@ScrollViewer@DirectUI@@AEAAJNNM@Z
    long RaiseViewChanging(double, double, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReflowAroundCoreInputViewOcclusions@ScrollViewer@DirectUI@@AEAAJPEA_N@Z
    long ReflowAroundCoreInputViewOcclusions(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshScrollBarIsIgnoringUserInput@ScrollViewer@DirectUI@@AEAAJE@Z
    long RefreshScrollBarIsIgnoringUserInput(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshScrollSnapPointsInfo@ScrollViewer@DirectUI@@AEAAJXZ
    long RefreshScrollSnapPointsInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAnchorElement@ScrollViewer@DirectUI@@AEAAXXZ
    void ResetAnchorElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollByPixelDelta@ScrollViewer@DirectUI@@AEAAJENNEE@Z
    long ScrollByPixelDelta(unsigned char, double, double, unsigned char, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScrollContentPresenterHeaders@ScrollViewer@DirectUI@@AEAAJXZ
    long SetScrollContentPresenterHeaders();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldContinueRoutingKeyDownEvent@ScrollViewer@DirectUI@@AEAAJW4VirtualKey@System@Windows@@AEAE@Z
    long ShouldContinueRoutingKeyDownEvent(int, unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowIndicators@ScrollViewer@DirectUI@@AEAAJXZ
    long ShowIndicators();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SynchronizeScrollOffsets@ScrollViewer@DirectUI@@AEAAJXZ
    long SynchronizeScrollOffsets();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SynchronizeScrollOffsetsAfterThumbDeferring@ScrollViewer@DirectUI@@AEAAJXZ
    long SynchronizeScrollOffsetsAfterThumbDeferring();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookScrollSnapPointsInfoEvents@ScrollViewer@DirectUI@@AEAAJE@Z
    long UnhookScrollSnapPointsInfoEvents(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookTemplate@ScrollViewer@DirectUI@@AEAAJXZ
    long UnhookTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCanScroll@ScrollViewer@DirectUI@@AEAAJPEAUIScrollInfo@2@@Z
    long UpdateCanScroll(::DirectUI::IScrollInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHeaderAssociatedStatus@ScrollViewer@DirectUI@@AEAAJPEAVUIElement@2@EEE@Z
    long UpdateHeaderAssociatedStatus(::DirectUI::UIElement *, unsigned char, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZoomToFactorInternal@ScrollViewer@DirectUI@@AEAAJMEPEA_N@Z
    long ZoomToFactorInternal(float, unsigned char, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsAtMaxZoom@ScrollViewer@DirectUI@@AEAAJAEAE@Z
    long get_IsAtMaxZoom(unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsAtMinZoom@ScrollViewer@DirectUI@@AEAAJAEAE@Z
    long get_IsAtMinZoom(unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointedElement@ScrollViewer@DirectUI@@AEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long get_PointedElement(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ZoomedHorizontalOffsetWithPendingShifts@ScrollViewer@DirectUI@@AEAAJPEAM@Z
    long get_ZoomedHorizontalOffsetWithPendingShifts(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ZoomedVerticalOffsetWithPendingShifts@ScrollViewer@DirectUI@@AEAAJPEAM@Z
    long get_ZoomedVerticalOffsetWithPendingShifts(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PointedElement@ScrollViewer@DirectUI@@AEAAJPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long put_PointedElement(::Windows::UI::Xaml::IDependencyObject *);
};
} // namespace DirectUI

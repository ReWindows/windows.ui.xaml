#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 74 member(s).
namespace DirectUI {
class FlyoutBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateAvailableWindowRect@FlyoutBase@DirectUI@@SAJ_NPEAVPopup@2@PEAVFrameworkElement@2@0UPoint@Foundation@Windows@@0PEAURect@67@@Z
    static long CalculateAvailableWindowRect(bool, ::DirectUI::Popup *, ::DirectUI::FrameworkElement *, bool, WindissectOpaque, bool, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculatePlacement@FlyoutBase@DirectUI@@SAJPEAW4FlyoutPlacementMode@Primitives@Controls@Xaml@UI@Windows@@E_NAEBURect@Foundation@8@AEBUSize@Foundation@8@32PEAU9Foundation@8@@Z
    static long CalculatePlacement(int *, unsigned char, bool, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseOpenFlyout@FlyoutBase@DirectUI@@SAJPEAVCFlyoutBase@@@Z
    static long CloseOpenFlyout(CFlyoutBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePresenterImpl@FlyoutBase@DirectUI@@UEAAJPEAPEAUIControl@Controls@Xaml@UI@Windows@@@Z
    virtual long CreatePresenterImpl(::Windows::UI::Xaml::Controls::IControl * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAssociatedXamlRoot@FlyoutBase@DirectUI@@QEAAJPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long EnsureAssociatedXamlRoot(::Windows::UI::Xaml::IDependencyObject *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FlyoutBase@DirectUI@@QEAA@XZ
    FlyoutBase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlacementTargetNoRef@FlyoutBase@DirectUI@@SAJPEAVCFlyoutBase@@PEAPEAVCFrameworkElement@@@Z
    static long GetPlacementTargetNoRef(CFlyoutBase *, CFrameworkElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideFlyout@FlyoutBase@DirectUI@@SAJPEAVCFlyoutBase@@@Z
    static long HideFlyout(CFlyoutBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideImpl@FlyoutBase@DirectUI@@UEAAJXZ
    virtual long HideImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpen@FlyoutBase@DirectUI@@SAJPEAVCFlyoutBase@@AEA_N@Z
    static long IsOpen(CFlyoutBase *, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowedPopup@FlyoutBase@DirectUI@@QEAA_NXZ
    bool IsWindowedPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInputPaneStateChange@FlyoutBase@DirectUI@@QEAAJW4InputPaneState@2@UXRECTF_WH@@@Z
    long NotifyInputPaneStateChange(int, XRECTF_WH);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClosingStatic@FlyoutBase@DirectUI@@SAJPEAVCFlyoutBase@@PEA_N@Z
    static long OnClosingStatic(CFlyoutBase *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProcessKeyboardAcceleratorsImpl@FlyoutBase@DirectUI@@UEAAJPEAUIProcessKeyboardAcceleratorEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnProcessKeyboardAcceleratorsImpl(::Windows::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlaceFlyoutForDateTimePickerImpl@FlyoutBase@DirectUI@@QEAAJUPoint@Foundation@Windows@@@Z
    long PlaceFlyoutForDateTimePickerImpl(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromPopupParentCollection@FlyoutBase@DirectUI@@SAJAEBV?$TrackerPtr@UIPopup@Primitives@Controls@Xaml@UI@Windows@@$00$0A@@2@PEAUIPanel@Controls@Xaml@UI@Windows@@@Z
    static long RemoveFromPopupParentCollection(WindissectOpaque const &, ::Windows::UI::Xaml::Controls::IPanel *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsWindowedPopup@FlyoutBase@DirectUI@@QEAAJXZ
    long SetIsWindowedPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAtImpl@FlyoutBase@DirectUI@@QEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIFlyoutShowOptions@Primitives@Controls@456@@Z
    long ShowAtImpl(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptions *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAtImpl@FlyoutBase@DirectUI@@QEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@@Z
    long ShowAtImpl(::Windows::UI::Xaml::IFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAtStatic@FlyoutBase@DirectUI@@SAJPEAVCFlyoutBase@@PEAVCFrameworkElement@@@Z
    static long ShowAtStatic(CFlyoutBase *, CFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAtStatic@FlyoutBase@DirectUI@@SAJPEAVCFlyoutBase@@PEAVCFrameworkElement@@UPoint@Foundation@Windows@@URect@67@W4FlyoutShowMode@Primitives@Controls@Xaml@UI@7@@Z
    static long ShowAtStatic(CFlyoutBase *, CFrameworkElement *, WindissectOpaque, WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsOpenImpl@FlyoutBase@DirectUI@@QEAAJPEAE@Z
    long get_IsOpenImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_XamlRootImpl@FlyoutBase@DirectUI@@QEAAJPEAUIXamlRoot@Xaml@UI@Windows@@@Z
    long put_XamlRootImpl(::Windows::UI::Xaml::IXamlRoot *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FlyoutBase@DirectUI@@UEAA@XZ
    virtual ~FlyoutBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoAdjustPlacement@FlyoutBase@DirectUI@@MEAAJPEAW4MajorPlacementMode@CFlyoutBase@@@Z
    virtual long AutoAdjustPlacement(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePopupAndPresenter@FlyoutBase@DirectUI@@IEAAJXZ
    long EnsurePopupAndPresenter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardPopupFlowDirection@FlyoutBase@DirectUI@@IEAAJXZ
    long ForwardPopupFlowDirection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPlacementSupported@FlyoutBase@DirectUI@@MEAAEW4FlyoutPlacementMode@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual unsigned char IsPlacementSupported(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClosed@FlyoutBase@DirectUI@@MEAAJXZ
    virtual long OnClosed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClosing@FlyoutBase@DirectUI@@MEAAJPEA_N@Z
    virtual long OnClosing(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOpening@FlyoutBase@DirectUI@@MEAAJXZ
    virtual long OnOpening();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@FlyoutBase@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreparePopupTheme@FlyoutBase@DirectUI@@MEAAJPEAVPopup@2@W4MajorPlacementMode@CFlyoutBase@@PEAUIFrameworkElement@Xaml@UI@Windows@@@Z
    virtual long PreparePopupTheme(::DirectUI::Popup *, int, ::Windows::UI::Xaml::IFrameworkElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPresenterStyle@FlyoutBase@DirectUI@@KAJPEAUIControl@Controls@Xaml@UI@Windows@@PEAUIStyle@567@@Z
    static long SetPresenterStyle(::Windows::UI::Xaml::Controls::IControl *, ::Windows::UI::Xaml::IStyle *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAtCore@FlyoutBase@DirectUI@@MEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@AEA_N@Z
    virtual long ShowAtCore(::Windows::UI::Xaml::IFrameworkElement *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePresenterVisualState@FlyoutBase@DirectUI@@MEAAJW4MajorPlacementMode@CFlyoutBase@@@Z
    virtual long UpdatePresenterVisualState(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCoreWindowPointerMovedHandler@FlyoutBase@DirectUI@@AEAAJXZ
    long AddCoreWindowPointerMovedHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTargetPosition@FlyoutBase@DirectUI@@AEAAJXZ
    long ApplyTargetPosition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachEventHandlersForOpenFlyout@FlyoutBase@DirectUI@@AEAAJXZ
    long AttachEventHandlersForOpenFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachToPopupParent@FlyoutBase@DirectUI@@AEAAJXZ
    long AttachToPopupParent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculatePlacementPrivate@FlyoutBase@DirectUI@@CAJPEAW4MajorPlacementMode@CFlyoutBase@@W4PreferredJustification@12@E_NAEBURect@Foundation@Windows@@AEBUSize@78@4432PEAU678@@Z
    static long CalculatePlacementPrivate(int *, int, unsigned char, bool, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, bool, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculatePlacementTargetBoundsPrivate@FlyoutBase@DirectUI@@CAJPEAW4MajorPlacementMode@CFlyoutBase@@PEAUIFrameworkElement@Xaml@UI@Windows@@PEAURect@Foundation@8@PEAEN@Z
    static long CalculatePlacementTargetBoundsPrivate(int *, ::Windows::UI::Xaml::IFrameworkElement *, WindissectOpaque *, unsigned char *, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAndHandleOpenFlyout@FlyoutBase@DirectUI@@AEAAJPEA_N@Z
    long CheckAndHandleOpenFlyout(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigurePopupOverlay@FlyoutBase@DirectUI@@AEAAJXZ
    long ConfigurePopupOverlay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachEventHandlersForOpenFlyout@FlyoutBase@DirectUI@@AEAAJXZ
    long DetachEventHandlersForOpenFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindParentFlyoutFromElement@FlyoutBase@DirectUI@@CAJPEAUIFrameworkElement@Xaml@UI@Windows@@PEAPEAV12@@Z
    static long FindParentFlyoutFromElement(::Windows::UI::Xaml::IFrameworkElement *, FlyoutBase * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardTargetPropertiesToPresenter@FlyoutBase@DirectUI@@AEAAJXZ
    long ForwardTargetPropertiesToPresenter();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectivePlacement@FlyoutBase@DirectUI@@AEAAJPEAW4FlyoutPlacementMode@Primitives@Controls@Xaml@UI@Windows@@@Z
    long GetEffectivePlacement(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlyoutMetadata@FlyoutBase@DirectUI@@AEAAJPEAPEAVFlyoutMetadata@2@@Z
    long GetFlyoutMetadata(::DirectUI::FlyoutMetadata * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresenterSize@FlyoutBase@DirectUI@@AEAAJPEAUSize@Foundation@Windows@@@Z
    long GetPresenterSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowPointerMoved@FlyoutBase@DirectUI@@AEAAJPEAUIPointerEventArgs@Core@UI@Windows@@@Z
    long OnCoreWindowPointerMoved(::Windows::UI::Core::IPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFlyoutOccludedContentAreaChanged@FlyoutBase@DirectUI@@AEAAJURect@Foundation@Windows@@@Z
    long OnFlyoutOccludedContentAreaChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPopupLostFocus@FlyoutBase@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnPopupLostFocus(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresenterLoaded@FlyoutBase@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnPresenterLoaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresenterLostFocus@FlyoutBase@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnPresenterLostFocus(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresenterSizeChanged@FlyoutBase@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnPresenterSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresenterUnloaded@FlyoutBase@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnPresenterUnloaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@FlyoutBase@DirectUI@@AEAAJXZ
    long Open();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformPlacement@FlyoutBase@DirectUI@@AEAAJUSize@Foundation@Windows@@N_N@Z
    long PerformPlacement(WindissectOpaque, double, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreparePresenter@FlyoutBase@DirectUI@@AEAAJPEAUIControl@Controls@Xaml@UI@Windows@@@Z
    long PreparePresenter(::Windows::UI::Xaml::Controls::IControl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseClosedEvent@FlyoutBase@DirectUI@@AEAAJXZ
    long RaiseClosedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseOpenedEvent@FlyoutBase@DirectUI@@AEAAJXZ
    long RaiseOpenedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseOpeningEvent@FlyoutBase@DirectUI@@AEAAJXZ
    long RaiseOpeningEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaisePopupOpeningEvent@FlyoutBase@DirectUI@@AEAAJXZ
    long RaisePopupOpeningEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaisePopupPlacementEvent@FlyoutBase@DirectUI@@AEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@@Z
    long RaisePopupPlacementEvent(::Windows::UI::Xaml::IFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCoreWindowPointerMovedHandler@FlyoutBase@DirectUI@@AEAAJXZ
    long RemoveCoreWindowPointerMovedHandler();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPlacementTarget@FlyoutBase@DirectUI@@AEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@@Z
    long SetPlacementTarget(::Windows::UI::Xaml::IFrameworkElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPopupLightDismissBehavior@FlyoutBase@DirectUI@@AEAAJXZ
    long SetPopupLightDismissBehavior();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransitionParameters@FlyoutBase@DirectUI@@AEAAJPEAUITransition@Animation@Media@Xaml@UI@Windows@@W4MajorPlacementMode@CFlyoutBase@@@Z
    long SetTransitionParameters(::Windows::UI::Xaml::Media::Animation::ITransition *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRespectSpanningRects@FlyoutBase@DirectUI@@CA_NPEAVPopup@2@@Z
    static bool ShouldRespectSpanningRects(::DirectUI::Popup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePresenterOrientationVisualState@FlyoutBase@DirectUI@@AEAAJXZ
    long UpdatePresenterOrientationVisualState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateToShowMode@FlyoutBase@DirectUI@@AEAAJW4FlyoutShowMode@Primitives@Controls@Xaml@UI@Windows@@@Z
    long UpdateStateToShowMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTargetPosition@FlyoutBase@DirectUI@@AEAAJURect@Foundation@Windows@@USize@45@PEAU345@@Z
    long UpdateTargetPosition(WindissectOpaque, WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateAndSetParameters@FlyoutBase@DirectUI@@AEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@PEA_N@Z
    long ValidateAndSetParameters(::Windows::UI::Xaml::IFrameworkElement *, bool *);
};
} // namespace DirectUI

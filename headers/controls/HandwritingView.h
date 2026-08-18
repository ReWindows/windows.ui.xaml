#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 23 member(s).
namespace DirectUI {
class HandwritingView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplateHandler@HandwritingView@DirectUI@@SAJPEAVCDependencyObject@@@Z
    static long OnApplyTemplateHandler(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCandidatesBarScrollViewerCreated@HandwritingView@DirectUI@@SAJPEAVCHandwritingView@@PEAVCScrollViewer@@@Z
    static long OnCandidatesBarScrollViewerCreated(CHandwritingView *, CScrollViewer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDoubleTapped@HandwritingView@DirectUI@@UEAAJPEAUIDoubleTappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnDoubleTapped(::Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFunctionButtonPressedHandler@HandwritingView@DirectUI@@SAJQEAVCDependencyObject@@W4HandwritingViewFunctionButtonType@2@@Z
    static long OnFunctionButtonPressedHandler(CDependencyObject * const, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHolding@HandwritingView@DirectUI@@UEAAJPEAUIHoldingRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnHolding(::Windows::UI::Xaml::Input::IHoldingRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationCompleted@HandwritingView@DirectUI@@UEAAJPEAUIManipulationCompletedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnManipulationCompleted(::Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationStarted@HandwritingView@DirectUI@@UEAAJPEAUIManipulationStartedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnManipulationStarted(::Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCanceled@HandwritingView@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerCanceled(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@HandwritingView@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerCaptureLost(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@HandwritingView@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerEntered(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@HandwritingView@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerExited(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@HandwritingView@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerMoved(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@HandwritingView@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerPressed(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@HandwritingView@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerReleased(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightTapped@HandwritingView@DirectUI@@UEAAJPEAUIRightTappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnRightTapped(::Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTapped@HandwritingView@DirectUI@@UEAAJPEAUITappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnTapped(::Windows::UI::Xaml::Input::ITappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseNative@HandwritingView@DirectUI@@SAJPEAVControlGenerated@2@PEAUIInspectable@@W4KnownEventIndex@@@Z
    static long RaiseNative(::DirectUI::ControlGenerated *, IInspectable *, int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@HandwritingView@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HandwritingView@DirectUI@@MEAA@XZ
    virtual ~HandwritingView();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPeerAsHandwritingView@HandwritingView@DirectUI@@CAJQEAVCDependencyObject@@PEAPEAUIHandwritingView@Controls@Xaml@UI@Windows@@PEAPEAV12@@Z
    static long GetPeerAsHandwritingView(CDependencyObject * const, ::Windows::UI::Xaml::Controls::IHandwritingView * *, HandwritingView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ListenToScrollViewerEvents@HandwritingView@DirectUI@@AEAAJPEAVScrollViewer@2@@Z
    long ListenToScrollViewerEvents(::DirectUI::ScrollViewer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseNative@HandwritingView@DirectUI@@AEAAJPEAUIInspectable@@W4KnownEventIndex@@@Z
    long RaiseNative(IInspectable *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateEvent@HandwritingView@DirectUI@@AEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@PEA_N@Z
    long ValidateEvent(::Windows::UI::Xaml::IRoutedEventArgs *, bool *);
};
} // namespace DirectUI

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 44 member(s).
namespace DirectUI {
class ScrollBar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustDragValue@ScrollBar@DirectUI@@QEAAJN@Z
    long AdjustDragValue(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BlockIndicatorFromShowing@ScrollBar@DirectUI@@QEAAJXZ
    long BlockIndicatorFromShowing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMaximumChanged@ScrollBar@DirectUI@@UEAAJNN@Z
    virtual long OnMaximumChanged(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMinimumChanged@ScrollBar@DirectUI@@UEAAJNN@Z
    virtual long OnMinimumChanged(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnValueChanged@ScrollBar@DirectUI@@UEAAJNN@Z
    virtual long OnValueChanged(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDragging@ScrollBar@DirectUI@@QEAAJPEAE@Z
    long get_IsDragging(unsigned char *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@ScrollBar@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRepeatButtonsLength@ScrollBar@DirectUI@@IEAAJPEAN@Z
    long GetRepeatButtonsLength(double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrackLength@ScrollBar@DirectUI@@IEAAJPEAN@Z
    long GetTrackLength(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ScrollBar@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@ScrollBar@DirectUI@@MEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@ScrollBar@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDoubleTapped@ScrollBar@DirectUI@@MEAAJPEAUIDoubleTappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnDoubleTapped(::Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@ScrollBar@DirectUI@@MEAAJPEAVIsEnabledChangedEventArgs@2@@Z
    virtual long OnIsEnabledChanged(::DirectUI::IsEnabledChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@ScrollBar@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerCaptureLost(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@ScrollBar@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerEntered(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@ScrollBar@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerExited(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@ScrollBar@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerPressed(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@ScrollBar@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerReleased(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@ScrollBar@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTapped@ScrollBar@DirectUI@@MEAAJPEAUITappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnTapped(::Windows::UI::Xaml::Input::ITappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@ScrollBar@DirectUI@@MEAAJXZ
    virtual long OnVisibilityChanged();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollBar@DirectUI@@IEAA@XZ
    ScrollBar();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScrollBar@DirectUI@@MEAA@XZ
    virtual ~ScrollBar();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertViewportSizeToDisplayUnits@ScrollBar@DirectUI@@AEAAJNPEAN@Z
    long ConvertViewportSizeToDisplayUnits(double, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LargeDecrement@ScrollBar@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long LargeDecrement(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LargeIncrement@ScrollBar@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long LargeIncrement(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOrientationChanged@ScrollBar@DirectUI@@AEAAJXZ
    long OnOrientationChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@ScrollBar@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThumbDragCompleted@ScrollBar@DirectUI@@AEAAJPEAUIInspectable@@PEAUIDragCompletedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    long OnThumbDragCompleted(IInspectable *, ::Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThumbDragDelta@ScrollBar@DirectUI@@AEAAJPEAUIInspectable@@PEAUIDragDeltaEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    long OnThumbDragDelta(IInspectable *, ::Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThumbDragStarted@ScrollBar@DirectUI@@AEAAJPEAUIInspectable@@PEAUIDragStartedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    long OnThumbDragStarted(IInspectable *, ::Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseScrollEvent@ScrollBar@DirectUI@@AEAAJW4ScrollEventType@Primitives@Controls@Xaml@UI@Windows@@@Z
    long RaiseScrollEvent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshTrackLayout@ScrollBar@DirectUI@@AEAAJXZ
    long RefreshTrackLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RoundWithLayoutRound@ScrollBar@DirectUI@@AEAA_NPEAN@Z
    bool RoundWithLayoutRound(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SmallDecrement@ScrollBar@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long SmallDecrement(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SmallIncrement@ScrollBar@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long SmallIncrement(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StoreLayoutCycleWarningContext@ScrollBar@DirectUI@@AEAAXNNNNNNNNN@Z
    void StoreLayoutCycleWarningContext(double, double, double, double, double, double, double, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIndicatorLengths@ScrollBar@DirectUI@@AEAAJNPEAN0@Z
    long UpdateIndicatorLengths(double, double *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScrollBarVisibility@ScrollBar@DirectUI@@AEAAJXZ
    long UpdateScrollBarVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTrackLayout@ScrollBar@DirectUI@@AEAAJXZ
    long UpdateTrackLayout();
};
} // namespace DirectUI

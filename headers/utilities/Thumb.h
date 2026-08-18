#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 25 member(s).
namespace DirectUI {
class Thumb {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelDragImpl@Thumb@DirectUI@@QEAAJXZ
    long CancelDragImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@Thumb@DirectUI@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Thumb@DirectUI@@QEAA@XZ
    Thumb();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Thumb@DirectUI@@UEAA@XZ
    virtual ~Thumb();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@Thumb@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@Thumb@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnGotFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@Thumb@DirectUI@@MEAAJPEAVIsEnabledChangedEventArgs@2@@Z
    virtual long OnIsEnabledChanged(::DirectUI::IsEnabledChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@Thumb@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnLostFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCanceled@Thumb@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerCanceled(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@Thumb@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerCaptureLost(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@Thumb@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerEntered(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@Thumb@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerExited(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@Thumb@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerMoved(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@Thumb@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerPressed(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@Thumb@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerReleased(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@Thumb@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@Thumb@DirectUI@@MEAAJXZ
    virtual long OnVisibilityChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualState@Thumb@DirectUI@@IEAAJ_N@Z
    long UpdateVisualState(bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheAndReplacePrePenDragManipulationMode@Thumb@DirectUI@@AEAAJW4PointerDeviceType@Input@Devices@Windows@@@Z
    long CacheAndReplacePrePenDragManipulationMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusChanged@Thumb@DirectUI@@AEAAJE@Z
    long FocusChanged(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseDragCompleted@Thumb@DirectUI@@AEAAJE@Z
    long RaiseDragCompleted(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseDragDelta@Thumb@DirectUI@@AEAAJNN@Z
    long RaiseDragDelta(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseDragStarted@Thumb@DirectUI@@AEAAJXZ
    long RaiseDragStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestorePrePenDragManipulationMode@Thumb@DirectUI@@AEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long RestorePrePenDragManipulationMode(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldIgnoreInput@Thumb@DirectUI@@AEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@PEAE@Z
    long ShouldIgnoreInput(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *, unsigned char *);
};
} // namespace DirectUI

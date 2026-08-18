#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
namespace DirectUI {
class ComboBoxItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@ComboBoxItem@DirectUI@@UEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearSelectedVisualState@ComboBoxItem@DirectUI@@QEAAJXZ
    long ClearSelectedVisualState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearVisualStateFlagsOnExit@ComboBoxItem@DirectUI@@QEAAJXZ
    long ClearVisualStateFlagsOnExit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@ComboBoxItem@DirectUI@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightTappedUnhandled@ComboBoxItem@DirectUI@@UEAAJPEAUIRightTappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnRightTappedUnhandled(::Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverrideSelectedVisualState@ComboBoxItem@DirectUI@@QEAAJ_N@Z
    long OverrideSelectedVisualState(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ComboBoxItem@DirectUI@@UEAA@XZ
    virtual ~ComboBoxItem();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ComboBoxItem@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@ComboBoxItem@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@ComboBoxItem@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnGotFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@ComboBoxItem@DirectUI@@MEAAJPEAVIsEnabledChangedEventArgs@2@@Z
    virtual long OnIsEnabledChanged(::DirectUI::IsEnabledChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@ComboBoxItem@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnLostFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@ComboBoxItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerCaptureLost(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@ComboBoxItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerEntered(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@ComboBoxItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerExited(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@ComboBoxItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerPressed(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@ComboBoxItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerReleased(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@ComboBoxItem@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@ComboBoxItem@DirectUI@@MEAAJXZ
    virtual long OnVisibilityChanged();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusChanged@ComboBoxItem@DirectUI@@AEAAJEE@Z
    long FocusChanged(unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@ComboBoxItem@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnLoaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformPointerUpAction@ComboBoxItem@DirectUI@@AEAAJXZ
    long PerformPointerUpAction();
};
} // namespace DirectUI

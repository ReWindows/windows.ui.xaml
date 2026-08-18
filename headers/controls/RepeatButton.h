#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
namespace DirectUI {
class RepeatButton {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@RepeatButton@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@RepeatButton@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClick@RepeatButton@DirectUI@@MEAAJXZ
    virtual long OnClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@RepeatButton@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@RepeatButton@DirectUI@@MEAAJPEAVIsEnabledChangedEventArgs@2@@Z
    virtual long OnIsEnabledChanged(::DirectUI::IsEnabledChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@RepeatButton@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@RepeatButton@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyUp(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@RepeatButton@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnLostFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@RepeatButton@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerEntered(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@RepeatButton@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerExited(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@RepeatButton@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerMoved(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@RepeatButton@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerPressed(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@RepeatButton@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerReleased(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@RepeatButton@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RepeatButton@DirectUI@@MEAA@XZ
    virtual ~RepeatButton();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldIgnoreInput@RepeatButton@DirectUI@@AEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@PEAE@Z
    long ShouldIgnoreInput(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartTimer@RepeatButton@DirectUI@@AEAAJXZ
    long StartTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopTimer@RepeatButton@DirectUI@@AEAAJXZ
    long StopTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TickCallback@RepeatButton@DirectUI@@AEAAJXZ
    long TickCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRepeatState@RepeatButton@DirectUI@@AEAAJXZ
    long UpdateRepeatState();
};
} // namespace DirectUI

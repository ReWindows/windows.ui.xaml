#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class CalendarViewItem {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDate@CalendarViewItem@DirectUI@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long GetDate(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@CalendarViewItem@DirectUI@@UEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTapped@CalendarViewItem@DirectUI@@UEAAJPEAUITappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnTapped(::Windows::UI::Xaml::Input::ITappedRoutedEventArgs *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@CalendarViewItem@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
};
} // namespace DirectUI

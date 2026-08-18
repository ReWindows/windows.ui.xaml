#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class CalendarViewDayItem {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBuildTreeArgs@CalendarViewDayItem@DirectUI@@QEAAJPEAV?$ComPtr@UICalendarViewDayItemChangingEventArgs@Controls@Xaml@UI@Windows@@@ctl@@@Z
    long GetBuildTreeArgs(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDate@CalendarViewDayItem@DirectUI@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long GetDate(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@CalendarViewDayItem@DirectUI@@UEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@CalendarViewDayItem@DirectUI@@UEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTapped@CalendarViewDayItem@DirectUI@@UEAAJPEAUITappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnTapped(::Windows::UI::Xaml::Input::ITappedRoutedEventArgs *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDensityColorsImpl@CalendarViewDayItem@DirectUI@@UEAAJPEAU?$IIterable@UColor@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long SetDensityColorsImpl(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CalendarViewDayItem@DirectUI@@UEAA@XZ
    virtual ~CalendarViewDayItem();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@CalendarViewDayItem@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStaticRoundedItemMargin@CalendarViewDayItem@DirectUI@@EEBA?AUThickness@Xaml@UI@Windows@@XZ
    virtual ::Windows::UI::Xaml::Thickness GetStaticRoundedItemMargin() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasStaticRoundedItemMargin@CalendarViewDayItem@DirectUI@@EEBA_NXZ
    virtual bool HasStaticRoundedItemMargin() const;
};
} // namespace DirectUI

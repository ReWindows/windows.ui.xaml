#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class DateComparer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCalendarForComparison@DateComparer@DirectUI@@QEAAJPEAUICalendar@Globalization@Windows@@@Z
    long SetCalendarForComparison(::Windows::Globalization::ICalendar *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareDate@DateComparer@DirectUI@@AEAAJUDateTime@Foundation@Windows@@0_JP8ICalendar@Globalization@5@EAAJPEAH@Z2@Z
    long CompareDate(WindissectOpaque, WindissectOpaque, int64_t, long ( ::Windows::Globalization::ICalendar::*)(int *), int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareDay@DateComparer@DirectUI@@AEAAHUDateTime@Foundation@Windows@@0@Z
    int CompareDay(WindissectOpaque, WindissectOpaque);
};
} // namespace DirectUI

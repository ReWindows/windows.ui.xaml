#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class CalendarLayoutStrategy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimatePanelExtentImpl@CalendarLayoutStrategy@DirectUI@@QEAAJUEstimationReference@Controls@Xaml@UI@Windows@@0URect@Foundation@7@PEAUSize@97@@Z
    long EstimatePanelExtentImpl(::Windows::UI::Xaml::Controls::EstimationReference, ::Windows::UI::Xaml::Controls::EstimationReference, WindissectOpaque, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegularSnapPointsImpl@CalendarLayoutStrategy@DirectUI@@QEAAJPEAM00PEAE@Z
    long GetRegularSnapPointsImpl(float *, float *, float *, unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CalendarLayoutStrategy@DirectUI@@UEAA@XZ
    virtual ~CalendarLayoutStrategy();
};
} // namespace DirectUI

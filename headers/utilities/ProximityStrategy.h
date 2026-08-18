#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 1 member(s).
namespace Focus::XYFocusPrivate {
class ProximityStrategy {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScore@ProximityStrategy@XYFocusPrivate@Focus@@SANW4FocusNavigationDirection@DirectUI@@AEBUXRECTF_RB@@1N_N@Z
    static double GetScore(int, XRECTF_RB const &, XRECTF_RB const &, double, bool);
};
} // namespace Focus::XYFocusPrivate

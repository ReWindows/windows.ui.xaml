#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace FocusRect {
class RevealMotion {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateFrom@RevealMotion@FocusRect@@YA?AW4FocusNavigationDirection@DirectUI@@AEBUXRECTF_WH@@@Z
    int CalculateFrom(XRECTF_WH const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDistanceX@RevealMotion@FocusRect@@YAMAEBVRevealFocusSource@2@@Z
    float GetDistanceX(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDistanceY@RevealMotion@FocusRect@@YAMAEBVRevealFocusSource@2@@Z
    float GetDistanceY(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStartX@RevealMotion@FocusRect@@YAMW4FocusNavigationDirection@DirectUI@@AEBVRevealFocusSource@2@@Z
    float GetStartX(int, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStartY@RevealMotion@FocusRect@@YAMW4FocusNavigationDirection@DirectUI@@AEBVRevealFocusSource@2@@Z
    float GetStartY(int, WindissectOpaque const &);
};
} // namespace FocusRect

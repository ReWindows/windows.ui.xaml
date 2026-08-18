#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class BoundsHelper {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalBoundsForKeyTips@BoundsHelper@@YA?AUXRECTF_RB@@QEAVCDependencyObject@@@Z
    XRECTF_RB GetGlobalBoundsForKeyTips(CDependencyObject * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyTipTargetNoRef@BoundsHelper@@YAPEAVCDependencyObject@@QEAV2@@Z
    CDependencyObject * GetKeyTipTargetNoRef(CDependencyObject * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleContentBounds@BoundsHelper@@YAJQEAVCDependencyObject@@AEAUXRECTF_RB@@@Z
    long GetVisibleContentBounds(CDependencyObject * const, XRECTF_RB &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OffsetBounds@BoundsHelper@@YA?AUXRECTF_RB@@AEBU2@0@Z
    XRECTF_RB OffsetBounds(XRECTF_RB const &, XRECTF_RB const &);
};

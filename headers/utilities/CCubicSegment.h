#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class CCubicSegment {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstTangent@CCubicSegment@@UEBAJAEAUXPOINTF@@@Z
    virtual long GetFirstTangent(XPOINTF &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Widen@CCubicSegment@@UEAAJAEAUXPOINTF@@0@Z
    virtual long Widen(XPOINTF &, XPOINTF &);
};

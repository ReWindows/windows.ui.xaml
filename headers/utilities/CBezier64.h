#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
class CBezier64 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?cFlatten@CBezier64@@QEAAHPEAUXPOINT@@HPEAH@Z
    int cFlatten(XPOINT *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?vInit@CBezier64@@QEAAXPEBUXPOINT@@PEBUXRECT_RB@@_J@Z
    void vInit(XPOINT const *, XRECT_RB const *, int64_t);
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
class CRail {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BezierToPoint@CRail@@QEAAJAEBUXPOINTF@@00@Z
    long BezierToPoint(XPOINTF const &, XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineToPoint@CRail@@QEAAJAEBUXPOINTF@@@Z
    long LineToPoint(XPOINTF const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentPoint@CRail@@QEAAJAEBUXPOINTF@@@Z
    long SetCurrentPoint(XPOINTF const &);
};

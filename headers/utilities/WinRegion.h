#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class WinRegion {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@WinRegion@@UEAAJPEBUXRECT_WH@@@Z
    virtual long Add(XRECT_WH const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@WinRegion@@UEAAJPEBUXRECT_WH@@PEAI@Z
    virtual long Contains(XRECT_WH const *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInverseRects@WinRegion@@UEAAJPEAV?$xvector@UXRECT_WH@@@@PEBUXRECT_RB@@@Z
    virtual long GetInverseRects(WindissectOpaque *, XRECT_RB const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRects@WinRegion@@UEAAJPEAPEAUXRECT_WH@@PEAI@Z
    virtual long GetRects(XRECT_WH * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Intersect@WinRegion@@UEAAJPEBUXRECT_WH@@@Z
    virtual long Intersect(XRECT_WH const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSubsetOf@WinRegion@@UEAAJPEAUIPALRegion@@PEAI@Z
    virtual long IsSubsetOf(IPALRegion *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@WinRegion@@UEAAJPEBUXRECT_WH@@@Z
    virtual long Remove(XRECT_WH const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WinRegion@@UEAA@XZ
    virtual ~WinRegion();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Combine@WinRegion@@AEAAJPEBUXRECT_WH@@H@Z
    long Combine(XRECT_WH const *, int);
};

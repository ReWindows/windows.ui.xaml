#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class CStrokeBoundsSink {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BezierCap@CStrokeBoundsSink@@UEAAJAEBUXPOINTF@@000000@Z
    virtual long BezierCap(XPOINTF const &, XPOINTF const &, XPOINTF const &, XPOINTF const &, XPOINTF const &, XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CapTriangle@CStrokeBoundsSink@@UEAAJAEBUXPOINTF@@00@Z
    virtual long CapTriangle(XPOINTF const &, XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurveWedge@CStrokeBoundsSink@@UEAAJW4_RAIL_SIDE@@AEBUXPOINTF@@11@Z
    virtual long CurveWedge(int, XPOINTF const &, XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoInnerCorner@CStrokeBoundsSink@@UEAAJW4_RAIL_SIDE@@AEBUXPOINTF@@PEBU3@@Z
    virtual long DoInnerCorner(int, XPOINTF const &, XPOINTF const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PolylineWedge@CStrokeBoundsSink@@UEAAJW4_RAIL_SIDE@@IPEBUXPOINTF@@@Z
    virtual long PolylineWedge(int, unsigned int, XPOINTF const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QuadTo@CStrokeBoundsSink@@UEAAJPEBUXPOINTF@@AEBU2@11@Z
    virtual long QuadTo(XPOINTF const *, XPOINTF const &, XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QuadTo@CStrokeBoundsSink@@UEAAJPEBUXPOINTF@@@Z
    virtual long QuadTo(XPOINTF const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentPoints@CStrokeBoundsSink@@UEAAJPEBUXPOINTF@@@Z
    virtual long SetCurrentPoints(XPOINTF const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartWith@CStrokeBoundsSink@@UEAAJPEBUXPOINTF@@@Z
    virtual long StartWith(XPOINTF const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchSides@CStrokeBoundsSink@@UEAAJXZ
    virtual long SwitchSides();
};

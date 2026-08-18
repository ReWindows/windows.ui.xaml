#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
class CStrokeHitTestSink {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Aborted@CStrokeHitTestSink@@UEAAHXZ
    virtual int Aborted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BezierCap@CStrokeHitTestSink@@UEAAJAEBUXPOINTF@@000000@Z
    virtual long BezierCap(XPOINTF const &, XPOINTF const &, XPOINTF const &, XPOINTF const &, XPOINTF const &, XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CapTriangle@CStrokeHitTestSink@@UEAAJAEBUXPOINTF@@00@Z
    virtual long CapTriangle(XPOINTF const &, XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurveWedge@CStrokeHitTestSink@@UEAAJW4_RAIL_SIDE@@AEBUXPOINTF@@11@Z
    virtual long CurveWedge(int, XPOINTF const &, XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoInnerCorner@CStrokeHitTestSink@@UEAAJW4_RAIL_SIDE@@AEBUXPOINTF@@PEBU3@@Z
    virtual long DoInnerCorner(int, XPOINTF const &, XPOINTF const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PolylineWedge@CStrokeHitTestSink@@UEAAJW4_RAIL_SIDE@@IPEBUXPOINTF@@@Z
    virtual long PolylineWedge(int, unsigned int, XPOINTF const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QuadTo@CStrokeHitTestSink@@UEAAJPEBUXPOINTF@@@Z
    virtual long QuadTo(XPOINTF const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QuadTo@CStrokeHitTestSink@@UEAAJPEBUXPOINTF@@AEBU2@11@Z
    virtual long QuadTo(XPOINTF const *, XPOINTF const &, XPOINTF const &, XPOINTF const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentPoints@CStrokeHitTestSink@@UEAAJPEBUXPOINTF@@@Z
    virtual long SetCurrentPoints(XPOINTF const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartWith@CStrokeHitTestSink@@UEAAJPEBUXPOINTF@@@Z
    virtual long StartWith(XPOINTF const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchSides@CStrokeHitTestSink@@UEAAJXZ
    virtual long SwitchSides();
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
class CShapeWideningSink {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddFigure@CShapeWideningSink@@UEAAJXZ
    virtual long AddFigure();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BezierCap@CShapeWideningSink@@UEAAJAEBUXPOINTF@@000000@Z
    virtual long BezierCap(XPOINTF const &, XPOINTF const &, XPOINTF const &, XPOINTF const &, XPOINTF const &, XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CapFlat@CShapeWideningSink@@UEAAJPEBUXPOINTF@@W4_RAIL_SIDE@@@Z
    virtual long CapFlat(XPOINTF const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CapTriangle@CShapeWideningSink@@UEAAJAEBUXPOINTF@@00@Z
    virtual long CapTriangle(XPOINTF const &, XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurveWedge@CShapeWideningSink@@UEAAJW4_RAIL_SIDE@@AEBUXPOINTF@@11@Z
    virtual long CurveWedge(int, XPOINTF const &, XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoInnerCorner@CShapeWideningSink@@UEAAJW4_RAIL_SIDE@@AEBUXPOINTF@@PEBU3@@Z
    virtual long DoInnerCorner(int, XPOINTF const &, XPOINTF const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPoint@CShapeWideningSink@@UEAA?BUXPOINTF@@W4_RAIL_SIDE@@@Z
    virtual XPOINTF GetCurrentPoint(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PolylineWedge@CShapeWideningSink@@UEAAJW4_RAIL_SIDE@@IPEBUXPOINTF@@@Z
    virtual long PolylineWedge(int, unsigned int, XPOINTF const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QuadTo@CShapeWideningSink@@UEAAJPEBUXPOINTF@@AEBU2@11@Z
    virtual long QuadTo(XPOINTF const *, XPOINTF const &, XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QuadTo@CShapeWideningSink@@UEAAJPEBUXPOINTF@@@Z
    virtual long QuadTo(XPOINTF const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentPoints@CShapeWideningSink@@UEAAJPEBUXPOINTF@@@Z
    virtual long SetCurrentPoints(XPOINTF const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartWith@CShapeWideningSink@@UEAAJPEBUXPOINTF@@@Z
    virtual long StartWith(XPOINTF const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchSides@CShapeWideningSink@@UEAAJXZ
    virtual long SwitchSides();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShapeWideningSink@@UEAA@XZ
    virtual ~CShapeWideningSink();
};

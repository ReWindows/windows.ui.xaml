#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CD2DEllipseGeometry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CD2DEllipseGeometry@@SAJPEAUID2D1EllipseGeometry@@UXPOINTF@@MMPEAPEAUIPALAcceleratedGeometry@@@Z
    static long Create(ID2D1EllipseGeometry *, XPOINTF, float, float, IPALAcceleratedGeometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CD2DEllipseGeometry@@UEAAJPEAUIPALAcceleratedRender@@PEAUIPALAcceleratedBrush@@MPEAUIPALStrokeStyle@@M@Z
    virtual long Draw(IPALAcceleratedRender *, IPALAcceleratedBrush *, float, IPALStrokeStyle *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Fill@CD2DEllipseGeometry@@UEAAJPEAUIPALAcceleratedRender@@PEAUIPALAcceleratedBrush@@M@Z
    virtual long Fill(IPALAcceleratedRender *, IPALAcceleratedBrush *, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CD2DEllipseGeometry@@UEAA?AW4Value@GeometryType@@XZ
    virtual int GetType();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CD2DEllipseGeometry@@IEAAJPEAUID2D1EllipseGeometry@@UXPOINTF@@MM@Z
    long Initialize(ID2D1EllipseGeometry *, XPOINTF, float, float);
};

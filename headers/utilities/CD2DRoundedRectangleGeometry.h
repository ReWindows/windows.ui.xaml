#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CD2DRoundedRectangleGeometry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CD2DRoundedRectangleGeometry@@SAJPEAUID2D1RoundedRectangleGeometry@@UXRECTF_RB@@MMPEAPEAUIPALAcceleratedGeometry@@@Z
    static long Create(ID2D1RoundedRectangleGeometry *, XRECTF_RB, float, float, IPALAcceleratedGeometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CD2DRoundedRectangleGeometry@@UEAAJPEAUIPALAcceleratedRender@@PEAUIPALAcceleratedBrush@@MPEAUIPALStrokeStyle@@M@Z
    virtual long Draw(IPALAcceleratedRender *, IPALAcceleratedBrush *, float, IPALStrokeStyle *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Fill@CD2DRoundedRectangleGeometry@@UEAAJPEAUIPALAcceleratedRender@@PEAUIPALAcceleratedBrush@@M@Z
    virtual long Fill(IPALAcceleratedRender *, IPALAcceleratedBrush *, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CD2DRoundedRectangleGeometry@@UEAA?AW4Value@GeometryType@@XZ
    virtual int GetType();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CD2DRoundedRectangleGeometry@@IEAAJPEAUID2D1RoundedRectangleGeometry@@UXRECTF_RB@@MM@Z
    long Initialize(ID2D1RoundedRectangleGeometry *, XRECTF_RB, float, float);
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CD2DRectangleGeometry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CD2DRectangleGeometry@@SAJPEAUID2D1RectangleGeometry@@UXRECTF_RB@@PEAPEAUIPALAcceleratedGeometry@@@Z
    static long Create(ID2D1RectangleGeometry *, XRECTF_RB, IPALAcceleratedGeometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CD2DRectangleGeometry@@UEAAJPEAUIPALAcceleratedRender@@PEAUIPALAcceleratedBrush@@MPEAUIPALStrokeStyle@@M@Z
    virtual long Draw(IPALAcceleratedRender *, IPALAcceleratedBrush *, float, IPALStrokeStyle *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Fill@CD2DRectangleGeometry@@UEAAJPEAUIPALAcceleratedRender@@PEAUIPALAcceleratedBrush@@M@Z
    virtual long Fill(IPALAcceleratedRender *, IPALAcceleratedBrush *, float);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetType@CD2DRectangleGeometry@@UEAA?AW4Value@GeometryType@@XZ
    virtual int GetType();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsAxisAlignedRectangle@CD2DRectangleGeometry@@UEAAIXZ
    virtual unsigned int IsAxisAlignedRectangle();
};

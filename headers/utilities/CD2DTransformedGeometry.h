#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CD2DTransformedGeometry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CD2DTransformedGeometry@@SAJPEAUIPALAcceleratedGeometry@@PEBVCMILMatrix@@PEAUID2D1TransformedGeometry@@PEAPEAU2@@Z
    static long Create(IPALAcceleratedGeometry *, CMILMatrix const *, ID2D1TransformedGeometry *, IPALAcceleratedGeometry * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CD2DTransformedGeometry@@UEAA?AW4Value@GeometryType@@XZ
    virtual int GetType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAxisAlignedRectangle@CD2DTransformedGeometry@@UEAAIXZ
    virtual unsigned int IsAxisAlignedRectangle();
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CD2DPathGeometry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CD2DPathGeometry@@SAJPEAUID2D1PathGeometry@@PEAPEAUIPALAcceleratedPathGeometry@@@Z
    static long Create(ID2D1PathGeometry *, IPALAcceleratedPathGeometry * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CD2DPathGeometry@@UEAA?AW4Value@GeometryType@@XZ
    virtual int GetType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@CD2DPathGeometry@@UEAAJPEAPEAUIPALGeometrySink@@@Z
    virtual long Open(IPALGeometrySink * *);
};

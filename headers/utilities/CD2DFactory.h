#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class CD2DFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CombineGeometry@CD2DFactory@@UEAAJPEAUIPALAcceleratedGeometry@@0W4Value@GeometryCombineMode@@PEAPEAU2@@Z
    virtual long CombineGeometry(IPALAcceleratedGeometry *, IPALAcceleratedGeometry *, int, IPALAcceleratedGeometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CD2DFactory@@SAJPEAPEAV1@@Z
    static long Create(CD2DFactory * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEllipseGeometry@CD2DFactory@@UEAAJAEBUXPOINTF@@MMPEAPEAUIPALAcceleratedGeometry@@@Z
    virtual long CreateEllipseGeometry(XPOINTF const &, float, float, IPALAcceleratedGeometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGeometryGroup@CD2DFactory@@UEAAJIPEAPEAUIPALAcceleratedGeometry@@I0@Z
    virtual long CreateGeometryGroup(unsigned int, IPALAcceleratedGeometry * *, unsigned int, IPALAcceleratedGeometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePathGeometry@CD2DFactory@@UEAAJPEAPEAUIPALAcceleratedPathGeometry@@@Z
    virtual long CreatePathGeometry(IPALAcceleratedPathGeometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRectangleGeometry@CD2DFactory@@UEAAJAEBUXRECTF_WH@@PEAPEAUIPALAcceleratedGeometry@@@Z
    virtual long CreateRectangleGeometry(XRECTF_WH const &, IPALAcceleratedGeometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRoundedRectangleGeometry@CD2DFactory@@UEAAJAEBUXRECTF_WH@@MMPEAPEAUIPALAcceleratedGeometry@@@Z
    virtual long CreateRoundedRectangleGeometry(XRECTF_WH const &, float, float, IPALAcceleratedGeometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTransformedGeometry@CD2DFactory@@UEAAJPEAUIPALAcceleratedGeometry@@PEBVCMILMatrix@@PEAPEAU2@@Z
    virtual long CreateTransformedGeometry(IPALAcceleratedGeometry *, CMILMatrix const *, IPALAcceleratedGeometry * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CD2DFactory@@AEAAJXZ
    long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD2DFactory@@EEAA@XZ
    virtual ~CD2DFactory();
};

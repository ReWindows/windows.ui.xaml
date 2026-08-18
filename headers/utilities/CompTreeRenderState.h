#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CompTreeRenderState {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyLocalSpaceClip@CompTreeRenderState@@QEAAJPEAUID2D1DeviceContext@@PEBUXRECTF_WH@@PEAI@Z
    long ApplyLocalSpaceClip(ID2D1DeviceContext *, XRECTF_WH const *, unsigned int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompTreeRenderState@@QEAA@XZ
    CompTreeRenderState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawPrimitiveGroup@CompTreeRenderState@@QEBAJPEAVDCompTreeHost@@PEAUIDCompositionPrimitiveGroupPartner@@PEAUID2D1DeviceContext@@PEAUID2D1Multithread@@W4DCOMPOSITION_COMPOSITE_MODE@@@Z
    long DrawPrimitiveGroup(DCompTreeHost *, IDCompositionPrimitiveGroupPartner *, ID2D1DeviceContext *, ID2D1Multithread *, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopD2DLayers@CompTreeRenderState@@QEAAXPEAUID2D1DeviceContext@@I@Z
    void PopD2DLayers(ID2D1DeviceContext *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrependTransform@CompTreeRenderState@@QEAAXPEBVCMILMatrix4x4@@@Z
    void PrependTransform(CMILMatrix4x4const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrependTransform@CompTreeRenderState@@QEAAXPEBVCMILMatrix@@@Z
    void PrependTransform(CMILMatrix const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateClipGeometry@CompTreeRenderState@@CAJPEAUID2D1Factory@@PEBUXRECTF_RB@@PEBVCMILMatrix4x4@@PEAPEAUID2D1Geometry@@@Z
    static long CreateClipGeometry(ID2D1Factory *, XRECTF_RB const *, CMILMatrix4x4const *, ID2D1Geometry * *);
};

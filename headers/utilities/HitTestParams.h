#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class HitTestParams {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendTransformMatrix@HitTestParams@@QEAAXPEBVCMILMatrix@@@Z
    void AppendTransformMatrix(CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create3DQuad@HitTestParams@@SAXAEBUXSIZEF@@AEBUXRECTF_RB@@1PEAUSDPoint4UV@@PEBVCMILMatrix4x4@@@Z
    static void Create3DQuad(XSIZEF const &, XRECTF_RB const &, XRECTF_RB const &, SDPoint4UV *, CMILMatrix4x4const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentBounds@HitTestParams@@QEAAXAEBUXSIZEF@@AEBUXRECTF_RB@@PEAU3@@Z
    void GetContentBounds(XSIZEF const &, XRECTF_RB const &, XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentBoundsHelper@HitTestParams@@SAXPEAUXPOINTF4@@HPEAUXRECTF_RB@@@Z
    static void GetContentBoundsHelper(XPOINTF4*, int, XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformerCommonHelper@HitTestParams@@SAXPEBVCMILMatrix4x4@@AEBUXSIZEF@@PEAPEAVCPerspectiveTransformer@@@Z
    static void GetTransformerCommonHelper(CMILMatrix4x4const *, XSIZEF const &, CPerspectiveTransformer * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HitTestParams@@QEAA@PEBV0@@Z
    HitTestParams(HitTestParams const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HitTestParams@@QEAA@PEAUHitTestPerfData@@@Z
    HitTestParams(HitTestPerfData *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUpTextureInterpolators@HitTestParams@@SAXPEAUXPOINTF@@PEAUSDPoint4UV@@IPEAUXVERTEX25D@@22PEAI@Z
    static void SetUpTextureInterpolators(XPOINTF *, SDPoint4UV *, unsigned int, XVERTEX25D *, XVERTEX25D *, XVERTEX25D *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformBounds@HitTestParams@@QEAAXAEBUXRECTF_RB@@PEAU2@@Z
    void TransformBounds(XRECTF_RB const &, XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCombinedTransformMatrix@HitTestParams@@QEAAXPEBVCMILMatrix@@@Z
    void UpdateCombinedTransformMatrix(CMILMatrix const *);
};

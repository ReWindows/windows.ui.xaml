#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
class TransformAndClipStack {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get2DTransformInLeafmostProjection@TransformAndClipStack@@QEBAXPEAVCMILMatrix@@@Z
    void Get2DTransformInLeafmostProjection(CMILMatrix *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCombinedTransform@TransformAndClipStack@@QEBAXPEAVCMILMatrix4x4@@@Z
    void GetCombinedTransform(CMILMatrix4x4*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?IntersectLocalSpaceClip@TransformAndClipStack@@QEAAJPEAVHWClip@@@Z
    long IntersectLocalSpaceClip(HWClip *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrependProjection@TransformAndClipStack@@QEAAJPEBVCMILMatrix4x4@@@Z
    long PrependProjection(CMILMatrix4x4const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrependTransform@TransformAndClipStack@@QEAAXAEBVCMILMatrix@@@Z
    void PrependTransform(CMILMatrix const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@TransformAndClipStack@@QEAAXXZ
    void Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@TransformAndClipStack@@QEAAJPEBV1@@Z
    long Set(TransformAndClipStack const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TransformAndClipStack@@QEAA@XZ
    TransformAndClipStack();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformPrimitiveAndTryGetOptimizedClip@TransformAndClipStack@@QEBAJPEBUXRECTF_WH@@_NPEAI2PEAU2@PEAVHWClip@@0@Z
    long TransformPrimitiveAndTryGetOptimizedClip(XRECTF_WH const *, bool, unsigned int *, unsigned int *, XRECTF_WH *, HWClip *, XRECTF_WH const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformToLocalSpace@TransformAndClipStack@@QEBAJPEAVHWClip@@@Z
    long TransformToLocalSpace(HWClip *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TransformAndClipStack@@UEAA@XZ
    virtual ~TransformAndClipStack();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTopFrame@TransformAndClipStack@@AEAAPEAVTransformAndClipFrame@@XZ
    TransformAndClipFrame * GetTopFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushFrame@TransformAndClipStack@@AEAAJPEAPEAVTransformAndClipFrame@@@Z
    long PushFrame(TransformAndClipFrame * *);
};

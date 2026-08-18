#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class TransformAndClipFrame {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TransformAndClipFrame@@QEAA@XZ
    TransformAndClipFrame();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TransformAndClipFrame@@UEAA@XZ
    virtual ~TransformAndClipFrame();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?IntersectLocalSpaceClip@TransformAndClipFrame@@AEAAJPEAVHWClip@@@Z
    long IntersectLocalSpaceClip(HWClip *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Prepend@TransformAndClipFrame@@AEAAJPEBV1@@Z
    long Prepend(TransformAndClipFrame const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrependNetTransformTo@TransformAndClipFrame@@AEBAXPEAVCMILMatrix4x4@@@Z
    void PrependNetTransformTo(CMILMatrix4x4*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@TransformAndClipFrame@@AEAAJPEBV1@@Z
    long Set(TransformAndClipFrame const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformPrimitiveAndCheckOptimizedClipping@TransformAndClipFrame@@AEBAJPEAVHWClip@@IIPEAI1PEAUXRECTF_WH@@PEBU3@@Z
    long TransformPrimitiveAndCheckOptimizedClipping(HWClip *, unsigned int, unsigned int, unsigned int *, unsigned int *, XRECTF_WH *, XRECTF_WH const *) const;
};

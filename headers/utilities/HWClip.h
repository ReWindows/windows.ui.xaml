#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
class HWClip {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesEntirelyContain@HWClip@@QEBAIPEBV1@@Z
    unsigned int DoesEntirelyContain(HWClip const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesEntirelyContain@HWClip@@QEBAIPEBUXRECTF_WH@@@Z
    unsigned int DoesEntirelyContain(XRECTF_WH const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRectangularClip@HWClip@@QEBAXPEAUXRECTF_WH@@@Z
    void GetRectangularClip(XRECTF_WH *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRectilinearClip@HWClip@@QEBAJPEAUXRECTF_WH@@PEBVCMILMatrix@@@Z
    long GetRectilinearClip(XRECTF_WH *, CMILMatrix const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Intersect@HWClip@@QEAAJPEBV1@@Z
    long Intersect(HWClip const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsClipAxisAlignedWith@HWClip@@QEBAIPEBVCMILMatrix@@@Z
    unsigned int IsClipAxisAlignedWith(CMILMatrix const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@HWClip@@QEAAXXZ
    void Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@HWClip@@QEAAXPEBUXRECTF_WH@@@Z
    void Set(XRECTF_WH const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@HWClip@@QEAAJPEBV1@@Z
    long Set(HWClip const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Transform@HWClip@@QEAAJPEBVCMILMatrix@@@Z
    long Transform(CMILMatrix const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HWClip@@QEAA@XZ
    ~HWClip();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HWClip@@AEAA@AEBV0@@Z
    HWClip(HWClip const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformPointsHelper@HWClip@@AEAAXPEBVCMILMatrix@@@Z
    void TransformPointsHelper(CMILMatrix const *);
};

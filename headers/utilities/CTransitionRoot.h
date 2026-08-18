#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class CTransitionRoot {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTransitionRoot@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenInRenderOrder@CTransitionRoot@@UEAAXPEAPEAPEAVCUIElement@@PEAI@Z
    virtual void GetChildrenInRenderOrder(CUIElement * * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTransitionRoot@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReEvaluateRequiresCompNode@CTransitionRoot@@QEAAXXZ
    void ReEvaluateRequiresCompNode();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoundsTestChildren@CTransitionRoot@@MEAAJAEBUXPOINTF@@PEAVCBoundedHitTestVisitor@@PEBVHitTestParams@@_N3PEAW4Value@BoundsWalkHitResult@@@Z
    virtual long BoundsTestChildren(XPOINTF const &, CBoundedHitTestVisitor *, HitTestParams const *, bool, bool, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoundsTestChildren@CTransitionRoot@@MEAAJAEBVHitTestPolygon@@PEAVCBoundedHitTestVisitor@@PEBVHitTestParams@@_N3PEAW4Value@BoundsWalkHitResult@@@Z
    virtual long BoundsTestChildren(HitTestPolygon const &, CBoundedHitTestVisitor *, HitTestParams const *, bool, bool, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateChildOuterBounds@CTransitionRoot@@MEAAJPEAVHitTestParams@@PEAUXRECTF_RB@@@Z
    virtual long GenerateChildOuterBounds(HitTestParams *, XRECTF_RB *);
};

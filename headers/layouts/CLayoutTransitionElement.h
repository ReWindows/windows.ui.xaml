#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 26 member(s).
class CLayoutTransitionElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachTransition@CLayoutTransitionElement@@QEAAJPEAVCUIElement@@PEAVCTransitionRoot@@@Z
    long AttachTransition(CUIElement *, CTransitionRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CLayoutTransitionElement@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPCRenderData@CLayoutTransitionElement@@UEAAXXZ
    virtual void ClearPCRenderData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearSecondaryRenderData@CLayoutTransitionElement@@QEAAXXZ
    void ClearSecondaryRenderData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLayoutTransitionElement@@SAJPEAVCUIElement@@IPEAPEAV1@@Z
    static long Create(CUIElement *, unsigned int, CLayoutTransitionElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachTransition@CLayoutTransitionElement@@QEAAJPEAVCUIElement@@PEAVCTransitionRoot@@@Z
    long DetachTransition(CUIElement *, CTransitionRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachTransition@CLayoutTransitionElement@@QEAAXXZ
    void DetachTransition();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualHeight@CLayoutTransitionElement@@UEAAMXZ
    virtual float GetActualHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualOffsetX@CLayoutTransitionElement@@UEAAMXZ
    virtual float GetActualOffsetX();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualOffsetY@CLayoutTransitionElement@@UEAAMXZ
    virtual float GetActualOffsetY();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualWidth@CLayoutTransitionElement@@UEAAMXZ
    virtual float GetActualWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionRelativeToParent@CLayoutTransitionElement@@QEAA?AUXPOINTF@@XZ
    XPOINTF GetPositionRelativeToParent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSecondaryTransitionRenderDataNoRef@CLayoutTransitionElement@@QEAAPEAV?$xvector@PEAUIUnknown@@@@XZ
    WindissectOpaque * GetSecondaryTransitionRenderDataNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShouldFlipRTL@CLayoutTransitionElement@@UEAAXPEAI0@Z
    virtual void GetShouldFlipRTL(unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CLayoutTransitionElement@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CLayoutTransitionElement@@QEAAJXZ
    long Initialize();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoundsTestChildren@CLayoutTransitionElement@@MEAAJAEBUXPOINTF@@PEAVCBoundedHitTestVisitor@@PEBVHitTestParams@@_N3PEAW4Value@BoundsWalkHitResult@@@Z
    virtual long BoundsTestChildren(XPOINTF const &, CBoundedHitTestVisitor *, HitTestParams const *, bool, bool, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoundsTestChildren@CLayoutTransitionElement@@MEAAJAEBVHitTestPolygon@@PEAVCBoundedHitTestVisitor@@PEBVHitTestParams@@_N3PEAW4Value@BoundsWalkHitResult@@@Z
    virtual long BoundsTestChildren(HitTestPolygon const &, CBoundedHitTestVisitor *, HitTestParams const *, bool, bool, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateBoundsForTransform3DChildren@CLayoutTransitionElement@@MEAAXPEAVHitTestParams@@_NPEAUXRECTF_RB@@@Z
    virtual void CalculateBoundsForTransform3DChildren(HitTestParams *, bool, XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateChildOuterBounds@CLayoutTransitionElement@@MEAAJPEAVHitTestParams@@PEAUXRECTF_RB@@@Z
    virtual long GenerateChildOuterBounds(HitTestParams *, XRECTF_RB *);
    // Category: Method | Source: PE Export
    // Symbol: ?IgnoresInheritedClips@CLayoutTransitionElement@@MEAAIXZ
    virtual unsigned int IgnoresInheritedClips();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLayoutTransitionElement@@AEAA@PEAVCUIElement@@I@Z
    CLayoutTransitionElement(CUIElement *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeavePCSceneSubgraph@CLayoutTransitionElement@@EEAAXXZ
    virtual void LeavePCSceneSubgraph();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLayoutTransitionElement@@EEAA@XZ
    virtual ~CLayoutTransitionElement();
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
class HWRedirectedCompTreeNodeDComp {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@HWRedirectedCompTreeNodeDComp@@SAJPEAVCCoreServices@@PEAVCompositorTreeHost@@IPEAPEAV1@@Z
    static long Create(CCoreServices *, CompositorTreeHost *, unsigned int, HWRedirectedCompTreeNodeDComp * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@HWRedirectedCompTreeNodeDComp@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRedirectionTarget@HWRedirectedCompTreeNodeDComp@@QEAAJPEAVHWCompTreeNode@@PEBVCMILMatrix@@@Z
    long SetRedirectionTarget(HWCompTreeNode *, CMILMatrix const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HWRedirectedCompTreeNodeDComp@@UEAA@XZ
    virtual ~HWRedirectedCompTreeNodeDComp();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupProjectionVisuals@HWRedirectedCompTreeNodeDComp@@IEAAJXZ
    long CleanupProjectionVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTransformVisualAndSetTransform@HWRedirectedCompTreeNodeDComp@@MEAAJPEAVDCompTreeHost@@PEAUIDCompositionTransform@@_N@Z
    virtual long EnsureTransformVisualAndSetTransform(DCompTreeHost *, IDCompositionTransform *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTransformVisualAndSetTransform@HWRedirectedCompTreeNodeDComp@@MEAAJPEAVDCompTreeHost@@PEBVCMILMatrix@@_N@Z
    virtual long EnsureTransformVisualAndSetTransform(DCompTreeHost *, CMILMatrix const *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRedirectionWalkParent@HWRedirectedCompTreeNodeDComp@@MEAAPEAVHWCompTreeNode@@XZ
    virtual HWCompTreeNode * GetRedirectionWalkParent();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HWRedirectedCompTreeNodeDComp@@IEAA@PEAVCCoreServices@@PEAVCompositorTreeHost@@I@Z
    HWRedirectedCompTreeNodeDComp(CCoreServices *, CompositorTreeHost *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTransformVisualRequired@HWRedirectedCompTreeNodeDComp@@MEBA_NXZ
    virtual bool IsTransformVisualRequired() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrependVisualClip@HWRedirectedCompTreeNodeDComp@@MEAAJPEBVCMILMatrix@@@Z
    virtual long SetPrependVisualClip(CMILMatrix const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrependVisualTransform@HWRedirectedCompTreeNodeDComp@@MEAAJPEBVCMILMatrix@@@Z
    virtual long SetPrependVisualTransform(CMILMatrix const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GatherRedirectionTransforms@HWRedirectedCompTreeNodeDComp@@AEAAXPEAVDCompTreeHost@@PEAV?$xvector@PEAUIDCompVisual@DCompHelpers@@@@_N@Z
    void GatherRedirectionTransforms(DCompTreeHost *, WindissectOpaque *, bool);
};

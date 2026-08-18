#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class HWCompPrimitiveGroupRenderDataNode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearVisualContent@HWCompPrimitiveGroupRenderDataNode@@UEAAXXZ
    virtual void ClearVisualContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@HWCompPrimitiveGroupRenderDataNode@@SAJPEAVCCoreServices@@PEAVCompositorTreeHost@@PEAVDCompTreeHost@@IPEAUIDCompositionPrimitiveGroupPartner@@PEAPEAV1@@Z
    static long Create(CCoreServices *, CompositorTreeHost *, DCompTreeHost *, unsigned int, IDCompositionPrimitiveGroupPartner *, HWCompPrimitiveGroupRenderDataNode * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRenderDataParent@HWCompPrimitiveGroupRenderDataNode@@UEAAPEAUIUnknown@@PEAVDCompTreeHost@@@Z
    virtual IUnknown * EnsureRenderDataParent(DCompTreeHost *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderDataParent@HWCompPrimitiveGroupRenderDataNode@@UEBAPEAUIUnknown@@XZ
    virtual IUnknown * GetRenderDataParent() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HWCompPrimitiveGroupRenderDataNode@@QEAA@PEAVCCoreServices@@PEAVCompositorTreeHost@@PEAVDCompTreeHost@@IPEAUIDCompositionPrimitiveGroupPartner@@@Z
    HWCompPrimitiveGroupRenderDataNode(CCoreServices *, CompositorTreeHost *, DCompTreeHost *, unsigned int, IDCompositionPrimitiveGroupPartner *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeIntoEnd@HWCompPrimitiveGroupRenderDataNode@@UEAAJPEAVHWCompRenderDataNode@@@Z
    virtual long MergeIntoEnd(HWCompRenderDataNode *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HWCompPrimitiveGroupRenderDataNode@@MEAA@XZ
    virtual ~HWCompPrimitiveGroupRenderDataNode();
};

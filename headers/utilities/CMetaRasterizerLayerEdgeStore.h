#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class CMetaRasterizerLayerEdgeStore {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CMetaRasterizerLayerEdgeStore@@SAJPEBVCFrameVectorBuffer@@W4XcpFillMode@@IPEAPEAV1@@Z
    static long Create(CFrameVectorBuffer const *, int, unsigned int, CMetaRasterizerLayerEdgeStore * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalizeFrame@CMetaRasterizerLayerEdgeStore@@QEAAJI@Z
    long FinalizeFrame(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWAddToFrameBuffer@CMetaRasterizerLayerEdgeStore@@QEAAJPEAVCFrameVectorBuffer@@III@Z
    long NWAddToFrameBuffer(CFrameVectorBuffer *, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWEnsureEdgeStore@CMetaRasterizerLayerEdgeStore@@QEAAJAEAUSharedRenderParams@@AEAUNWRenderParams@@PEAI@Z
    long NWEnsureEdgeStore(SharedRenderParams &, NWRenderParams &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetBrushSpan@CMetaRasterizerLayerEdgeStore@@UEAAXPEAUIBrushSpan@@@Z
    virtual void NWSetBrushSpan(IBrushSpan *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffset@CMetaRasterizerLayerEdgeStore@@UEAAXPEAUXPOINTF@@@Z
    virtual void SetOffset(XPOINTF *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffset@CMetaRasterizerLayerEdgeStore@@UEAAXPEBVCMILMatrix@@@Z
    virtual void SetOffset(CMILMatrix const *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRasterizerLayerEdgeStore@CMetaRasterizerLayerEdgeStore@@AEAAPEAVCRasterizerLayerEdgeStore@@PEBVCFrameVectorBuffer@@I@Z
    CRasterizerLayerEdgeStore * GetRasterizerLayerEdgeStore(CFrameVectorBuffer const *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMetaRasterizerLayerEdgeStore@@EEAA@XZ
    virtual ~CMetaRasterizerLayerEdgeStore();
};

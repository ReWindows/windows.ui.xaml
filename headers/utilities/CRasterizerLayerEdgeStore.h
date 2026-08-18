#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CRasterizerLayerEdgeStore {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRasterizerLayerEdgeStore@@SAJPEBVCFrameVectorBuffer@@W4XcpFillMode@@IPEAPEAV1@@Z
    static long Create(CFrameVectorBuffer const *, int, unsigned int, CRasterizerLayerEdgeStore * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWAddToFrameBuffer@CRasterizerLayerEdgeStore@@QEAAJPEAVCFrameVectorBuffer@@III@Z
    long NWAddToFrameBuffer(CFrameVectorBuffer *, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetBrushSpan@CRasterizerLayerEdgeStore@@UEAAXPEAUIBrushSpan@@@Z
    virtual void NWSetBrushSpan(IBrushSpan *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetOpacityAndOpacityMask@CRasterizerLayerEdgeStore@@QEAAXMPEAVCBrush@@PEBVCMILMatrix@@PEAUXRECTF_WH@@@Z
    void NWSetOpacityAndOpacityMask(float, CBrush *, CMILMatrix const *, XRECTF_WH *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffset@CRasterizerLayerEdgeStore@@UEAAXPEAUXPOINTF@@@Z
    virtual void SetOffset(XPOINTF *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffset@CRasterizerLayerEdgeStore@@UEAAXPEBVCMILMatrix@@@Z
    virtual void SetOffset(CMILMatrix const *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRasterizerLayerEdgeStore@@AEAA@PEBVCFrameVectorBuffer@@IW4XcpFillMode@@PEAVCLayer@@@Z
    CRasterizerLayerEdgeStore(CFrameVectorBuffer const *, unsigned int, int, CLayer *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRasterizerLayerEdgeStore@@EEAA@XZ
    virtual ~CRasterizerLayerEdgeStore();
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 19 member(s).
class CRasterizerEdgeStore {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckNewTransform@CRasterizerEdgeStore@@SAJPEAPEAV1@PEBVCMILMatrix@@IHHAEA_N@Z
    static long CheckNewTransform(CRasterizerEdgeStore * *, CMILMatrix const *, unsigned int, int, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CRasterizerEdgeStore@@QEAAJPEAPEAV1@@Z
    long Clone(CRasterizerEdgeStore * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeRenderedBounds@CRasterizerEdgeStore@@QEAAXAEAUXRECT_RB@@@Z
    void ComputeRenderedBounds(XRECT_RB &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@CRasterizerEdgeStore@@QEAAXPEAPEAV1@I@Z
    void InsertAt(CRasterizerEdgeStore * *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDrawDirty@CRasterizerEdgeStore@@QEAAHXZ
    int IsDrawDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetBrushSpan@CRasterizerEdgeStore@@UEAAXPEAUIBrushSpan@@@Z
    virtual void NWSetBrushSpan(IBrushSpan *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRasterizerEdgeStore@@QEAAIXZ
    unsigned int Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBrush@CRasterizerEdgeStore@@QEAAJPEAVCBrush@@PEBVCMILMatrix@@PEBUXRECTF_WH@@@Z
    long SetBrush(CBrush *, CMILMatrix const *, XRECTF_WH const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBrush@CRasterizerEdgeStore@@QEAAJPEAVCBrush@@PEBVCMILMatrix@@I@Z
    long SetBrush(CBrush *, CMILMatrix const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBrushSpan@CRasterizerEdgeStore@@QEAAXPEAUIBrushSpan@@@Z
    void SetBrushSpan(IBrushSpan *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffset@CRasterizerEdgeStore@@UEAAXPEBVCMILMatrix@@@Z
    virtual void SetOffset(CMILMatrix const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffset@CRasterizerEdgeStore@@UEAAXPEAUXPOINTF@@@Z
    virtual void SetOffset(XPOINTF *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRendering@CRasterizerEdgeStore@@QEAAXMPEAVCLayer@@I@Z
    void SetRendering(float, CLayer *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRendering@CRasterizerEdgeStore@@QEAAXPEAVCLayer@@I@Z
    void SetRendering(CLayer *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlink@CRasterizerEdgeStore@@QEAAXXZ
    void Unlink();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTargetLayerBounds@CRasterizerEdgeStore@@QEAAXXZ
    void UpdateTargetLayerBounds();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRasterizerEdgeStore@@MEAA@XZ
    virtual ~CRasterizerEdgeStore();
};

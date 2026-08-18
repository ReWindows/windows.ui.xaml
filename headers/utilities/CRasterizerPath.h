#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class CRasterizerPath {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeletePathData@CRasterizerPath@@QEAAXXZ
    void DeletePathData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EdgeStoreHasCorrectBrushClip@CRasterizerPath@@QEAAIPEAVCBrush@@@Z
    unsigned int EdgeStoreHasCorrectBrushClip(CBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBasicEdgeStore@CRasterizerPath@@QEAAJPEAVCCoreServices@@PEAVCPlainPen@@IPEBVCMILMatrix@@MI@Z
    long EnsureBasicEdgeStore(CCoreServices *, CPlainPen *, unsigned int, CMILMatrix const *, float, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CRasterizerPath@@QEAAJPEAUXRECTF_WH@@@Z
    long GetBounds(XRECTF_WH *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CRasterizerPath@@QEAAJPEAUXRECTF_RB@@@Z
    long GetBounds(XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWEnsureClipEdgeStore@CRasterizerPath@@QEAAJAEAUSharedRenderParams@@AEAUNWRenderParams@@PEAVCCoreServices@@W4XcpFillMode@@@Z
    long NWEnsureClipEdgeStore(SharedRenderParams &, NWRenderParams &, CCoreServices *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PathForPoints@CRasterizerPath@@QEAAJI@Z
    long PathForPoints(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Render@CRasterizerPath@@QEAAJPEAVCCoreServices@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@MPEAVCLayer@@PEAVCBrush@@IPEAVCPlainPen@@PEAUIBrushSpan@@W4XcpFillMode@@W4XcpShapeMaskMode@@IPEBVCMILMatrix@@@Z
    long Render(CCoreServices *, WindissectOpaque &, float, CLayer *, CBrush *, unsigned int, CPlainPen *, IBrushSpan *, int, int, unsigned int, CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Render@CRasterizerPath@@QEAAJPEAVCCoreServices@@PEAVCFrameVectorBuffer@@MPEAVCLayer@@PEAVCBrush@@IPEAVCPlainPen@@PEAUIBrushSpan@@W4XcpFillMode@@IPEBVCMILMatrix@@I@Z
    long Render(CCoreServices *, CFrameVectorBuffer *, float, CLayer *, CBrush *, unsigned int, CPlainPen *, IBrushSpan *, int, unsigned int, CMILMatrix const *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRasterizerPath@@QEAA@XZ
    ~CRasterizerPath();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBasicRasterizerEdgeStore@CRasterizerPath@@AEAAJPEAVCRasterizerEdgeStore@@PEAVCCoreServices@@PEBVCMILMatrix@@PEAVCPlainPen@@IMI@Z
    long SetBasicRasterizerEdgeStore(CRasterizerEdgeStore *, CCoreServices *, CMILMatrix const *, CPlainPen *, unsigned int, float, unsigned int);
};

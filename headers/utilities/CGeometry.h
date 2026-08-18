#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 32 member(s).
class CGeometry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToRenderList@CGeometry@@QEAAJMPEAVCBrush@@IPEAVCPlainPen@@0IPEAUIBrushSpan@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@PEBVCFrameVectorBuffer@@PEAVCLayer@@PEAUXRECTF_WH@@W4Stretch@DirectUI@@IPEBVCMILMatrix@@IIPEA_N@Z
    long AddToRenderList(float, CBrush *, unsigned int, CPlainPen *, CBrush *, unsigned int, IBrushSpan *, WindissectOpaque &, CFrameVectorBuffer const *, CLayer *, XRECTF_WH *, int, unsigned int, CMILMatrix const *, unsigned int, unsigned int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanBeAccelerated@CGeometry@@UEAAIXZ
    virtual unsigned int CanBeAccelerated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckNewTransform@CGeometry@@QEAAJPEBVCMILMatrix@@PEBVCFrameVectorBuffer@@0PEAVCBrush@@2PEA_N@Z
    long CheckNewTransform(CMILMatrix const *, CFrameVectorBuffer const *, CMILMatrix const *, CBrush *, CBrush *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClipToFill@CGeometry@@UEAAJAEAVHitTestPolygon@@PEBVCMILMatrix@@PEAI@Z
    virtual long ClipToFill(HitTestPolygon &, CMILMatrix const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClipToFill@CGeometry@@UEAAJAEAUXPOINTF@@PEBVCMILMatrix@@PEAI@Z
    virtual long ClipToFill(XPOINTF &, CMILMatrix const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeStretchMatrix@CGeometry@@QEAAJW4Stretch@DirectUI@@PEBUXRECTF_WH@@1PEAVCMILMatrix@@@Z
    long ComputeStretchMatrix(int, XRECTF_WH const *, XRECTF_WH const *, CMILMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawAccelerated@CGeometry@@SAJPEAUIPALAcceleratedGeometry@@AEBUD2DRenderParams@@PEBVCMILMatrix@@MPEAUIPALStrokeStyle@@MPEAUIPALAcceleratedBrush@@PEAUAcceleratedBrushParams@@@Z
    static long DrawAccelerated(IPALAcceleratedGeometry *, D2DRenderParams const &, CMILMatrix const *, float, IPALStrokeStyle *, float, IPALAcceleratedBrush *, AcceleratedBrushParams *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CGeometry@@UEAAJPEAUXRECTF_RB@@@Z
    virtual long GetBounds(XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CGeometry@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long GetBounds(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrintGeometry@CGeometry@@QEAAJAEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@PEAPEAUIPALAcceleratedGeometry@@@Z
    long GetPrintGeometry(D2DPrecomputeParams const &, D2DRenderParams const &, IPALAcceleratedGeometry * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrintGeometry@CGeometry@@QEAAJAEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@PEAUXRECTF_WH@@W4Stretch@DirectUI@@MPEAPEAUIPALAcceleratedGeometry@@@Z
    long GetPrintGeometry(D2DPrecomputeParams const &, D2DRenderParams const &, XRECTF_WH *, int, float, IPALAcceleratedGeometry * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CGeometry@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWidenedBounds@CGeometry@@UEAAJAEBVCPlainPen@@PEAUXRECTF_RB@@@Z
    virtual long GetWidenedBounds(CPlainPen const &, XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestFill@CGeometry@@UEAAJAEBVHitTestPolygon@@PEBVCMILMatrix@@PEAI@Z
    virtual long HitTestFill(HitTestPolygon const &, CMILMatrix const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestFill@CGeometry@@UEAAJAEBUXPOINTF@@PEBVCMILMatrix@@PEAI@Z
    virtual long HitTestFill(XPOINTF const &, CMILMatrix const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestStroke@CGeometry@@UEAAJAEBUXPOINTF@@AEBVCPlainPen@@PEBVCMILMatrix@@PEAI@Z
    virtual long HitTestStroke(XPOINTF const &, CPlainPen const &, CMILMatrix const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestStroke@CGeometry@@UEAAJAEBVHitTestPolygon@@AEBVCPlainPen@@PEBVCMILMatrix@@PEAI@Z
    virtual long HitTestStroke(HitTestPolygon const &, CPlainPen const &, CMILMatrix const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateEdgeStores@CGeometry@@QEAAXXZ
    void InvalidateEdgeStores();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateFillEdgeStore@CGeometry@@QEAAXXZ
    void InvalidateFillEdgeStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CGeometry@@UEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetUpClip@CGeometry@@QEAAJAEAUSharedRenderParams@@AEAUNWRenderParams@@I@Z
    long NWSetUpClip(SharedRenderParams &, NWRenderParams &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegeneratePathData@CGeometry@@UEAAJXZ
    virtual long RegeneratePathData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCompResources@CGeometry@@UEAAXXZ
    virtual void ReleaseDCompResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisitSink@CGeometry@@UEAAJPEAUIPALGeometrySink@@@Z
    virtual long VisitSink(IPALGeometrySink *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGeometry@@IEAA@PEAVCCoreServices@@@Z
    CGeometry(CCoreServices *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrintGeometryVirtual@CGeometry@@MEAAJAEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@PEAPEAUIPALAcceleratedGeometry@@@Z
    virtual long GetPrintGeometryVirtual(D2DPrecomputeParams const &, D2DRenderParams const &, IPALAcceleratedGeometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WidenToSink@CGeometry@@IEAAJAEBVCPlainPen@@PEBVCMILMatrix@@PEAVCWideningSink@@@Z
    long WidenToSink(CPlainPen const &, CMILMatrix const *, CWideningSink *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGeometry@@MEAA@XZ
    virtual ~CGeometry();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToFrameBuffer@CGeometry@@AEAAJPEBVCMILMatrix@@W4XcpShapeMaskMode@@MPEAVCRasterizerPath@@PEAVCPlainPen@@PEAVCBrush@@IPEAUIBrushSpan@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@PEBVCFrameVectorBuffer@@PEAVCLayer@@PEBUXRECTF_WH@@90III@Z
    long AddToFrameBuffer(CMILMatrix const *, int, float, CRasterizerPath *, CPlainPen *, CBrush *, unsigned int, IBrushSpan *, WindissectOpaque &, CFrameVectorBuffer const *, CLayer *, XRECTF_WH const *, XRECTF_WH const *, CMILMatrix const *, unsigned int, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStrokeAdjustedElementBounds@CGeometry@@AEAAXPEAUXRECTF_WH@@AEBU2@M0@Z
    void GetStrokeAdjustedElementBounds(XRECTF_WH *, XRECTF_WH const &, float, XRECTF_WH *);
};

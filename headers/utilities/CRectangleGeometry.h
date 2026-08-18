#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 21 member(s).
class CRectangleGeometry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToPath@CRectangleGeometry@@UEAAJPEBVCMILMatrix@@@Z
    virtual long AddToPath(CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyClip@CRectangleGeometry@@SAJPEAV1@PEAVTransformAndClipStack@@@Z
    static long ApplyClip(CRectangleGeometry *, TransformAndClipStack *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyClip@CRectangleGeometry@@QEAAXPEAUXRECTF_WH@@@Z
    void ApplyClip(XRECTF_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyClip@CRectangleGeometry@@SAXPEAV1@PEBVCMILMatrix@@PEAUXRECTF_WH@@@Z
    static void ApplyClip(CRectangleGeometry *, CMILMatrix const *, XRECTF_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanBeAccelerated@CRectangleGeometry@@UEAAIXZ
    virtual unsigned int CanBeAccelerated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRectangleGeometry@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CRectangleGeometry@@UEAAJPEAUXRECTF_RB@@@Z
    virtual long GetBounds(XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionGeometry@CRectangleGeometry@@UEAAPEAUICompositionGeometry@Composition@UI@Windows@@PEAVVisualContentRenderer@@@Z
    virtual ::Windows::UI::Composition::ICompositionGeometry * GetCompositionGeometry(VisualContentRenderer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CRectangleGeometry@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWidenedBounds@CRectangleGeometry@@UEAAJAEBVCPlainPen@@PEAUXRECTF_RB@@@Z
    virtual long GetWidenedBounds(CPlainPen const &, XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestFill@CRectangleGeometry@@UEAAJAEBUXPOINTF@@PEBVCMILMatrix@@PEAI@Z
    virtual long HitTestFill(XPOINTF const &, CMILMatrix const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestFill@CRectangleGeometry@@UEAAJAEBVHitTestPolygon@@PEBVCMILMatrix@@PEAI@Z
    virtual long HitTestFill(HitTestPolygon const &, CMILMatrix const *, unsigned int *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrintGeometryVirtual@CRectangleGeometry@@MEAAJAEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@PEAPEAUIPALAcceleratedGeometry@@@Z
    virtual long GetPrintGeometryVirtual(D2DPrecomputeParams const &, D2DRenderParams const &, IPALAcceleratedGeometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisitSinkInternal@CRectangleGeometry@@MEAAJPEAUIPALGeometrySink@@@Z
    virtual long VisitSinkInternal(IPALGeometrySink *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanDoFastWidening@CRectangleGeometry@@CAIAEBVCPlainPen@@AEBUXRECTF_WH@@@Z
    static unsigned int CanDoFastWidening(CPlainPen const &, XRECTF_WH const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRoundedRectangleCompositionGeometry@CRectangleGeometry@@AEAAPEAUICompositionGeometry@Composition@UI@Windows@@PEAVVisualContentRenderer@@AEBUVector2@Numerics@Foundation@5@1@Z
    ::Windows::UI::Composition::ICompositionGeometry * GetRoundedRectangleCompositionGeometry(VisualContentRenderer *, WindissectOpaque &, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSimpleRectangleCompositionGeometry@CRectangleGeometry@@AEAAPEAUICompositionGeometry@Composition@UI@Windows@@PEAVVisualContentRenderer@@AEBUVector2@Numerics@Foundation@5@1@Z
    ::Windows::UI::Composition::ICompositionGeometry * GetSimpleRectangleCompositionGeometry(VisualContentRenderer *, WindissectOpaque &, WindissectOpaque &);
};

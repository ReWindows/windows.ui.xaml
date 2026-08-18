#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class CEllipseGeometry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToPath@CEllipseGeometry@@UEAAJPEBVCMILMatrix@@@Z
    virtual long AddToPath(CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CEllipseGeometry@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CEllipseGeometry@@UEAAJPEAUXRECTF_RB@@@Z
    virtual long GetBounds(XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionGeometry@CEllipseGeometry@@UEAAPEAUICompositionGeometry@Composition@UI@Windows@@PEAVVisualContentRenderer@@@Z
    virtual ::Windows::UI::Composition::ICompositionGeometry * GetCompositionGeometry(VisualContentRenderer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CEllipseGeometry@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestFill@CEllipseGeometry@@UEAAJAEBUXPOINTF@@PEBVCMILMatrix@@PEAI@Z
    virtual long HitTestFill(XPOINTF const &, CMILMatrix const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestFill@CEllipseGeometry@@UEAAJAEBVHitTestPolygon@@PEBVCMILMatrix@@PEAI@Z
    virtual long HitTestFill(HitTestPolygon const &, CMILMatrix const *, unsigned int *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrintGeometryVirtual@CEllipseGeometry@@MEAAJAEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@PEAPEAUIPALAcceleratedGeometry@@@Z
    virtual long GetPrintGeometryVirtual(D2DPrecomputeParams const &, D2DRenderParams const &, IPALAcceleratedGeometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisitSinkInternal@CEllipseGeometry@@MEAAJPEAUIPALGeometrySink@@@Z
    virtual long VisitSinkInternal(IPALGeometrySink *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CEllipseGeometry@@EEAAJXZ
    virtual long InitInstance();
};

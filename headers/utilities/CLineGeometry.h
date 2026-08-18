#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CLineGeometry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToPath@CLineGeometry@@UEAAJPEBVCMILMatrix@@@Z
    virtual long AddToPath(CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLineGeometry@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@CLineGeometry@@UEAAJPEAUXRECTF_RB@@@Z
    virtual long GetBounds(XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionGeometry@CLineGeometry@@UEAAPEAUICompositionGeometry@Composition@UI@Windows@@PEAVVisualContentRenderer@@@Z
    virtual ::Windows::UI::Composition::ICompositionGeometry * GetCompositionGeometry(VisualContentRenderer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CLineGeometry@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrintGeometryVirtual@CLineGeometry@@MEAAJAEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@PEAPEAUIPALAcceleratedGeometry@@@Z
    virtual long GetPrintGeometryVirtual(D2DPrecomputeParams const &, D2DRenderParams const &, IPALAcceleratedGeometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisitSinkInternal@CLineGeometry@@MEAAJPEAUIPALGeometrySink@@@Z
    virtual long VisitSinkInternal(IPALGeometrySink *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CLineGeometry@@EEAAJXZ
    virtual long InitInstance();
};

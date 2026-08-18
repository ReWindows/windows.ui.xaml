#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CGeometryGroup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToPath@CGeometryGroup@@UEAAJPEBVCMILMatrix@@@Z
    virtual long AddToPath(CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CGeometryGroup@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CGeometryGroup@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrintGeometryVirtual@CGeometryGroup@@MEAAJAEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@PEAPEAUIPALAcceleratedGeometry@@@Z
    virtual long GetPrintGeometryVirtual(D2DPrecomputeParams const &, D2DRenderParams const &, IPALAcceleratedGeometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisitSinkInternal@CGeometryGroup@@MEAAJPEAUIPALGeometrySink@@@Z
    virtual long VisitSinkInternal(IPALGeometrySink *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionGeometry@CGeometryGroup@@EEAAPEAUICompositionGeometry@Composition@UI@Windows@@PEAVVisualContentRenderer@@@Z
    virtual ::Windows::UI::Composition::ICompositionGeometry * GetCompositionGeometry(VisualContentRenderer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CGeometryGroup@@EEAAJXZ
    virtual long InitInstance();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGeometryGroup@@EEAA@XZ
    virtual ~CGeometryGroup();
};

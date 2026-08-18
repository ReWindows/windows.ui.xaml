#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class CPathGeometry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToPath@CPathGeometry@@UEAAJPEBVCMILMatrix@@@Z
    virtual long AddToPath(CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPathGeometry@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawLines@CPathGeometry@@QEAAJPEBUXPOINTF@@II@Z
    long DrawLines(XPOINTF const *, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionGeometry@CPathGeometry@@UEAAPEAUICompositionGeometry@Composition@UI@Windows@@PEAVVisualContentRenderer@@@Z
    virtual ::Windows::UI::Composition::ICompositionGeometry * GetCompositionGeometry(VisualContentRenderer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CPathGeometry@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegeneratePathData@CPathGeometry@@UEAAJXZ
    virtual long RegeneratePathData();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrintGeometryVirtual@CPathGeometry@@MEAAJAEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@PEAPEAUIPALAcceleratedGeometry@@@Z
    virtual long GetPrintGeometryVirtual(D2DPrecomputeParams const &, D2DRenderParams const &, IPALAcceleratedGeometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisitSinkInternal@CPathGeometry@@MEAAJPEAUIPALGeometrySink@@@Z
    virtual long VisitSinkInternal(IPALGeometrySink *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseGeometry@CPathGeometry@@AEAAJPEAVCGeometryBuilder@@IPEBGH@Z
    long ParseGeometry(CGeometryBuilder *, unsigned int, unsigned short const *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPathGeometry@@EEAA@XZ
    virtual ~CPathGeometry();
};

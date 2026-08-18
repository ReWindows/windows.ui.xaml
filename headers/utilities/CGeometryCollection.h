#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CGeometryCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToPath@CGeometryCollection@@QEAAJPEBVCMILMatrix@@@Z
    long AddToPath(CMILMatrix const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrintGeometry@CGeometryCollection@@QEAAJAEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@W4XcpFillMode@@PEAPEAUIPALAcceleratedGeometry@@@Z
    long GetPrintGeometry(D2DPrecomputeParams const &, D2DRenderParams const &, int, IPALAcceleratedGeometry * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CGeometryCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisitSink@CGeometryCollection@@QEAAJPEAUIPALGeometrySink@@@Z
    long VisitSink(IPALGeometrySink *);
};

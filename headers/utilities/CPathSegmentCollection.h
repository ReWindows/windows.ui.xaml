#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CPathSegmentCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAcceleratedSegments@CPathSegmentCollection@@QEAAJPEAUIPALGeometrySink@@@Z
    long AddAcceleratedSegments(IPALGeometrySink *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToPath@CPathSegmentCollection@@QEAAJPEBVCMILMatrix@@@Z
    long AddToPath(CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPathSegmentCollection@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CPathSegmentCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
};

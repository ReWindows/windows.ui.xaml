#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CQuadraticSegment {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAcceleratedSegment@CQuadraticSegment@@UEAAJPEAUIPALGeometrySink@@@Z
    virtual long AddAcceleratedSegment(IPALGeometrySink *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToPath@CQuadraticSegment@@UEAAJPEBVCMILMatrix@@@Z
    virtual long AddToPath(CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CQuadraticSegment@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CQuadraticSegment@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
};

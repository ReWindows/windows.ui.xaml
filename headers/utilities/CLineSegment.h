#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CLineSegment {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAcceleratedSegment@CLineSegment@@UEAAJPEAUIPALGeometrySink@@@Z
    virtual long AddAcceleratedSegment(IPALGeometrySink *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToPath@CLineSegment@@UEAAJPEBVCMILMatrix@@@Z
    virtual long AddToPath(CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLineSegment@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CLineSegment@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
};

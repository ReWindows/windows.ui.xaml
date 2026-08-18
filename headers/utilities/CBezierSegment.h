#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CBezierSegment {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAcceleratedSegment@CBezierSegment@@UEAAJPEAUIPALGeometrySink@@@Z
    virtual long AddAcceleratedSegment(IPALGeometrySink *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToPath@CBezierSegment@@UEAAJPEBVCMILMatrix@@@Z
    virtual long AddToPath(CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CBezierSegment@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CBezierSegment@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
};

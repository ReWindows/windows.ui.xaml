#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CPolyBezierSegment {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAcceleratedSegment@CPolyBezierSegment@@UEAAJPEAUIPALGeometrySink@@@Z
    virtual long AddAcceleratedSegment(IPALGeometrySink *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToPath@CPolyBezierSegment@@UEAAJPEBVCMILMatrix@@@Z
    virtual long AddToPath(CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPolyBezierSegment@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CPolyBezierSegment@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPolyBezierSegment@@EEAA@XZ
    virtual ~CPolyBezierSegment();
};

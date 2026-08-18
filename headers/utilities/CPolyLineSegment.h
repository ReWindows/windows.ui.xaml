#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CPolyLineSegment {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAcceleratedSegment@CPolyLineSegment@@UEAAJPEAUIPALGeometrySink@@@Z
    virtual long AddAcceleratedSegment(IPALGeometrySink *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToPath@CPolyLineSegment@@UEAAJPEBVCMILMatrix@@@Z
    virtual long AddToPath(CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPolyLineSegment@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CPolyLineSegment@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPolyLineSegment@@EEAA@XZ
    virtual ~CPolyLineSegment();
};

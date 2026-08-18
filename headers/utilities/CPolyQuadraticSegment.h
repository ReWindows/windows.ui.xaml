#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CPolyQuadraticSegment {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAcceleratedSegment@CPolyQuadraticSegment@@UEAAJPEAUIPALGeometrySink@@@Z
    virtual long AddAcceleratedSegment(IPALGeometrySink *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToPath@CPolyQuadraticSegment@@UEAAJPEBVCMILMatrix@@@Z
    virtual long AddToPath(CMILMatrix const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CPolyQuadraticSegment@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPolyQuadraticSegment@@EEAA@XZ
    virtual ~CPolyQuadraticSegment();
};

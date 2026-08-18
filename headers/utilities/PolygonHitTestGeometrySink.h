#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class PolygonHitTestGeometrySink {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResult@PolygonHitTestGeometrySink@@UEAAJPEAI@Z
    virtual long GetResult(unsigned int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PolygonHitTestGeometrySink@@QEAA@AEBVHitTestPolygon@@MPEBVCMILMatrix@@@Z
    PolygonHitTestGeometrySink(HitTestPolygon const &, float, CMILMatrix const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PolygonHitTestGeometrySink@@UEAA@XZ
    virtual ~PolygonHitTestGeometrySink();
};

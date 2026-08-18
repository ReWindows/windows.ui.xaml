#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class PolygonHitTestHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResult@PolygonHitTestHelper@@UEAAJPEAI@Z
    virtual long GetResult(unsigned int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PolygonHitTestHelper@@QEAA@AEBVHitTestPolygon@@MPEBVCMILMatrix@@@Z
    PolygonHitTestHelper(HitTestPolygon const &, float, CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@PolygonHitTestHelper@@UEAAXXZ
    virtual void Reset();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PolygonHitTestHelper@@UEAA@XZ
    virtual ~PolygonHitTestHelper();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcceptPoint@PolygonHitTestHelper@@MEAAXAEBUXPOINTF@@@Z
    virtual void AcceptPoint(XPOINTF const &);
};

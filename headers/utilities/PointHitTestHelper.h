#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class PointHitTestHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResult@PointHitTestHelper@@UEAAJPEAI@Z
    virtual long GetResult(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@PointHitTestHelper@@UEAAXXZ
    virtual void Reset();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcceptPoint@PointHitTestHelper@@MEAAXAEBUXPOINTF@@@Z
    virtual void AcceptPoint(XPOINTF const &);
};

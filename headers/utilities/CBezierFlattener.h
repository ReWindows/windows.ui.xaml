#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CBezierFlattener {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBezierFlattener@@QEAA@PEAVCFlatteningSink@@M@Z
    CBezierFlattener(CFlatteningSink *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flatten@CBezierFlattener@@QEAAJH@Z
    long Flatten(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstTangent@CBezierFlattener@@QEBAJAEAUXPOINTF@@@Z
    long GetFirstTangent(XPOINTF &) const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HalveTheStep@CBezierFlattener@@IEAAXXZ
    void HalveTheStep();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Step@CBezierFlattener@@IEAAJAEAH@Z
    long Step(int &);
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CMatrix22 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finalize@CMatrix22@@QEAAIMAEAV1@@Z
    unsigned int Finalize(float, CMatrix22&);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInverseQuadratic@CMatrix22@@QEAAXAEAM00@Z
    void GetInverseQuadratic(float &, float &, float &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invert@CMatrix22@@QEAAJXZ
    long Invert();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIsotropic@CMatrix22@@QEBAHAEAM@Z
    int IsIsotropic(float &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Prepend@CMatrix22@@QEAAXPEBVCMILMatrix@@@Z
    void Prepend(CMILMatrix const *);
};

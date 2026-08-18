#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CTransformToRoot {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CTransformToRoot@@QEAAXAEBVCMILMatrix@@@Z
    void Append(CMILMatrix const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get2DTransformToRoot@CTransformToRoot@@QEBA?AVCMILMatrix@@PEAVCUIElement@@@Z
    CMILMatrix Get2DTransformToRoot(CUIElement *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaleDimensions@CTransformToRoot@@QEBAJPEAVCUIElement@@PEAM1@Z
    long GetScaleDimensions(CUIElement *, float *, float *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaleDimensions@CTransformToRoot@@QEBAXPEAUXSIZEF@@PEAM1@Z
    void GetScaleDimensions(XSIZEF *, float *, float *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSameAs@CTransformToRoot@@QEBAIPEBV1@@Z
    unsigned int IsSameAs(CTransformToRoot const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Prepend@CTransformToRoot@@QEAAXAEBVCMILMatrix@@@Z
    void Prepend(CMILMatrix const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Prepend@CTransformToRoot@@QEAAXAEBVCMILMatrix4x4@@@Z
    void Prepend(CMILMatrix4x4const &);
};

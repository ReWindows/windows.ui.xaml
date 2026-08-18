#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class CTransformer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get2DMatrix@CTransformer@@UEAA?AVCMILMatrix@@XZ
    virtual CMILMatrix Get2DMatrix();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get2DMatrixIgnore3D@CTransformer@@UEAA?AVCMILMatrix@@XZ
    virtual CMILMatrix Get2DMatrixIgnore3D();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPure2D@CTransformer@@UEAAIXZ
    virtual unsigned int IsPure2D();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformBounds@CTransformer@@SAJPEAUITransformer@@PEBUXRECTF_WH@@PEAU3@I@Z
    static long TransformBounds(ITransformer *, XRECTF_WH const *, XRECTF_WH *, unsigned int);
};

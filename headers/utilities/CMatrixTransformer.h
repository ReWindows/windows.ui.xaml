#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CMatrixTransformer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get2DMatrix@CMatrixTransformer@@UEAA?AVCMILMatrix@@XZ
    virtual CMILMatrix Get2DMatrix();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get2DMatrixIgnore3D@CMatrixTransformer@@UEAA?AVCMILMatrix@@XZ
    virtual CMILMatrix Get2DMatrixIgnore3D();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetType@CMatrixTransformer@@UEAA?AW4TransformerType@ITransformer@@XZ
    virtual int GetType();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsPure2D@CMatrixTransformer@@UEAAIXZ
    virtual unsigned int IsPure2D();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReverseTransform@CMatrixTransformer@@UEAAJPEBUXPOINTF@@PEAU2@I@Z
    virtual long ReverseTransform(XPOINTF const *, XPOINTF *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Transform@CMatrixTransformer@@UEAAJPEBUXPOINTF@@PEAU2@I@Z
    virtual long Transform(XPOINTF const *, XPOINTF *, unsigned int);
};

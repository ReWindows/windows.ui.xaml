#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CAggregateTransformer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CAggregateTransformer@@QEAAJPEAUITransformer@@@Z
    long Add(ITransformer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get2DMatrix@CAggregateTransformer@@UEAA?AVCMILMatrix@@XZ
    virtual CMILMatrix Get2DMatrix();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get2DMatrixIgnore3D@CAggregateTransformer@@UEAA?AVCMILMatrix@@XZ
    virtual CMILMatrix Get2DMatrixIgnore3D();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CAggregateTransformer@@UEAA?AW4TransformerType@ITransformer@@XZ
    virtual int GetType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPure2D@CAggregateTransformer@@UEAAIXZ
    virtual unsigned int IsPure2D();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReverseTransform@CAggregateTransformer@@UEAAJPEBUXPOINTF@@PEAU2@I@Z
    virtual long ReverseTransform(XPOINTF const *, XPOINTF *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Transform@CAggregateTransformer@@UEAAJPEBUXPOINTF@@PEAU2@I@Z
    virtual long Transform(XPOINTF const *, XPOINTF *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAggregateTransformer@@UEAA@XZ
    virtual ~CAggregateTransformer();
};

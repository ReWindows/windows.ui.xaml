#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CUpDownTransformer {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUpDownTransformer@@QEAA@PEAUITransformer@@0@Z
    CUpDownTransformer(ITransformer *, ITransformer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get2DMatrix@CUpDownTransformer@@UEAA?AVCMILMatrix@@XZ
    virtual CMILMatrix Get2DMatrix();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get2DMatrixIgnore3D@CUpDownTransformer@@UEAA?AVCMILMatrix@@XZ
    virtual CMILMatrix Get2DMatrixIgnore3D();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CUpDownTransformer@@UEAA?AW4TransformerType@ITransformer@@XZ
    virtual int GetType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPure2D@CUpDownTransformer@@UEAAIXZ
    virtual unsigned int IsPure2D();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReverseTransform@CUpDownTransformer@@UEAAJPEBUXPOINTF@@PEAU2@I@Z
    virtual long ReverseTransform(XPOINTF const *, XPOINTF *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Transform@CUpDownTransformer@@UEAAJPEBUXPOINTF@@PEAU2@I@Z
    virtual long Transform(XPOINTF const *, XPOINTF *, unsigned int);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUpDownTransformer@@MEAA@XZ
    virtual ~CUpDownTransformer();
};

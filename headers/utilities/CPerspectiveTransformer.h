#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CPerspectiveTransformer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CPerspectiveTransformer@@UEAA?AW4TransformerType@ITransformer@@XZ
    virtual int GetType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReverseTransform@CPerspectiveTransformer@@UEAAJPEBUXPOINTF@@PEAU2@I@Z
    virtual long ReverseTransform(XPOINTF const *, XPOINTF *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Transform@CPerspectiveTransformer@@UEAAJPEBUXPOINTF@@PEAU2@I@Z
    virtual long Transform(XPOINTF const *, XPOINTF *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformCheckW@CPerspectiveTransformer@@QEAAJPEBUXPOINTF@@PEAU2@IPEAI@Z
    long TransformCheckW(XPOINTF const *, XPOINTF *, unsigned int, unsigned int *);
};

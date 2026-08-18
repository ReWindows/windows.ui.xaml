#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CMatrix4x4 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CMatrix4x4@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CMatrix4x4@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromFloatArray@CMatrix4x4@@AEAAJPEAVCREATEPARAMETERS@@@Z
    long FromFloatArray(CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromString@CMatrix4x4@@AEAAJPEAVCREATEPARAMETERS@@@Z
    long FromString(CREATEPARAMETERS *);
};

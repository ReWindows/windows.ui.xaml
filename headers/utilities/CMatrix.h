#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CMatrix {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CMatrix@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CMatrix@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromString@CMatrix@@AEAAJPEAVCREATEPARAMETERS@@@Z
    long FromString(CREATEPARAMETERS *);
};

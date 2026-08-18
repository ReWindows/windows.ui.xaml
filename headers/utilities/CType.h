#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CType {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CType@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromString@CType@@QEAAJPEAVCREATEPARAMETERS@@@Z
    long FromString(CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CType@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
};

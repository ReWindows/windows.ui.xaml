#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CDependencyPropertyProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDependencyPropertyProxy@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromString@CDependencyPropertyProxy@@QEAAJPEAVCREATEPARAMETERS@@@Z
    long FromString(CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDP@CDependencyPropertyProxy@@QEAAPEBVCDependencyProperty@@XZ
    CDependencyProperty const * GetDP();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CDependencyPropertyProxy@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CPointer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPointer@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CPointer@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPointerFromPointerInfo@CPointer@@QEAAJUPointerInfo@@@Z
    long SetPointerFromPointerInfo(PointerInfo);
};

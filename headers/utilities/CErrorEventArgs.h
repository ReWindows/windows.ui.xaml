#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CErrorEventArgs {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CErrorEventArgs@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsErrorEventArgs@CErrorEventArgs@@UEBAIXZ
    virtual unsigned int IsErrorEventArgs() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateErrorMessage@CErrorEventArgs@@QEAAJH@Z
    long UpdateErrorMessage(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CErrorEventArgs@@UEAA@XZ
    virtual ~CErrorEventArgs();
};

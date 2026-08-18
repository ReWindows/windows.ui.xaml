#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CManagedGridProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CManagedGridProvider@@UEAAJHHPEAPEAVCAutomationPeer@@@Z
    virtual long GetItem(int, int, CAutomationPeer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedGridProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedGridProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ColumnCount@CManagedGridProvider@@UEAAJPEAH@Z
    virtual long get_ColumnCount(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RowCount@CManagedGridProvider@@UEAAJPEAH@Z
    virtual long get_RowCount(int *);
};

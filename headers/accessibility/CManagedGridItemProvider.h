#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class CManagedGridItemProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedGridItemProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedGridItemProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Column@CManagedGridItemProvider@@UEAAJPEAH@Z
    virtual long get_Column(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ColumnSpan@CManagedGridItemProvider@@UEAAJPEAH@Z
    virtual long get_ColumnSpan(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContainingGrid@CManagedGridItemProvider@@UEAAJPEAPEAVCAutomationPeer@@@Z
    virtual long get_ContainingGrid(CAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Row@CManagedGridItemProvider@@UEAAJPEAH@Z
    virtual long get_Row(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RowSpan@CManagedGridItemProvider@@UEAAJPEAH@Z
    virtual long get_RowSpan(int *);
};

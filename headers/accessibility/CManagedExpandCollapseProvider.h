#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CManagedExpandCollapseProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Collapse@CManagedExpandCollapseProvider@@UEAAJXZ
    virtual long Collapse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Expand@CManagedExpandCollapseProvider@@UEAAJXZ
    virtual long Expand();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedExpandCollapseProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedExpandCollapseProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExpandCollapseState@CManagedExpandCollapseProvider@@UEAAJPEAW4ExpandCollapseState@UIAXcp@@@Z
    virtual long get_ExpandCollapseState(int *);
};

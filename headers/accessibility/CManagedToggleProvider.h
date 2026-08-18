#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CManagedToggleProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedToggleProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedToggleProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Toggle@CManagedToggleProvider@@UEAAJXZ
    virtual long Toggle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ToggleState@CManagedToggleProvider@@UEAAJPEAW4ToggleState@UIAXcp@@@Z
    virtual long get_ToggleState(int *);
};

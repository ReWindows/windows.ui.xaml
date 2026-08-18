#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CManagedDockProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedDockProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedDockProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDockPosition@CManagedDockProvider@@UEAAJW4DockPosition@UIAXcp@@@Z
    virtual long SetDockPosition(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DockPosition@CManagedDockProvider@@UEAAJPEAW4DockPosition@UIAXcp@@@Z
    virtual long get_DockPosition(int *);
};

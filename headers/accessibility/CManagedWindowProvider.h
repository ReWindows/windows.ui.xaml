#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
class CManagedWindowProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CManagedWindowProvider@@UEAAJXZ
    virtual long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedWindowProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedWindowProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualState@CManagedWindowProvider@@UEAAJW4WindowVisualState@UIAXcp@@@Z
    virtual long SetVisualState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForInputIdle@CManagedWindowProvider@@UEAAJHPEAH@Z
    virtual long WaitForInputIdle(int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsModal@CManagedWindowProvider@@UEAAJPEAH@Z
    virtual long get_IsModal(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTopmost@CManagedWindowProvider@@UEAAJPEAH@Z
    virtual long get_IsTopmost(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Maximizable@CManagedWindowProvider@@UEAAJPEAH@Z
    virtual long get_Maximizable(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Minimizable@CManagedWindowProvider@@UEAAJPEAH@Z
    virtual long get_Minimizable(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowInteractionState@CManagedWindowProvider@@UEAAJPEAW4WindowInteractionState@UIAXcp@@@Z
    virtual long get_WindowInteractionState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowVisualState@CManagedWindowProvider@@UEAAJPEAW4WindowVisualState@UIAXcp@@@Z
    virtual long get_WindowVisualState(int *);
};

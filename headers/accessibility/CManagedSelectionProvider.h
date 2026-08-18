#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CManagedSelectionProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedSelectionProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPatternType@CManagedSelectionProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CManagedSelectionProvider@@UEAAJPEAHPEAPEAPEAVCAutomationPeer@@@Z
    virtual long GetSelection(int *, CAutomationPeer * * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanSelectMultiple@CManagedSelectionProvider@@UEAAJPEAH@Z
    virtual long get_CanSelectMultiple(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSelectionRequired@CManagedSelectionProvider@@UEAAJPEAH@Z
    virtual long get_IsSelectionRequired(int *);
};

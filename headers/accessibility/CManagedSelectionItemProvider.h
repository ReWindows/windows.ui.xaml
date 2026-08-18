#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class CManagedSelectionItemProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToSelection@CManagedSelectionItemProvider@@UEAAJXZ
    virtual long AddToSelection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedSelectionItemProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedSelectionItemProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromSelection@CManagedSelectionItemProvider@@UEAAJXZ
    virtual long RemoveFromSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@CManagedSelectionItemProvider@@UEAAJXZ
    virtual long Select();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSelected@CManagedSelectionItemProvider@@UEAAJPEAH@Z
    virtual long get_IsSelected(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionContainer@CManagedSelectionItemProvider@@UEAAJPEAPEAVCAutomationPeer@@@Z
    virtual long get_SelectionContainer(CAutomationPeer * *);
};

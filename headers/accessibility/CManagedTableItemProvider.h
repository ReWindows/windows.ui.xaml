#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CManagedTableItemProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnHeaderItems@CManagedTableItemProvider@@UEAAJPEAHPEAPEAPEAVCAutomationPeer@@@Z
    virtual long GetColumnHeaderItems(int *, CAutomationPeer * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedTableItemProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedTableItemProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowHeaderItems@CManagedTableItemProvider@@UEAAJPEAHPEAPEAPEAVCAutomationPeer@@@Z
    virtual long GetRowHeaderItems(int *, CAutomationPeer * * *);
};

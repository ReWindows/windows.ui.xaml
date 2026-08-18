#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CManagedSpreadsheetProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemByName@CManagedSpreadsheetProvider@@UEAAJAEBVxstring_ptr@@PEAPEAVCAutomationPeer@@@Z
    virtual long GetItemByName(xstring_ptr const &, CAutomationPeer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedSpreadsheetProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedSpreadsheetProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
};

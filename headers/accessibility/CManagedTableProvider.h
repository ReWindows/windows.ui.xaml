#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CManagedTableProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnHeaders@CManagedTableProvider@@UEAAJPEAHPEAPEAPEAVCAutomationPeer@@@Z
    virtual long GetColumnHeaders(int *, CAutomationPeer * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedTableProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedTableProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowHeaders@CManagedTableProvider@@UEAAJPEAHPEAPEAPEAVCAutomationPeer@@@Z
    virtual long GetRowHeaders(int *, CAutomationPeer * * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RowOrColumnMajor@CManagedTableProvider@@UEAAJPEAW4RowOrColumnMajor@UIAXcp@@@Z
    virtual long get_RowOrColumnMajor(int *);
};

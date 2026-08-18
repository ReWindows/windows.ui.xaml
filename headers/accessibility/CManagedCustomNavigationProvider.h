#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CManagedCustomNavigationProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedCustomNavigationProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedCustomNavigationProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateCustom@CManagedCustomNavigationProvider@@UEAAJW4AutomationNavigationDirection@UIAXcp@@PEAPEAVCAutomationPeer@@PEAPEAUIUnknown@@@Z
    virtual long NavigateCustom(int, CAutomationPeer * *, IUnknown * *);
};

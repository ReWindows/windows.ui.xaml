#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CManagedItemContainerProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindItemByProperty@CManagedItemContainerProvider@@UEAAJPEAVCAutomationPeer@@W4APAutomationProperties@UIAXcp@@AEAVCValue@@PEAPEAV2@@Z
    virtual long FindItemByProperty(CAutomationPeer *, int, CValue &, CAutomationPeer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedItemContainerProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedItemContainerProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CManagedSynchronizedInputProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@CManagedSynchronizedInputProvider@@UEAAJXZ
    virtual long Cancel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternInterface@CManagedSynchronizedInputProvider@@UEAAPEAXXZ
    virtual void * GetPatternInterface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternType@CManagedSynchronizedInputProvider@@UEAA?AW4APPatternInterface@UIAXcp@@XZ
    virtual int GetPatternType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartListening@CManagedSynchronizedInputProvider@@UEAAJW4SynchronizedInputType@UIAXcp@@@Z
    virtual long StartListening(int);
};

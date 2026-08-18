#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class InkCommitProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentBatch@InkCommitProvider@@UEAAJPEAK@Z
    virtual long GetCurrentBatch(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastConfirmedBatch@InkCommitProvider@@UEAAJPEAK@Z
    virtual long GetLastConfirmedBatch(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestCommitAsync@InkCommitProvider@@UEAAJXZ
    virtual long RequestCommitAsync();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckThread@InkCommitProvider@@AEAAJXZ
    long CheckThread();
};

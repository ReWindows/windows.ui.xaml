#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class CDeferredElementStorage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendDeferredElement@CDeferredElementStorage@@QEAAJPEAVCDeferredElement@@I@Z
    long AppendDeferredElement(CDeferredElement *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateRealizedElementInsertionIndex@CDeferredElementStorage@@QEAAIPEAVCDeferredElement@@@Z
    unsigned int CalculateRealizedElementInsertionIndex(CDeferredElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectionCleared@CDeferredElementStorage@@UEAAJXZ
    virtual long CollectionCleared();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ElementInserted@CDeferredElementStorage@@UEAAJI@Z
    virtual long ElementInserted(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ElementMoved@CDeferredElementStorage@@UEAAJII@Z
    virtual long ElementMoved(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ElementRemoved@CDeferredElementStorage@@UEAAJI@Z
    virtual long ElementRemoved(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterUnrealizedProxies@CDeferredElementStorage@@QEAAJXZ
    long RegisterUnrealizedProxies();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterUnrealizedProxies@CDeferredElementStorage@@QEAAJXZ
    long UnregisterUnrealizedProxies();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDeferredElementStorage@@UEAA@XZ
    virtual ~CDeferredElementStorage();
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CMappedMemory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMappedMemory@@UEBAIXZ
    virtual unsigned int AddRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAddress@CMappedMemory@@UEBAPEAXXZ
    virtual void * GetAddress() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CMappedMemory@@UEBAIXZ
    virtual unsigned int GetSize() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMappedMemory@@UEBAIXZ
    virtual unsigned int Release() const;
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMappedMemory@@EEAA@XZ
    virtual ~CMappedMemory();
};

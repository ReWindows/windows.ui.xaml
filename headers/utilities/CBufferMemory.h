#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CBufferMemory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBufferMemory@@UEBAIXZ
    virtual unsigned int AddRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAddress@CBufferMemory@@UEBAPEAXXZ
    virtual void * GetAddress() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CBufferMemory@@UEBAIXZ
    virtual unsigned int GetSize() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBufferMemory@@UEBAIXZ
    virtual unsigned int Release() const;
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBufferMemory@@EEAA@XZ
    virtual ~CBufferMemory();
};

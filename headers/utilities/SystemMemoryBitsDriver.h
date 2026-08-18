#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class SystemMemoryBitsDriver {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureMapped@SystemMemoryBitsDriver@@QEAAJI@Z
    long EnsureMapped(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureUnmapped@SystemMemoryBitsDriver@@QEAAXXZ
    void EnsureUnmapped();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBits@SystemMemoryBitsDriver@@UEAAPEAXXZ
    virtual void * GetBits();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStride@SystemMemoryBitsDriver@@UEAAIXZ
    virtual unsigned int GetStride();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDriverVisible@SystemMemoryBitsDriver@@UEAAIXZ
    virtual unsigned int IsDriverVisible();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SystemMemoryBitsDriver@@UEAA@XZ
    virtual ~SystemMemoryBitsDriver();
};

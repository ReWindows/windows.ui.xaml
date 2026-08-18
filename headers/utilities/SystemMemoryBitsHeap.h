#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class SystemMemoryBitsHeap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@SystemMemoryBitsHeap@@SAJIIW4DXGI_FORMAT@@PEAPEAVSystemMemoryBits@@@Z
    static long Create(unsigned int, unsigned int, int, SystemMemoryBits * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBits@SystemMemoryBitsHeap@@UEAAPEAXXZ
    virtual void * GetBits();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStride@SystemMemoryBitsHeap@@UEAAIXZ
    virtual unsigned int GetStride();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDriverVisible@SystemMemoryBitsHeap@@UEAAIXZ
    virtual unsigned int IsDriverVisible();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SystemMemoryBitsHeap@@UEAA@XZ
    virtual ~SystemMemoryBitsHeap();
};

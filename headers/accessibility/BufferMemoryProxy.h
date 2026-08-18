#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class BufferMemoryProxy {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@BufferMemoryProxy@@UEBAPEBEXZ
    virtual unsigned char const * GetData() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@BufferMemoryProxy@@UEBA_KXZ
    virtual uint64_t GetSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBuffer@BufferMemoryProxy@@QEAAJV?$ComPtr@UIBuffer@Streams@Storage@Windows@@@WRL@Microsoft@@@Z
    long SetBuffer(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BufferMemoryProxy@@UEAA@XZ
    virtual ~BufferMemoryProxy();
};

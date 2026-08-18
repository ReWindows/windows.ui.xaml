#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class StreamBufferMemory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StreamBufferMemory@@UEBAIXZ
    virtual unsigned int AddRef() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@StreamBufferMemory@@SAJAEAV?$ComPtr@UIStream@@@WRL@Microsoft@@PEAPEAUIPALMemory@@@Z
    static long Create(WindissectOpaque &, IPALMemory * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAddress@StreamBufferMemory@@UEBAPEAXXZ
    virtual void * GetAddress() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@StreamBufferMemory@@UEBAIXZ
    virtual unsigned int GetSize() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StreamBufferMemory@@UEBAIXZ
    virtual unsigned int Release() const;
};

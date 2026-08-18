#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class FileMappedMemory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@FileMappedMemory@@UEBAIXZ
    virtual unsigned int AddRef() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@FileMappedMemory@@SAJAEBVxstring_ptr@@PEAPEAUIPALMemory@@@Z
    static long Create(xstring_ptr const &, IPALMemory * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAddress@FileMappedMemory@@UEBAPEAXXZ
    virtual void * GetAddress() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@FileMappedMemory@@UEBAIXZ
    virtual unsigned int GetSize() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@FileMappedMemory@@UEBAIXZ
    virtual unsigned int Release() const;
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FileMappedMemory@@AEAA@XZ
    ~FileMappedMemory();
};

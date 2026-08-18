#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CSharedName {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSharedName@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSharedName@@SAJAEBVxstring_ptr_view@@PEAPEAU1@@Z
    static long Create(xstring_ptr_view const &, CSharedName * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EqualKeys@CSharedName@@QEBA_NAEBU1@@Z
    bool EqualKeys(CSharedName const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHash@CSharedName@@QEBAIXZ
    unsigned int GetHash() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSharedName@@UEAAIXZ
    virtual unsigned int Release();
};

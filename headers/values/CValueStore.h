#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CValueStore {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CValueStore@@UEAAJAEBVxstring_ptr_view@@PEAPEAX@Z
    virtual long GetValue(xstring_ptr_view const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutValue@CValueStore@@UEAAJAEBVxstring_ptr_view@@PEAX@Z
    virtual long PutValue(xstring_ptr_view const &, void *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CValueStore@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCleanupNotifier@CValueStore@@UEAAJP6AXPEAX0@Z@Z
    virtual long SetCleanupNotifier(void ( *)(void *, void *));
    // Category: Method | Source: PDB Internal
    // Symbol: ?Traverse@CValueStore@@QEAAJP6AXAEBVxstring_ptr@@PEAX1@Z1@Z
    long Traverse(void ( *)(xstring_ptr const &, void *, void *), void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CValueStore@@QEAA@XZ
    ~CValueStore();
};

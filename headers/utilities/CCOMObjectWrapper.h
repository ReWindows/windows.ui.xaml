#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CCOMObjectWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCOMObjectWrapper@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCOMObjectWrapper@@SAJPEAUIUnknown@@PEAPEAV1@@Z
    static long Create(IUnknown *, CCOMObjectWrapper * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCOMObjectWrapper@@UEAAIXZ
    virtual unsigned int Release();
};

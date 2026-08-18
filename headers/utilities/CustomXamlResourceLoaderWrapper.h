#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CustomXamlResourceLoaderWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CustomXamlResourceLoaderWrapper@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResource@CustomXamlResourceLoaderWrapper@@UEAAJAEBVxstring_ptr@@000PEAVCValue@@@Z
    virtual long GetResource(xstring_ptr const &, xstring_ptr const &, xstring_ptr const &, xstring_ptr const &, CValue *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CustomXamlResourceLoaderWrapper@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CustomXamlResourceLoaderWrapper@@UEAA@XZ
    virtual ~CustomXamlResourceLoaderWrapper();
};

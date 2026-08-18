#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class XamlPropertyName {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XamlPropertyName@@QEAA@AEBVxstring_ptr@@0@Z
    XamlPropertyName(xstring_ptr const &, xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OwnerName@XamlPropertyName@@QEAAJPEAVxstring_ptr@@@Z
    long get_OwnerName(xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScopedName@XamlPropertyName@@UEAAJPEAVxstring_ptr@@@Z
    virtual long get_ScopedName(xstring_ptr *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlPropertyName@@UEAA@XZ
    virtual ~XamlPropertyName();
};

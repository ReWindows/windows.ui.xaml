#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class XamlType {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FullName@XamlType@@QEAAJPEAVxstring_ptr@@@Z
    long get_FullName(xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@XamlType@@QEAAJPEAVxstring_ptr@@@Z
    long get_Name(xstring_ptr *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlType@@UEAA@XZ
    virtual ~XamlType();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDependencyPropertyToCache@XamlType@@AEAAJAEBVxstring_ptr@@AEAUXamlPropertyAndTypeToken@@@Z
    long AddDependencyPropertyToCache(xstring_ptr const &, XamlPropertyAndTypeToken &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoolTypeBit@XamlType@@AEAAJW4BoolTypeBits@@AEAI@Z
    long GetBoolTypeBit(int, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrieveBoolTypeBits@XamlType@@AEAAJAEBV?$XamlBitSet@W4BoolTypeBits@@@@@Z
    long RetrieveBoolTypeBits(WindissectOpaque const &);
};

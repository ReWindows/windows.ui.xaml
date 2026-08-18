#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class xencoded_string_ptr {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferAndCount@xencoded_string_ptr@@QEBAPEBGPEAI@Z
    unsigned short const * GetBufferAndCount(unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNull@xencoded_string_ptr@@QEBA_NXZ
    bool IsNull() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNullOrEmpty@xencoded_string_ptr@@QEBA_NXZ
    bool IsNullOrEmpty() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@xencoded_string_ptr@@QEAAXXZ
    void Reset();
};

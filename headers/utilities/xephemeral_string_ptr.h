#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class xephemeral_string_ptr {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Decode@xephemeral_string_ptr@@SAXAEBUxencoded_string_ptr@@PEAV1@@Z
    static void Decode(xencoded_string_ptr const &, xephemeral_string_ptr *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0xephemeral_string_ptr@@QEAA@PEBGI@Z
    xephemeral_string_ptr(unsigned short const *, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0xephemeral_string_ptr@@QEAA@PEAUHSTRING__@@@Z
    xephemeral_string_ptr(HSTRING__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0xephemeral_string_ptr@@QEAA@XZ
    xephemeral_string_ptr();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1xephemeral_string_ptr@@QEAA@XZ
    ~xephemeral_string_ptr();
};

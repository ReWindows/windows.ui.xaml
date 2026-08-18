#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class AutoBstr {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Free@AutoBstr@DirectUI@@QEAAXXZ
    void Free();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeAndGetAddressOf@AutoBstr@DirectUI@@QEAAPEAPEAGXZ
    unsigned short * * FreeAndGetAddressOf();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@AutoBstr@DirectUI@@QEAAHXZ
    int IsEmpty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToXStringPtr@AutoBstr@DirectUI@@QEAAJPEAVxstring_ptr@@@Z
    long ToXStringPtr(xstring_ptr *);
};
} // namespace DirectUI

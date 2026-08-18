#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
namespace DirectUI {
class GITHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInterfaceFromGlobal@GITHelper@DirectUI@@QEAAJKAEBU_GUID@@PEAPEAX@Z
    long GetInterfaceFromGlobal(unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterInterfaceInGlobal@GITHelper@DirectUI@@QEAAJPEAUIUnknown@@AEBU_GUID@@PEAK@Z
    long RegisterInterfaceInGlobal(IUnknown *, _GUID const &, unsigned long *);
};
} // namespace DirectUI

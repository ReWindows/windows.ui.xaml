#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class AutoReentrantReferenceLock {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AutoReentrantReferenceLock@DirectUI@@QEAA@PEAUIPeerTableHost@1@@Z
    AutoReentrantReferenceLock(::DirectUI::IPeerTableHost *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEntered@AutoReentrantReferenceLock@DirectUI@@SAIXZ
    static unsigned int IsEntered();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AutoReentrantReferenceLock@DirectUI@@QEAA@XZ
    ~AutoReentrantReferenceLock();
};
} // namespace DirectUI

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class VisualStateManagerBatchContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToState@VisualStateManagerBatchContext@DirectUI@@QEAAJEPEBG_KPEAE@Z
    long GoToState(unsigned char, unsigned short const *, uint64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToStateWithFallback@VisualStateManagerBatchContext@DirectUI@@QEAAJ_NEPEBG_K12PEAE@Z
    long GoToStateWithFallback(bool, unsigned char, unsigned short const *, uint64_t, unsigned short const *, uint64_t, unsigned char *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@VisualStateManagerBatchContext@DirectUI@@AEAAJXZ
    long Initialize();
};
} // namespace DirectUI

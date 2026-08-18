#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI::ModernCollectionBasePanel {
class TransitionContextManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionContext@TransitionContextManager@ModernCollectionBasePanel@DirectUI@@QEAAJHEPEAW4ThemeTransitionContext@3@@Z
    long GetTransitionContext(int, unsigned char, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfItemsChanging@TransitionContextManager@ModernCollectionBasePanel@DirectUI@@QEAAJW4CollectionChange@Collections@Foundation@Windows@@@Z
    long NotifyOfItemsChanging(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateContextCounters@TransitionContextManager@ModernCollectionBasePanel@DirectUI@@AEAAJ_N@Z
    long UpdateContextCounters(bool);
};
} // namespace DirectUI::ModernCollectionBasePanel

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI::ModernCollectionBasePanel {
class CollectionIterator {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CollectionIterator@ModernCollectionBasePanel@DirectUI@@QEAA@AEBVCacheManager@12@@Z
    CollectionIterator(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CollectionIterator@ModernCollectionBasePanel@DirectUI@@QEAAXHW4ElementType@Controls@Xaml@UI@Windows@@@Z
    void Init(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@CollectionIterator@ModernCollectionBasePanel@DirectUI@@QEAAEXZ
    unsigned char MoveNext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MovePrevious@CollectionIterator@ModernCollectionBasePanel@DirectUI@@QEAAEXZ
    unsigned char MovePrevious();
};
} // namespace DirectUI::ModernCollectionBasePanel

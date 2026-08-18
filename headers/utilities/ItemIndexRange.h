#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class ItemIndexRange {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendItemIndexRangeToItemIndexRangeCollection@ItemIndexRange@DirectUI@@SAJHIPEAV?$TrackerCollection@PEAVItemIndexRange@Data@Xaml@UI@Windows@@@2@@Z
    static long AppendItemIndexRangeToItemIndexRangeCollection(int, unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreItemIndexRangeCollectionsEqual@ItemIndexRange@DirectUI@@SAJPEAV?$TrackerCollection@PEAVItemIndexRange@Data@Xaml@UI@Windows@@@2@0PEA_N@Z
    static long AreItemIndexRangeCollectionsEqual(WindissectOpaque *, WindissectOpaque *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreItemIndexRangesEqual@ItemIndexRange@DirectUI@@SAJPEAUIItemIndexRange@Data@Xaml@UI@Windows@@0PEA_N@Z
    static long AreItemIndexRangesEqual(::Windows::UI::Xaml::Data::IItemIndexRange *, ::Windows::UI::Xaml::Data::IItemIndexRange *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastIndexImpl@ItemIndexRange@DirectUI@@QEAAJPEAH@Z
    long get_LastIndexImpl(int *);
};
} // namespace DirectUI

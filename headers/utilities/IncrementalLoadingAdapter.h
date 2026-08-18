#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class IncrementalLoadingAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsIncrementalLoading@IncrementalLoadingAdapter@DirectUI@@SAPEAUISupportIncrementalLoading@Data@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    static ::Windows::UI::Xaml::Data::ISupportIncrementalLoading * AsIncrementalLoading(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadMoreItemsAsync@IncrementalLoadingAdapter@DirectUI@@UEAAJIPEAPEAU?$IAsyncOperation@ULoadMoreItemsResult@Data@Xaml@UI@Windows@@@Foundation@Windows@@@Z
    virtual long LoadMoreItemsAsync(unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsIncrementalLoading@IncrementalLoadingAdapter@DirectUI@@SAIPEAUIInspectable@@@Z
    static unsigned int SupportsIncrementalLoading(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasMoreItems@IncrementalLoadingAdapter@DirectUI@@UEAAJPEAE@Z
    virtual long get_HasMoreItems(unsigned char *);
};
} // namespace DirectUI

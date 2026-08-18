#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
namespace DirectUI {
class ItemsWrapGrid {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogicalOrientation@ItemsWrapGrid@DirectUI@@UEAAJPEAW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual long get_LogicalOrientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PhysicalOrientation@ItemsWrapGrid@DirectUI@@UEAAJPEAW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual long get_PhysicalOrientation(int *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsPerPageImpl@ItemsWrapGrid@DirectUI@@MEAAJURect@Foundation@Windows@@PEAN@Z
    virtual long GetItemsPerPageImpl(WindissectOpaque, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialGroupIndex@ItemsWrapGrid@DirectUI@@MEAAJPEAH@Z
    virtual long GetSpecialGroupIndex(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialItemIndex@ItemsWrapGrid@DirectUI@@MEAAJPEAH@Z
    virtual long GetSpecialItemIndex(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ItemsWrapGrid@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPortallingSupported@ItemsWrapGrid@DirectUI@@MEAAEXZ
    virtual unsigned char IsPortallingSupported();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsSpecialGroup@ItemsWrapGrid@DirectUI@@MEAAJPEA_N@Z
    virtual long NeedsSpecialGroup(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsSpecialItem@ItemsWrapGrid@DirectUI@@MEAAJPEA_N@Z
    virtual long NeedsSpecialItem(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChangeProcessed@ItemsWrapGrid@DirectUI@@MEAAJXZ
    virtual long OnCollectionChangeProcessed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@ItemsWrapGrid@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSpecialContainerSize@ItemsWrapGrid@DirectUI@@MEAAJHUSize@Foundation@Windows@@@Z
    virtual long RegisterSpecialContainerSize(int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSpecialHeaderSize@ItemsWrapGrid@DirectUI@@MEAAJHUSize@Foundation@Windows@@@Z
    virtual long RegisterSpecialHeaderSize(int, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGroupHeaderStrategy@ItemsWrapGrid@DirectUI@@MEAAJW4GroupHeaderStrategy@2@@Z
    virtual long SetGroupHeaderStrategy(int);
};
} // namespace DirectUI

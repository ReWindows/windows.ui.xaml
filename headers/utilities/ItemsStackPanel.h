#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class ItemsStackPanel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogicalOrientation@ItemsStackPanel@DirectUI@@UEAAJPEAW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual long get_LogicalOrientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PhysicalOrientation@ItemsStackPanel@DirectUI@@UEAAJPEAW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual long get_PhysicalOrientation(int *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsUpdatingScrollMode@ItemsStackPanel@DirectUI@@MEBA?AW4ItemsUpdatingScrollMode@2@XZ
    virtual int GetItemsUpdatingScrollMode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialGroupIndex@ItemsStackPanel@DirectUI@@MEAAJPEAH@Z
    virtual long GetSpecialGroupIndex(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialItemIndex@ItemsStackPanel@DirectUI@@MEAAJPEAH@Z
    virtual long GetSpecialItemIndex(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ItemsStackPanel@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsSpecialGroup@ItemsStackPanel@DirectUI@@MEAAJPEA_N@Z
    virtual long NeedsSpecialGroup(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsSpecialItem@ItemsStackPanel@DirectUI@@MEAAJPEA_N@Z
    virtual long NeedsSpecialItem(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@ItemsStackPanel@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSpecialContainerSize@ItemsStackPanel@DirectUI@@MEAAJHUSize@Foundation@Windows@@@Z
    virtual long RegisterSpecialContainerSize(int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSpecialHeaderSize@ItemsStackPanel@DirectUI@@MEAAJHUSize@Foundation@Windows@@@Z
    virtual long RegisterSpecialHeaderSize(int, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGroupHeaderStrategy@ItemsStackPanel@DirectUI@@MEAAJW4GroupHeaderStrategy@2@@Z
    virtual long SetGroupHeaderStrategy(int);
};
} // namespace DirectUI

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class CollectionViewManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVectorFromSource@CollectionViewManager@DirectUI@@SAJPEAUIInspectable@@PEAPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    static long GetVectorFromSource(IInspectable *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewRecord@CollectionViewManager@DirectUI@@SAJPEAUIInspectable@@PEAUICollectionViewSource@Data@Xaml@UI@Windows@@PEAPEAUICollectionView@5678@@Z
    static long GetViewRecord(IInspectable *, ::Windows::UI::Xaml::Data::ICollectionViewSource *, ::Windows::UI::Xaml::Data::ICollectionView * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGroupedView@CollectionViewManager@DirectUI@@CAJPEAUIInspectable@@PEAUIPropertyPath@Xaml@UI@Windows@@PEAPEAUICollectionView@Data@567@@Z
    static long CreateGroupedView(IInspectable *, ::Windows::UI::Xaml::IPropertyPath *, ::Windows::UI::Xaml::Data::ICollectionView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewView@CollectionViewManager@DirectUI@@CAJPEAUIInspectable@@PEAPEAUICollectionView@Data@Xaml@UI@Windows@@@Z
    static long CreateNewView(IInspectable *, ::Windows::UI::Xaml::Data::ICollectionView * *);
};
} // namespace DirectUI

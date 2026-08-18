#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class CollectionViewGroup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearOwner@CollectionViewGroup@DirectUI@@QEAAXXZ
    void ClearOwner();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomPropertyImpl@CollectionViewGroup@DirectUI@@QEAAJPEAUHSTRING__@@PEAPEAUICustomProperty@Data@Xaml@UI@Windows@@@Z
    long GetCustomPropertyImpl(HSTRING__*, ::Windows::UI::Xaml::Data::ICustomProperty * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSource@CollectionViewGroup@DirectUI@@QEAAJPEAUIInspectable@@0PEAVGroupedDataCollectionView@2@@Z
    long SetSource(IInspectable *, IInspectable *, ::DirectUI::GroupedDataCollectionView *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CollectionViewGroup@DirectUI@@UEAA@XZ
    virtual ~CollectionViewGroup();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupItemsPropertyValue@CollectionViewGroup@DirectUI@@CAJPEAUIInspectable@@PEAPEAU3@@Z
    static long GetGroupItemsPropertyValue(IInspectable *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupPropertyValue@CollectionViewGroup@DirectUI@@CAJPEAUIInspectable@@PEAPEAU3@@Z
    static long GetGroupPropertyValue(IInspectable *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObservableVector@CollectionViewGroup@DirectUI@@AEAAJPEAUIInspectable@@PEAPEAU?$IObservableVector@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAI@Z
    long GetObservableVector(IInspectable *, WindissectOpaque * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsVectorChanged@CollectionViewGroup@DirectUI@@AEAAJPEAUIVectorChangedEventArgs@Collections@Foundation@Windows@@@Z
    long OnItemsVectorChanged(WindissectOpaque *);
};
} // namespace DirectUI

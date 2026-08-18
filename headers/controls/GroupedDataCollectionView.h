#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 29 member(s).
namespace DirectUI {
class GroupedDataCollectionView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@GroupedDataCollectionView@DirectUI@@SAJPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAUIPropertyPath@Xaml@UI@6@PEAPEAUICollectionView@Data@896@@Z
    static long CreateInstance(WindissectOpaque *, ::Windows::UI::Xaml::IPropertyPath *, ::Windows::UI::Xaml::Data::ICollectionView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@GroupedDataCollectionView@DirectUI@@UEAAJPEAPEAU?$IIterator@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@GroupedDataCollectionView@DirectUI@@UEAAJIPEAPEAUIInspectable@@@Z
    virtual long GetAt(unsigned int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTraceString@GroupedDataCollectionView@DirectUI@@UEAAJPEAPEBG@Z
    virtual long GetTraceString(unsigned short const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@GroupedDataCollectionView@DirectUI@@UEAAJPEAPEAU?$IVectorView@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long GetView(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@GroupedDataCollectionView@DirectUI@@UEAAJPEAUIInspectable@@PEAIPEAE@Z
    virtual long IndexOf(IInspectable *, unsigned int *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGroupItemsChanged@GroupedDataCollectionView@DirectUI@@QEAAJPEAUICollectionViewGroup@Data@Xaml@UI@Windows@@PEAUIVectorChangedEventArgs@Collections@Foundation@7@@Z
    long OnGroupItemsChanged(::Windows::UI::Xaml::Data::ICollectionViewGroup *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SourceChanged@GroupedDataCollectionView@DirectUI@@UEAAJXZ
    virtual long SourceChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CollectionGroupsImpl@GroupedDataCollectionView@DirectUI@@UEAAJPEAPEAU?$IObservableVector@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long get_CollectionGroupsImpl(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@GroupedDataCollectionView@DirectUI@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GroupedDataCollectionView@DirectUI@@IEAA@XZ
    GroupedDataCollectionView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSource@GroupedDataCollectionView@DirectUI@@IEAAJPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAUIPropertyPath@Xaml@UI@6@@Z
    long SetSource(WindissectOpaque *, ::Windows::UI::Xaml::IPropertyPath *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GroupedDataCollectionView@DirectUI@@MEAA@XZ
    virtual ~GroupedDataCollectionView();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateCollectionViewGroup@GroupedDataCollectionView@DirectUI@@AEAAJPEAUIInspectable@@PEAPEAUICollectionViewGroup@Data@Xaml@UI@Windows@@@Z
    long CalculateCollectionViewGroup(IInspectable *, ::Windows::UI::Xaml::Data::ICollectionViewGroup * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateCount@GroupedDataCollectionView@DirectUI@@AEAAJPEAI@Z
    long CalculateCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateGroups@GroupedDataCollectionView@DirectUI@@AEAAJXZ
    long CalculateGroups();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearGroupsOwner@GroupedDataCollectionView@DirectUI@@AEAAXXZ
    void ClearGroupsOwner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePropertyPathListener@GroupedDataCollectionView@DirectUI@@AEAAJPEAUIPropertyPath@Xaml@UI@Windows@@@Z
    long CreatePropertyPathListener(::Windows::UI::Xaml::IPropertyPath *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseIndexOfGroup@GroupedDataCollectionView@DirectUI@@AEAAJIPEAI@Z
    long GetBaseIndexOfGroup(unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupAt@GroupedDataCollectionView@DirectUI@@AEAAJIPEAPEAUICollectionViewGroup@Data@Xaml@UI@Windows@@@Z
    long GetGroupAt(unsigned int, ::Windows::UI::Xaml::Data::ICollectionViewGroup * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupItem@GroupedDataCollectionView@DirectUI@@AEAAJPEAUICollectionViewGroup@Data@Xaml@UI@Windows@@IPEAPEAUIInspectable@@@Z
    long GetGroupItem(::Windows::UI::Xaml::Data::ICollectionViewGroup *, unsigned int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupItems@GroupedDataCollectionView@DirectUI@@AEAAJPEAUICollectionViewGroup@Data@Xaml@UI@Windows@@PEAPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@7@@Z
    long GetGroupItems(::Windows::UI::Xaml::Data::ICollectionViewGroup *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupSize@GroupedDataCollectionView@DirectUI@@AEAAJPEAUICollectionViewGroup@Data@Xaml@UI@Windows@@PEAI@Z
    long GetGroupSize(::Windows::UI::Xaml::Data::ICollectionViewGroup *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfGroupChange@GroupedDataCollectionView@DirectUI@@AEAAJIW4CollectionChange@Collections@Foundation@Windows@@PEAUICollectionViewGroup@Data@Xaml@UI@6@@Z
    long NotifyOfGroupChange(unsigned int, int, ::Windows::UI::Xaml::Data::ICollectionViewGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfItemChange@GroupedDataCollectionView@DirectUI@@AEAAJIW4CollectionChange@Collections@Foundation@Windows@@@Z
    long NotifyOfItemChange(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGroupsChange@GroupedDataCollectionView@DirectUI@@AEAAJPEAUIVectorChangedEventArgs@Collections@Foundation@Windows@@@Z
    long OnGroupsChange(WindissectOpaque *);
};
} // namespace DirectUI

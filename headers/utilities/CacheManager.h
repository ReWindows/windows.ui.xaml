#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 24 member(s).
namespace DirectUI::ModernCollectionBasePanel {
class CacheManager {
public:
    class StrongRefLifetime;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CacheManager@ModernCollectionBasePanel@DirectUI@@QEAA@PEAV12@@Z
    CacheManager(::DirectUI::ModernCollectionBasePanel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheStrongRefs@CacheManager@ModernCollectionBasePanel@DirectUI@@QEAA?AVStrongRefLifetime@123@PEAJ@Z
    WindissectOpaque CacheStrongRefs(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DataIndexToLayoutIndex@CacheManager@ModernCollectionBasePanel@DirectUI@@QEBAHW4ElementType@Controls@Xaml@UI@Windows@@H@Z
    int DataIndexToLayoutIndex(int, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildren@CacheManager@ModernCollectionBasePanel@DirectUI@@QEBAJPEAV?$ComPtr@U?$IVector@PEAVUIElement@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@ctl@@@Z
    long GetChildren(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerRecyclingContext@CacheManager@ModernCollectionBasePanel@DirectUI@@QEAAJIPEAPEAUIContainerRecyclingContext@3@@Z
    long GetContainerRecyclingContext(unsigned int, ::DirectUI::IContainerRecyclingContext * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroup@CacheManager@ModernCollectionBasePanel@DirectUI@@QEAAJHPEAPEAUICollectionViewGroup@Data@Xaml@UI@Windows@@@Z
    long GetGroup(int, ::Windows::UI::Xaml::Data::ICollectionViewGroup * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupHistoryInformationFromItemIndex@CacheManager@ModernCollectionBasePanel@DirectUI@@QEBAJHPEAH00@Z
    long GetGroupHistoryInformationFromItemIndex(int, int *, int *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupInformationFromGroupIndex@CacheManager@ModernCollectionBasePanel@DirectUI@@QEBAJHPEAH0@Z
    long GetGroupInformationFromGroupIndex(int, int *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupInformationFromItemIndex@CacheManager@ModernCollectionBasePanel@DirectUI@@QEBAJHPEAH00@Z
    long GetGroupInformationFromItemIndex(int, int *, int *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndex@CacheManager@ModernCollectionBasePanel@DirectUI@@QEAAJPEAUIInspectable@@PEAIPEA_N2@Z
    long GetIndex(IInspectable *, unsigned int *, bool *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CacheManager@ModernCollectionBasePanel@DirectUI@@QEAAJHPEAPEAUIInspectable@@@Z
    long GetItem(int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsHost@CacheManager@ModernCollectionBasePanel@DirectUI@@QEBAJPEAV?$ComPtr@UIGeneratorHost@DirectUI@@@ctl@@@Z
    long GetItemsHost(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastElementInLayout@CacheManager@ModernCollectionBasePanel@DirectUI@@QEAAJPEAHPEAW4ElementType@Controls@Xaml@UI@Windows@@@Z
    long GetLastElementInLayout(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTotalLayoutGroupCount@CacheManager@ModernCollectionBasePanel@DirectUI@@QEBAHXZ
    int GetTotalLayoutGroupCount() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?GuaranteeCache@CacheManager@ModernCollectionBasePanel@DirectUI@@QEAAJXZ
    long GuaranteeCache();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocusedChild@CacheManager@ModernCollectionBasePanel@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAE@Z
    long IsFocusedChild(::Windows::UI::Xaml::IUIElement *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutIndexToDataIndex@CacheManager@ModernCollectionBasePanel@DirectUI@@QEBAHW4ElementType@Controls@Xaml@UI@Windows@@H@Z
    int LayoutIndexToDataIndex(int, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenewCacheAfterMutation@CacheManager@ModernCollectionBasePanel@DirectUI@@QEAAJHHHH@Z
    long RenewCacheAfterMutation(int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetGroupCache@CacheManager@ModernCollectionBasePanel@DirectUI@@QEAAJXZ
    long ResetGroupCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetGroupCacheIfGroupCountsMismatch@CacheManager@ModernCollectionBasePanel@DirectUI@@QEAAJXZ
    long ResetGroupCacheIfGroupCountsMismatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnguaranteeCache@CacheManager@ModernCollectionBasePanel@DirectUI@@QEAAXXZ
    void UnguaranteeCache();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CacheManager@ModernCollectionBasePanel@DirectUI@@QEAA@XZ
    ~CacheManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheGroup@CacheManager@ModernCollectionBasePanel@DirectUI@@AEAAJHE@Z
    long CacheGroup(int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitCollectionsCache@CacheManager@ModernCollectionBasePanel@DirectUI@@AEAAJXZ
    long InitCollectionsCache();
};
} // namespace DirectUI::ModernCollectionBasePanel

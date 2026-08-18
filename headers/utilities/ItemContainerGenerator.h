#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 58 member(s).
namespace DirectUI {
class ItemContainerGenerator {
public:
    class BlockEntry;
    class DeferredGeneratorUnlinkActionPayload;
    class Generator;
    class ItemBlock;
    class RealizedItemBlock;
    class UnrealizedItemBlock;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainerFromGroupIndex@ItemContainerGenerator@DirectUI@@QEAAJHPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long ContainerFromGroupIndex(int, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainerFromIndexImpl@ItemContainerGenerator@DirectUI@@QEAAJHPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long ContainerFromIndexImpl(int, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainerFromItemImpl@ItemContainerGenerator@DirectUI@@QEAAJPEAUIInspectable@@PEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long ContainerFromItemImpl(IInspectable *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteDeferredUnlinkAction@ItemContainerGenerator@DirectUI@@SAJPEAVCUIElement@@@Z
    static long ExecuteDeferredUnlinkAction(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GeneratorPositionFromIndexImpl@ItemContainerGenerator@DirectUI@@QEAAJHPEAUGeneratorPosition@Primitives@Controls@Xaml@UI@Windows@@@Z
    long GeneratorPositionFromIndexImpl(int, ::Windows::UI::Xaml::Controls::Primitives::GeneratorPosition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemContainerGeneratorForPanelImpl@ItemContainerGenerator@DirectUI@@QEAAJPEAUIPanel@Controls@Xaml@UI@Windows@@PEAPEAUIItemContainerGenerator@4567@@Z
    long GetItemContainerGeneratorForPanelImpl(::Windows::UI::Xaml::Controls::IPanel *, ::Windows::UI::Xaml::Controls::IItemContainerGenerator * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexFromContainerImpl@ItemContainerGenerator@DirectUI@@QEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAH@Z
    long IndexFromContainerImpl(::Windows::UI::Xaml::IDependencyObject *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexFromGeneratorPositionImpl@ItemContainerGenerator@DirectUI@@QEAAJUGeneratorPosition@Primitives@Controls@Xaml@UI@Windows@@PEAH@Z
    long IndexFromGeneratorPositionImpl(::Windows::UI::Xaml::Controls::Primitives::GeneratorPosition, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIndexInRange@ItemContainerGenerator@DirectUI@@QEAA_NH@Z
    bool IsIndexInRange(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemFromContainerImpl@ItemContainerGenerator@DirectUI@@QEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    long ItemFromContainerImpl(::Windows::UI::Xaml::IDependencyObject *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReferenceTrackerWalk@ItemContainerGenerator@DirectUI@@UEAAXH@Z
    virtual void OnReferenceTrackerWalk(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareItemContainerImpl@ItemContainerGenerator@DirectUI@@QEAAJPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long PrepareItemContainerImpl(::Windows::UI::Xaml::IDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllImpl@ItemContainerGenerator@DirectUI@@QEAAJXZ
    long RemoveAllImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAtImpl@ItemContainerGenerator@DirectUI@@QEAAJUGeneratorPosition@Primitives@Controls@Xaml@UI@Windows@@W4GeneratorDirection@45678@E@Z
    long StartAtImpl(::Windows::UI::Xaml::Controls::Primitives::GeneratorPosition, int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopImpl@ItemContainerGenerator@DirectUI@@QEAAJXZ
    long StopImpl();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainerFromIndex@ItemContainerGenerator@DirectUI@@MEAAJHPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long ContainerFromIndex(int, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainerFromItem@ItemContainerGenerator@DirectUI@@MEAAJPEAUIInspectable@@PEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long ContainerFromItem(IInspectable *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsChangedEventSourceNoRef@ItemContainerGenerator@DirectUI@@MEAAJPEAPEAV?$CEventSource@UIItemsChangedEventHandler@Primitives@Controls@Xaml@UI@Windows@@UIInspectable@@UIItemsChangedEventArgs@23456@@2@@Z
    virtual long GetItemsChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexFromContainer@ItemContainerGenerator@DirectUI@@MEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAH@Z
    virtual long IndexFromContainer(::Windows::UI::Xaml::IDependencyObject *, int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ItemContainerGenerator@DirectUI@@IEAA@XZ
    ItemContainerGenerator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemFromContainer@ItemContainerGenerator@DirectUI@@MEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long ItemFromContainer(::Windows::UI::Xaml::IDependencyObject *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ItemContainerGenerator@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ItemContainerGenerator@DirectUI@@MEAA@XZ
    virtual ~ItemContainerGenerator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearBlocks@ItemContainerGenerator@DirectUI@@AEAAJE@Z
    long ClearBlocks(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainerForGroup@ItemContainerGenerator@DirectUI@@AEAAJPEAUICollectionViewGroup@Data@Xaml@UI@Windows@@PEAPEAUIDependencyObject@567@@Z
    long ContainerForGroup(::Windows::UI::Xaml::Data::ICollectionViewGroup *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainerForGroup@ItemContainerGenerator@DirectUI@@AEAAJPEAUICollectionViewGroup@Data@Xaml@UI@Windows@@PEAUIDependencyObject@567@PEAPEAU8567@@Z
    long ContainerForGroup(::Windows::UI::Xaml::Data::ICollectionViewGroup *, ::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGenerator@ItemContainerGenerator@DirectUI@@CAJPEAUIGeneratorHost@2@PEAPEAV12@@Z
    static long CreateGenerator(::DirectUI::IGeneratorHost *, ItemContainerGenerator * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGenerator@ItemContainerGenerator@DirectUI@@CAJPEAV12@PEAUIGeneratorHost@2@PEAUIGroupItem@Controls@Xaml@UI@Windows@@PEAU?$IVector@PEAVDependencyObject@Xaml@UI@Windows@@@Collections@Foundation@8@IPEAPEAV12@@Z
    static long CreateGenerator(ItemContainerGenerator *, ::DirectUI::IGeneratorHost *, ::Windows::UI::Xaml::Controls::IGroupItem *, WindissectOpaque *, unsigned int, ItemContainerGenerator * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGenerator@ItemContainerGenerator@DirectUI@@CAJPEAV12@PEAVGroupItem@2@PEAU?$IVector@PEAVDependencyObject@Xaml@UI@Windows@@@Collections@Foundation@Windows@@PEAPEAV12@@Z
    static long CreateGenerator(ItemContainerGenerator *, ::DirectUI::GroupItem *, WindissectOpaque *, ItemContainerGenerator * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoLinearSearch@ItemContainerGenerator@DirectUI@@AEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@PEAHPEA_N@Z
    long DoLinearSearch(::Windows::UI::Xaml::IDependencyObject * *, IInspectable *, int *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBlockAndPosition@ItemContainerGenerator@DirectUI@@AEAAJIAEAUGeneratorPosition@Primitives@Controls@Xaml@UI@Windows@@AEAPEAVItemBlock@12@AEAH@Z
    long GetBlockAndPosition(unsigned int, ::Windows::UI::Xaml::Controls::Primitives::GeneratorPosition &, WindissectOpaque * &, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@ItemContainerGenerator@DirectUI@@AEAAJPEAVItemBlock@12@AEAH@Z
    long GetCount(WindissectOpaque *, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@ItemContainerGenerator@DirectUI@@AEAAJAEAH@Z
    long GetCount(int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsCount@ItemContainerGenerator@DirectUI@@CAJPEAUIInspectable@@AEAI@Z
    static long GetItemsCount(IInspectable *, unsigned int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealizedItemBlockCount@ItemContainerGenerator@DirectUI@@AEAAJPEAVRealizedItemBlock@12@HAEAH@Z
    long GetRealizedItemBlockCount(WindissectOpaque *, int, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideGroupItemIfEmpty@ItemContainerGenerator@DirectUI@@AEAAJXZ
    long HideGroupItemIfEmpty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LinkContainerToItem@ItemContainerGenerator@DirectUI@@AEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    long LinkContainerToItem(::Windows::UI::Xaml::IDependencyObject *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveItems@ItemContainerGenerator@DirectUI@@AEAAXPEAVItemBlock@12@HH0HH@Z
    void MoveItems(WindissectOpaque *, int, int, WindissectOpaque *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveToPosition@ItemContainerGenerator@DirectUI@@AEAAJUGeneratorPosition@Primitives@Controls@Xaml@UI@Windows@@W4GeneratorDirection@45678@EIAEAUGeneratorState@12@@Z
    long MoveToPosition(::Windows::UI::Xaml::Controls::Primitives::GeneratorPosition, int, unsigned char, unsigned int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfSourceChanged@ItemContainerGenerator@DirectUI@@AEAAJPEAU?$IObservableVector@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAUIVectorChangedEventArgs@456@@Z
    long NotifyOfSourceChanged(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGroupStylePropertyChanged@ItemContainerGenerator@DirectUI@@AEAAJPEAUIInspectable@@PEAUIPropertyChangedEventArgs@Data@Xaml@UI@Windows@@@Z
    long OnGroupStylePropertyChanged(IInspectable *, ::Windows::UI::Xaml::Data::IPropertyChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemAdded@ItemContainerGenerator@DirectUI@@AEAAJI@Z
    long OnItemAdded(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemCollectionChanged@ItemContainerGenerator@DirectUI@@AEAAJPEAU?$IObservableVector@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAUIVectorChangedEventArgs@456@@Z
    long OnItemCollectionChanged(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemRemoved@ItemContainerGenerator@DirectUI@@AEAAJI@Z
    long OnItemRemoved(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemReplaced@ItemContainerGenerator@DirectUI@@AEAAJI@Z
    long OnItemReplaced(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRefresh@ItemContainerGenerator@DirectUI@@AEAAJXZ
    long OnRefresh();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareGrouping@ItemContainerGenerator@DirectUI@@AEAAJXZ
    long PrepareGrouping();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseItemsChanged@ItemContainerGenerator@DirectUI@@AEAAJW4CollectionChange@Collections@Foundation@Windows@@UGeneratorPosition@Primitives@Controls@Xaml@UI@6@II@Z
    long RaiseItemsChanged(int, ::Windows::UI::Xaml::Controls::Primitives::GeneratorPosition, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Realize@ItemContainerGenerator@DirectUI@@AEAAJPEAVUnrealizedItemBlock@12@HPEAUIInspectable@@PEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long Realize(WindissectOpaque *, int, IInspectable *, ::Windows::UI::Xaml::IDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@ItemContainerGenerator@DirectUI@@AEAAJUGeneratorPosition@Primitives@Controls@Xaml@UI@Windows@@HE@Z
    long Remove(::Windows::UI::Xaml::Controls::Primitives::GeneratorPosition, int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAndCoalesceBlocksIfNeeded@ItemContainerGenerator@DirectUI@@AEAAXPEAVItemBlock@12@@Z
    void RemoveAndCoalesceBlocksIfNeeded(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldHide@ItemContainerGenerator@DirectUI@@AEAAJPEAUICollectionViewGroup@Data@Xaml@UI@Windows@@AEAE@Z
    long ShouldHide(::Windows::UI::Xaml::Data::ICollectionViewGroup *, unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlinkContainerFromItem@ItemContainerGenerator@DirectUI@@AEAAJPEAUIDependencyObject@Xaml@UI@Windows@@EE@Z
    long UnlinkContainerFromItem(::Windows::UI::Xaml::IDependencyObject *, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_View@ItemContainerGenerator@DirectUI@@AEAAJPEAPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    long get_View(WindissectOpaque * *);
};
} // namespace DirectUI

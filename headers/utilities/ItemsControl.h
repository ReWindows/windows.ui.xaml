#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 100 member(s).
namespace DirectUI {
class ItemsControl {
public:
    class DataTemplateSelectorRecyclingContext;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanRecycleContainer@ItemsControl@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAE@Z
    virtual long CanRecycleContainer(::Windows::UI::Xaml::IDependencyObject *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeSelectorItemsVisualState@ItemsControl@DirectUI@@UEAAJI@Z
    virtual long ChangeSelectorItemsVisualState(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContainerForItem@ItemsControl@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long ClearContainerForItem(::Windows::UI::Xaml::IDependencyObject *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContainerForItemOverrideImpl@ItemsControl@DirectUI@@QEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    long ClearContainerForItemOverrideImpl(::Windows::UI::Xaml::IDependencyObject *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearGroupContainerForGroup@ItemsControl@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUICollectionViewGroup@Data@456@@Z
    virtual long ClearGroupContainerForGroup(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::Data::ICollectionViewGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearVisualChildren@ItemsControl@DirectUI@@SAJPEAVCItemsControl@@I@Z
    static long ClearVisualChildren(CItemsControl *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainerFromIndexImpl@ItemsControl@DirectUI@@QEAAJHPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long ContainerFromIndexImpl(int, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainerFromItemImpl@ItemsControl@DirectUI@@QEAAJPEAUIInspectable@@PEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long ContainerFromItemImpl(IInspectable *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayMemberPathChanged@ItemsControl@DirectUI@@SAJPEAVCItemsControl@@@Z
    static long DisplayMemberPathChanged(CItemsControl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerForItem@ItemsControl@DirectUI@@UEAAJPEAUIInspectable@@PEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAU4567@@Z
    virtual long GetContainerForItem(IInspectable *, ::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerForItemOverrideImpl@ItemsControl@DirectUI@@QEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long GetContainerForItemOverrideImpl(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTransitionContext@ItemsControl@DirectUI@@UEAAJHPEAW4ThemeTransitionContext@2@@Z
    virtual long GetCurrentTransitionContext(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDropOffsetToRoot@ItemsControl@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long GetDropOffsetToRoot(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupStyle@ItemsControl@DirectUI@@UEAAJPEAUICollectionViewGroup@Data@Xaml@UI@Windows@@IPEAPEAUIGroupStyle@Controls@567@@Z
    virtual long GetGroupStyle(::Windows::UI::Xaml::Data::ICollectionViewGroup *, unsigned int, ::Windows::UI::Xaml::Controls::IGroupStyle * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeaderForGroup@ItemsControl@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long GetHeaderForGroup(IInspectable *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemOrContainerFromContainer@ItemsControl@DirectUI@@QEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    long GetItemOrContainerFromContainer(::Windows::UI::Xaml::IDependencyObject *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsOwner@ItemsControl@DirectUI@@SAJPEAUIDependencyObject@Xaml@UI@Windows@@IPEAPEAUIItemsControl@Controls@456@@Z
    static long GetItemsOwner(::Windows::UI::Xaml::IDependencyObject *, unsigned int, ::Windows::UI::Xaml::Controls::IItemsControl * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsOwner@ItemsControl@DirectUI@@SAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUIItemsControl@Controls@456@@Z
    static long GetItemsOwner(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::Controls::IItemsControl * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRecyclingContext@ItemsControl@DirectUI@@QEAAJPEAPEAUIContainerRecyclingContext@2@@Z
    long GetRecyclingContext(::DirectUI::IContainerRecyclingContext * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GroupFromHeaderImpl@ItemsControl@DirectUI@@QEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    long GroupFromHeaderImpl(::Windows::UI::Xaml::IDependencyObject *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GroupHeaderContainerFromItemContainerImpl@ItemsControl@DirectUI@@QEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAU3456@@Z
    long GroupHeaderContainerFromItemContainerImpl(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HeaderFromGroupImpl@ItemsControl@DirectUI@@QEAAJPEAUIInspectable@@PEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long HeaderFromGroupImpl(IInspectable *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HeaderFromIndexImpl@ItemsControl@DirectUI@@QEAAJHPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long HeaderFromIndexImpl(int, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexFromContainerImpl@ItemsControl@DirectUI@@QEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAH@Z
    long IndexFromContainerImpl(::Windows::UI::Xaml::IDependencyObject *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexFromHeaderImpl@ItemsControl@DirectUI@@QEAAJPEAUIDependencyObject@Xaml@UI@Windows@@EPEAH@Z
    long IndexFromHeaderImpl(::Windows::UI::Xaml::IDependencyObject *, unsigned char, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHostForItemContainer@ItemsControl@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAE@Z
    virtual long IsHostForItemContainer(::Windows::UI::Xaml::IDependencyObject *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsItemItsOwnContainer@ItemsControl@DirectUI@@UEAAJPEAUIInspectable@@PEAE@Z
    virtual long IsItemItsOwnContainer(IInspectable *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemFromContainerImpl@ItemsControl@DirectUI@@QEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    long ItemFromContainerImpl(::Windows::UI::Xaml::IDependencyObject *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemsControlFromItemContainer@ItemsControl@DirectUI@@SAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUIItemsControl@Controls@456@@Z
    static long ItemsControlFromItemContainer(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::Controls::IItemsControl * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyAllItemsAdded@ItemsControl@DirectUI@@SAJPEAVCItemsControl@@@Z
    static long NotifyAllItemsAdded(CItemsControl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemContainerStyleSelectorChangedImpl@ItemsControl@DirectUI@@QEAAJPEAUIStyleSelector@Controls@Xaml@UI@Windows@@0@Z
    long OnItemContainerStyleSelectorChangedImpl(::Windows::UI::Xaml::Controls::IStyleSelector *, ::Windows::UI::Xaml::Controls::IStyleSelector *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemTemplateSelectorChangedImpl@ItemsControl@DirectUI@@QEAAJPEAUIDataTemplateSelector@Controls@Xaml@UI@Windows@@0@Z
    long OnItemTemplateSelectorChangedImpl(::Windows::UI::Xaml::Controls::IDataTemplateSelector *, ::Windows::UI::Xaml::Controls::IDataTemplateSelector *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsChangedImpl@ItemsControl@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long OnItemsChangedImpl(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverrideContainerArrangeBounds@ItemsControl@DirectUI@@UEAAJHURect@Foundation@Windows@@PEAU345@@Z
    virtual long OverrideContainerArrangeBounds(int, WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareContainerForItemOverrideImpl@ItemsControl@DirectUI@@QEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    long PrepareContainerForItemOverrideImpl(::Windows::UI::Xaml::IDependencyObject *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareGroupContainer@ItemsControl@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUICollectionViewGroup@Data@456@@Z
    virtual long PrepareGroupContainer(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::Data::ICollectionViewGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareItemContainer@ItemsControl@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long PrepareItemContainer(::Windows::UI::Xaml::IDependencyObject *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseChoosingGroupHeaderContainer@ItemsControl@DirectUI@@UEAAJPEAUIChoosingGroupHeaderContainerEventArgs@Controls@Xaml@UI@Windows@@@Z
    virtual long RaiseChoosingGroupHeaderContainer(::Windows::UI::Xaml::Controls::IChoosingGroupHeaderContainerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseChoosingItemContainer@ItemsControl@DirectUI@@UEAAJPEAUIChoosingItemContainerEventArgs@Controls@Xaml@UI@Windows@@@Z
    virtual long RaiseChoosingItemContainer(::Windows::UI::Xaml::Controls::IChoosingItemContainerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseContainerContentChangingOnRecycle@ItemsControl@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long RaiseContainerContentChangingOnRecycle(::Windows::UI::Xaml::IUIElement *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecreateVisualChildren@ItemsControl@DirectUI@@SAJPEAVCItemsControl@@@Z
    static long RecreateVisualChildren(CItemsControl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWorkForContainer@ItemsControl@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long RegisterWorkForContainer(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWorkFromArgs@ItemsControl@DirectUI@@UEAAJPEAUIContainerContentChangingEventArgs@Controls@Xaml@UI@Windows@@@Z
    virtual long RegisterWorkFromArgs(::Windows::UI::Xaml::Controls::IContainerContentChangingEventArgs *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsGrouping@ItemsControl@DirectUI@@UEAAJE@Z
    virtual long SetIsGrouping(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemCollectionStatic@ItemsControl@DirectUI@@SAJPEAVCItemCollection@@PEAVCItemsControl@@@Z
    static long SetItemCollectionStatic(CItemCollection *, CItemsControl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVirtualizationStateByPanel@ItemsControl@DirectUI@@QEAAJXZ
    long SetVirtualizationStateByPanel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupContainerContentChangingAfterPrepare@ItemsControl@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@HUSize@Foundation@6@@Z
    virtual long SetupContainerContentChangingAfterPrepare(::Windows::UI::Xaml::IDependencyObject *, IInspectable *, int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRaiseChoosingGroupHeaderContainer@ItemsControl@DirectUI@@UEAAJPEAE@Z
    virtual long ShouldRaiseChoosingGroupHeaderContainer(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRaiseChoosingItemContainer@ItemsControl@DirectUI@@UEAAJPEAE@Z
    virtual long ShouldRaiseChoosingItemContainer(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuggestContainerForContainerFromItemLookup@ItemsControl@DirectUI@@UEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long SuggestContainerForContainerFromItemLookup(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIA_GetContainerForDataItemOverride@ItemsControl@DirectUI@@UEAAJPEAUIInspectable@@HPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long UIA_GetContainerForDataItemOverride(IInspectable *, int, ::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VirtualizationFinished@ItemsControl@DirectUI@@UEAAJXZ
    virtual long VirtualizationFinished();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CollectionView@ItemsControl@DirectUI@@UEAAJPEAPEAUICollectionView@Data@Xaml@UI@Windows@@@Z
    virtual long get_CollectionView(::Windows::UI::Xaml::Data::ICollectionView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GroupStyleImpl@ItemsControl@DirectUI@@QEAAJPEAPEAU?$IObservableVector@PEAVGroupStyle@Controls@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    long get_GroupStyleImpl(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsItemsHostInvalid@ItemsControl@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsItemsHostInvalid(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ItemContainerGeneratorImpl@ItemsControl@DirectUI@@QEAAJPEAPEAUIItemContainerGenerator@Controls@Xaml@UI@Windows@@@Z
    long get_ItemContainerGeneratorImpl(::Windows::UI::Xaml::Controls::IItemContainerGenerator * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Items@ItemsControl@DirectUI@@UEAAJPEAPEAU?$IObservableVector@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long get_Items(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ItemsHost@ItemsControl@DirectUI@@UEAAJPEAPEAUIPanel@Controls@Xaml@UI@Windows@@@Z
    virtual long get_ItemsHost(::Windows::UI::Xaml::Controls::IPanel * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ItemsPanelRootImpl@ItemsControl@DirectUI@@QEAAJPEAPEAUIPanel@Controls@Xaml@UI@Windows@@@Z
    long get_ItemsPanelRootImpl(::Windows::UI::Xaml::Controls::IPanel * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ItemsPresenter@ItemsControl@DirectUI@@QEAAJPEAPEAUIItemsPresenter@Controls@Xaml@UI@Windows@@@Z
    long get_ItemsPresenter(::Windows::UI::Xaml::Controls::IItemsPresenter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_View@ItemsControl@DirectUI@@UEAAJPEAPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long get_View(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsGrouping@ItemsControl@DirectUI@@UEAAJE@Z
    virtual long put_IsGrouping(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyItemContainerStyle@ItemsControl@DirectUI@@MEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long ApplyItemContainerStyle(::Windows::UI::Xaml::IDependencyObject *, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupItemIndex@ItemsControl@DirectUI@@IEAAJPEAUIInspectable@@PEAIPEAE@Z
    long GetGroupItemIndex(IInspectable *, unsigned int *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeaderForGroupOverrideImpl@ItemsControl@DirectUI@@MEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long GetHeaderForGroupOverrideImpl(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemCount@ItemsControl@DirectUI@@IEAAJAEAI@Z
    long GetItemCount(unsigned int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrepareContainerForItemDeferred@ItemsControl@DirectUI@@MEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAE@Z
    virtual long IsPrepareContainerForItemDeferred(::Windows::UI::Xaml::IDependencyObject *, unsigned char *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ItemsControl@DirectUI@@IEAA@XZ
    ItemsControl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDeferredElementStateChanged@ItemsControl@DirectUI@@MEAAJW4KnownPropertyIndex@@W4DeferredElementStateChange@@IPEAVCDependencyObject@@@Z
    virtual long NotifyDeferredElementStateChanged(int, int, unsigned int, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfSourceChanged@ItemsControl@DirectUI@@MEAAJPEAU?$IObservableVector@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAUIVectorChangedEventArgs@456@@Z
    virtual long NotifyOfSourceChanged(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectVisualChildren@ItemsControl@DirectUI@@MEAAJXZ
    virtual long OnDisconnectVisualChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsChanged@ItemsControl@DirectUI@@MEAAJPEAUIVectorChangedEventArgs@Collections@Foundation@Windows@@@Z
    virtual long OnItemsChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsHostAvailable@ItemsControl@DirectUI@@MEAAJXZ
    virtual long OnItemsHostAvailable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsReordered@ItemsControl@DirectUI@@IEAAJI@Z
    long OnItemsReordered(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsSourceChanged@ItemsControl@DirectUI@@MEAAJPEAUIInspectable@@@Z
    virtual long OnItemsSourceChanged(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@ItemsControl@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreProcessContentPreparation@ItemsControl@DirectUI@@MEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long PreProcessContentPreparation(::Windows::UI::Xaml::IDependencyObject *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@ItemsControl@DirectUI@@MEAAJXZ
    virtual long PrepareState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ItemsControl@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceVirtualizationEnabledByModernPanel@ItemsControl@DirectUI@@IEAAXXZ
    void TraceVirtualizationEnabledByModernPanel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTickContextCounters@ItemsControl@DirectUI@@IEAAJXZ
    long UpdateTickContextCounters();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ItemsControl@DirectUI@@MEAA@XZ
    virtual ~ItemsControl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddContainerForPosition@ItemsControl@DirectUI@@AEAAJUGeneratorPosition@Primitives@Controls@Xaml@UI@Windows@@@Z
    long AddContainerForPosition(::Windows::UI::Xaml::Controls::Primitives::GeneratorPosition);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddContainers@ItemsControl@DirectUI@@AEAAJXZ
    long AddContainers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddVisualChild@ItemsControl@DirectUI@@AEAAJIPEAUIDependencyObject@Xaml@UI@Windows@@E@Z
    long AddVisualChild(unsigned int, ::Windows::UI::Xaml::IDependencyObject *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContainers@ItemsControl@DirectUI@@AEAAJE@Z
    long ClearContainers(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTransitionContext@ItemsControl@DirectUI@@AEAAJPEAW4ThemeTransitionContext@2@@Z
    long GetCurrentTransitionContext(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeItemContainerGenerator@ItemsControl@DirectUI@@AEAAJXZ
    long InitializeItemContainerGenerator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemsControlFromItemContainer@ItemsControl@DirectUI@@CAJPEAUIDependencyObject@Xaml@UI@Windows@@IPEAPEAUIItemsControl@Controls@456@@Z
    static long ItemsControlFromItemContainer(::Windows::UI::Xaml::IDependencyObject *, unsigned int, ::Windows::UI::Xaml::Controls::IItemsControl * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGeneratorItemsChanged@ItemsControl@DirectUI@@AEAAJPEAUIInspectable@@PEAUIItemsChangedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    long OnGeneratorItemsChanged(IInspectable *, ::Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGroupStyleChanged@ItemsControl@DirectUI@@AEAAJPEAU?$IObservableVector@PEAVGroupStyle@Controls@Xaml@UI@Windows@@@Collections@Foundation@Windows@@PEAUIVectorChangedEventArgs@456@@Z
    long OnGroupStyleChanged(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGroupStyleSelectorChanged@ItemsControl@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnGroupStyleSelectorChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemContainerStyleChanged@ItemsControl@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnItemContainerStyleChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemContainerStyleSelectorChanged@ItemsControl@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnItemContainerStyleSelectorChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemTemplateChanged@ItemsControl@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnItemTemplateChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemTemplateSelectorChanged@ItemsControl@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnItemTemplateSelectorChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsPanelChanged@ItemsControl@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnItemsPanelChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshContainers@ItemsControl@DirectUI@@AEAAJXZ
    long RefreshContainers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveContainerForPosition@ItemsControl@DirectUI@@AEAAJUGeneratorPosition@Primitives@Controls@Xaml@UI@Windows@@@Z
    long RemoveContainerForPosition(::Windows::UI::Xaml::Controls::Primitives::GeneratorPosition);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemCollection@ItemsControl@DirectUI@@AEAAJPEAVItemCollection@2@@Z
    long SetItemCollection(::DirectUI::ItemCollection *);
};
} // namespace DirectUI

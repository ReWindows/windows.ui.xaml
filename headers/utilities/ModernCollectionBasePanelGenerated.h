#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 71 member(s).
namespace DirectUI {
class ModernCollectionBasePanelGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildTree@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long BuildTree(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainerFromIndex@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJHPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long ContainerFromIndex(int, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainerFromItem@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long ContainerFromItem(IInspectable *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectItemsHost@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJXZ
    virtual long DisconnectItemsHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindRecyclingCandidate@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJHPEAE@Z
    virtual long FindRecyclingCandidate(int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateContainerAtIndex@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJHPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long GenerateContainerAtIndex(int, ::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateHeaderAtGroupIndex@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJHPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long GenerateHeaderAtGroupIndex(int, ::Windows::UI::Xaml::IUIElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerRecycleQueueEmpty@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long GetContainerRecycleQueueEmpty(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainersForIncrementalVisualization@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJPEAPEAUIContainerContentChangingIterator@2@@Z
    virtual long GetContainersForIncrementalVisualization(::DirectUI::IContainerContentChangingIterator * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupHeaderMapping@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJPEAPEAUIGroupHeaderMapping@2@@Z
    virtual long GetGroupHeaderMapping(::DirectUI::IGroupHeaderMapping * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeaderRecycleQueueEmpty@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long GetHeaderRecycleQueueEmpty(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHorizontalSnapPointsChangedEventSourceNoRef@ModernCollectionBasePanelGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@UIInspectable@@U4@@2@@Z
    long GetHorizontalSnapPointsChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInsertionIndexes@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJUPoint@Foundation@Windows@@PEAH1@Z
    virtual long GetInsertionIndexes(WindissectOpaque, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIrregularSnapPoints@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJW4Orientation@Controls@Xaml@UI@Windows@@W4SnapPointsAlignment@Primitives@4567@PEAPEAU?$IVectorView@M@Collections@Foundation@7@@Z
    virtual long GetIrregularSnapPoints(int, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemContainerMapping@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJPEAPEAUIItemContainerMapping@Controls@Xaml@UI@Windows@@@Z
    virtual long GetItemContainerMapping(::Windows::UI::Xaml::Controls::IItemContainerMapping * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQueueLength@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJPEAI@Z
    virtual long GetQueueLength(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegularSnapPoints@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJW4Orientation@Controls@Xaml@UI@Windows@@W4SnapPointsAlignment@Primitives@4567@PEAM2@Z
    virtual long GetRegularSnapPoints(int, int, float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ModernCollectionBasePanelGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerticalSnapPointsChangedEventSourceNoRef@ModernCollectionBasePanelGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@UIInspectable@@U4@@2@@Z
    long GetVerticalSnapPointsChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleIndicesUpdatedEventSourceNoRef@ModernCollectionBasePanelGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@UIInspectable@@U4@@2@@Z
    long GetVisibleIndicesUpdatedEventSourceNoRef(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GroupFromHeader@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GroupFromHeader(::Windows::UI::Xaml::IDependencyObject *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GroupHeaderContainerFromItemContainer@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAU3456@@Z
    virtual long GroupHeaderContainerFromItemContainer(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HeaderFromGroup@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long HeaderFromGroup(IInspectable *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HeaderFromIndex@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJHPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long HeaderFromIndex(int, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexFromContainer@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAH@Z
    virtual long IndexFromContainer(::Windows::UI::Xaml::IDependencyObject *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexFromHeader@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@EPEAH@Z
    virtual long IndexFromHeader(::Windows::UI::Xaml::IDependencyObject *, unsigned char, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBuildTreeSuspended@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long IsBuildTreeSuspended(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemFromContainer@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long ItemFromContainer(::Windows::UI::Xaml::IDependencyObject *, IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ModernCollectionBasePanelGenerated@DirectUI@@QEAA@XZ
    ModernCollectionBasePanelGenerated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfItemsChanged@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJPEAUIVectorChangedEventArgs@Collections@Foundation@Windows@@@Z
    virtual long NotifyOfItemsChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfItemsChanging@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJPEAUIVectorChangedEventArgs@Collections@Foundation@Windows@@@Z
    virtual long NotifyOfItemsChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfItemsReordered@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJI@Z
    virtual long NotifyOfItemsReordered(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleAllContainers@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJXZ
    virtual long RecycleAllContainers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleAllHeaders@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJXZ
    virtual long RecycleAllHeaders();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleContainer@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long RecycleContainer(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleHeader@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long RecycleHeader(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Refresh@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJXZ
    virtual long Refresh();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterItemsHost@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJPEAUIGeneratorHost@2@@Z
    virtual long RegisterItemsHost(::DirectUI::IGeneratorHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutDownDeferredWork@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJXZ
    virtual long ShutDownDeferredWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRecycleContainer@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAE@Z
    virtual long TryRecycleContainer(::Windows::UI::Xaml::IUIElement *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_HorizontalSnapPointsChanged@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_HorizontalSnapPointsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VerticalSnapPointsChanged@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_VerticalSnapPointsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VisibleIndicesUpdated@ModernCollectionBasePanelGenerated@DirectUI@@QEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long add_VisibleIndicesUpdated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AreHorizontalSnapPointsRegular@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_AreHorizontalSnapPointsRegular(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AreVerticalSnapPointsRegular@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_AreVerticalSnapPointsRegular(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstCacheGroupIndexBase@ModernCollectionBasePanelGenerated@DirectUI@@QEAAJPEAH@Z
    long get_FirstCacheGroupIndexBase(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstCacheIndexBase@ModernCollectionBasePanelGenerated@DirectUI@@QEAAJPEAH@Z
    long get_FirstCacheIndexBase(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstVisibleIndexBase@ModernCollectionBasePanelGenerated@DirectUI@@QEAAJPEAH@Z
    long get_FirstVisibleIndexBase(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsRegisteredForCallbacks@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsRegisteredForCallbacks(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastCacheGroupIndexBase@ModernCollectionBasePanelGenerated@DirectUI@@QEAAJPEAH@Z
    long get_LastCacheGroupIndexBase(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastCacheIndexBase@ModernCollectionBasePanelGenerated@DirectUI@@QEAAJPEAH@Z
    long get_LastCacheIndexBase(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastVisibleIndexBase@ModernCollectionBasePanelGenerated@DirectUI@@QEAAJPEAH@Z
    long get_LastVisibleIndexBase(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PanningDirectionBase@ModernCollectionBasePanelGenerated@DirectUI@@QEAAJPEAW4PanelScrollingDirection@Controls@Xaml@UI@Windows@@@Z
    long get_PanningDirectionBase(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FirstCacheGroupIndexBase@ModernCollectionBasePanelGenerated@DirectUI@@QEAAJH@Z
    long put_FirstCacheGroupIndexBase(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FirstCacheIndexBase@ModernCollectionBasePanelGenerated@DirectUI@@QEAAJH@Z
    long put_FirstCacheIndexBase(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FirstVisibleGroupIndexBase@ModernCollectionBasePanelGenerated@DirectUI@@QEAAJH@Z
    long put_FirstVisibleGroupIndexBase(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FirstVisibleIndexBase@ModernCollectionBasePanelGenerated@DirectUI@@QEAAJH@Z
    long put_FirstVisibleIndexBase(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsRegisteredForCallbacks@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsRegisteredForCallbacks(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LastCacheGroupIndexBase@ModernCollectionBasePanelGenerated@DirectUI@@QEAAJH@Z
    long put_LastCacheGroupIndexBase(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LastCacheIndexBase@ModernCollectionBasePanelGenerated@DirectUI@@QEAAJH@Z
    long put_LastCacheIndexBase(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LastVisibleGroupIndexBase@ModernCollectionBasePanelGenerated@DirectUI@@QEAAJH@Z
    long put_LastVisibleGroupIndexBase(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LastVisibleIndexBase@ModernCollectionBasePanelGenerated@DirectUI@@QEAAJH@Z
    long put_LastVisibleIndexBase(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PanningDirectionBase@ModernCollectionBasePanelGenerated@DirectUI@@QEAAJW4PanelScrollingDirection@Controls@Xaml@UI@Windows@@@Z
    long put_PanningDirectionBase(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_HorizontalSnapPointsChanged@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_HorizontalSnapPointsChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VerticalSnapPointsChanged@ModernCollectionBasePanelGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VerticalSnapPointsChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VisibleIndicesUpdated@ModernCollectionBasePanelGenerated@DirectUI@@QEAAJUEventRegistrationToken@@@Z
    long remove_VisibleIndicesUpdated(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ModernCollectionBasePanelGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventAddHandlerByIndex@ModernCollectionBasePanelGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@E@Z
    virtual long EventAddHandlerByIndex(int, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventRemoveHandlerByIndex@ModernCollectionBasePanelGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@@Z
    virtual long EventRemoveHandlerByIndex(int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ModernCollectionBasePanelGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ModernCollectionBasePanelGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 58 member(s).
namespace DirectUI {
class CalendarViewGeneratorHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddScopes@CalendarViewGeneratorHost@DirectUI@@QEAAJAEAUDateTime@Foundation@Windows@@H@Z
    long AddScopes(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUnits@CalendarViewGeneratorHost@DirectUI@@QEAAJAEAUDateTime@Foundation@Windows@@H@Z
    long AddUnits(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustToFirstUnitInThisScope@CalendarViewGeneratorHost@DirectUI@@QEAAJPEAUDateTime@Foundation@Windows@@PEAH@Z
    long AdjustToFirstUnitInThisScope(WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustToLastUnitInThisScope@CalendarViewGeneratorHost@DirectUI@@QEAAJPEAUDateTime@Foundation@Windows@@PEAH@Z
    long AdjustToLastUnitInThisScope(WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CalendarViewGeneratorHost@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long Append(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachScrollViewerFocusEngagedEvent@CalendarViewGeneratorHost@DirectUI@@QEAAJXZ
    long AttachScrollViewerFocusEngagedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateOffsetFromMinDate@CalendarViewGeneratorHost@DirectUI@@QEAAJUDateTime@Foundation@Windows@@PEAH@Z
    long CalculateOffsetFromMinDate(WindissectOpaque, int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CalendarViewGeneratorHost@DirectUI@@QEAA@XZ
    CalendarViewGeneratorHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanRecycleContainer@CalendarViewGeneratorHost@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAE@Z
    virtual long CanRecycleContainer(::Windows::UI::Xaml::IDependencyObject *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CalendarViewGeneratorHost@DirectUI@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContainerForItem@CalendarViewGeneratorHost@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long ClearContainerForItem(::Windows::UI::Xaml::IDependencyObject *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearGroupContainerForGroup@CalendarViewGeneratorHost@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUICollectionViewGroup@Data@456@@Z
    virtual long ClearGroupContainerForGroup(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::Data::ICollectionViewGroup *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CalendarViewGeneratorHost@DirectUI@@UEAAJIPEAPEAUIInspectable@@@Z
    virtual long GetAt(unsigned int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerForItem@CalendarViewGeneratorHost@DirectUI@@UEAAJPEAUIInspectable@@PEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAU4567@@Z
    virtual long GetContainerForItem(IInspectable *, ::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDateAt@CalendarViewGeneratorHost@DirectUI@@QEAAJIPEAUDateTime@Foundation@Windows@@@Z
    long GetDateAt(unsigned int, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstDateOfNextScope@CalendarViewGeneratorHost@DirectUI@@QEAAJUDateTime@Foundation@Windows@@_NPEAU345@@Z
    long GetFirstDateOfNextScope(WindissectOpaque, bool, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupStyle@CalendarViewGeneratorHost@DirectUI@@UEAAJPEAUICollectionViewGroup@Data@Xaml@UI@Windows@@IPEAPEAUIGroupStyle@Controls@567@@Z
    virtual long GetGroupStyle(::Windows::UI::Xaml::Data::ICollectionViewGroup *, unsigned int, ::Windows::UI::Xaml::Controls::IGroupStyle * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeaderForGroup@CalendarViewGeneratorHost@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long GetHeaderForGroup(IInspectable *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@CalendarViewGeneratorHost@DirectUI@@UEAAJPEAPEAU?$IVectorView@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long GetView(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@CalendarViewGeneratorHost@DirectUI@@UEAAJPEAUIInspectable@@PEAIPEAE@Z
    virtual long IndexOf(IInspectable *, unsigned int *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@CalendarViewGeneratorHost@DirectUI@@UEAAJIPEAUIInspectable@@@Z
    virtual long InsertAt(unsigned int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHostForItemContainer@CalendarViewGeneratorHost@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAE@Z
    virtual long IsHostForItemContainer(::Windows::UI::Xaml::IDependencyObject *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsItemItsOwnContainer@CalendarViewGeneratorHost@DirectUI@@UEAAJPEAUIInspectable@@PEAE@Z
    virtual long IsItemItsOwnContainer(IInspectable *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyStateChange@CalendarViewGeneratorHost@DirectUI@@UEAAJW4DMManipulationState@2@MMMMMEEE@Z
    virtual long NotifyStateChange(int, float, float, float, float, float, unsigned char, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverrideContainerArrangeBounds@CalendarViewGeneratorHost@DirectUI@@UEAAJHURect@Foundation@Windows@@PEAU345@@Z
    virtual long OverrideContainerArrangeBounds(int, WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareGroupContainer@CalendarViewGeneratorHost@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUICollectionViewGroup@Data@456@@Z
    virtual long PrepareGroupContainer(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::Data::ICollectionViewGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareItemContainer@CalendarViewGeneratorHost@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long PrepareItemContainer(::Windows::UI::Xaml::IDependencyObject *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseChoosingGroupHeaderContainer@CalendarViewGeneratorHost@DirectUI@@UEAAJPEAUIChoosingGroupHeaderContainerEventArgs@Controls@Xaml@UI@Windows@@@Z
    virtual long RaiseChoosingGroupHeaderContainer(::Windows::UI::Xaml::Controls::IChoosingGroupHeaderContainerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseChoosingItemContainer@CalendarViewGeneratorHost@DirectUI@@UEAAJPEAUIChoosingItemContainerEventArgs@Controls@Xaml@UI@Windows@@@Z
    virtual long RaiseChoosingItemContainer(::Windows::UI::Xaml::Controls::IChoosingItemContainerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseContainerContentChangingOnRecycle@CalendarViewGeneratorHost@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long RaiseContainerContentChangingOnRecycle(::Windows::UI::Xaml::IUIElement *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWorkForContainer@CalendarViewGeneratorHost@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long RegisterWorkForContainer(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWorkFromArgs@CalendarViewGeneratorHost@DirectUI@@UEAAJPEAUIContainerContentChangingEventArgs@Controls@Xaml@UI@Windows@@@Z
    virtual long RegisterWorkFromArgs(::Windows::UI::Xaml::Controls::IContainerContentChangingEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@CalendarViewGeneratorHost@DirectUI@@UEAAJI@Z
    virtual long RemoveAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAtEnd@CalendarViewGeneratorHost@DirectUI@@UEAAJXZ
    virtual long RemoveAtEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetScope@CalendarViewGeneratorHost@DirectUI@@QEAAXXZ
    void ResetScope();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAt@CalendarViewGeneratorHost@DirectUI@@UEAAJIPEAUIInspectable@@@Z
    virtual long SetAt(unsigned int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsGrouping@CalendarViewGeneratorHost@DirectUI@@UEAAJE@Z
    virtual long SetIsGrouping(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPanel@CalendarViewGeneratorHost@DirectUI@@QEAAJPEAUICalendarPanel@Primitives@Controls@Xaml@UI@Windows@@@Z
    long SetPanel(::Windows::UI::Xaml::Controls::Primitives::ICalendarPanel *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScrollViewer@CalendarViewGeneratorHost@DirectUI@@QEAAJPEAUIScrollViewer2@Controls@Xaml@UI@Windows@@@Z
    long SetScrollViewer(::Windows::UI::Xaml::Controls::IScrollViewer2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupContainerContentChangingAfterPrepare@CalendarViewGeneratorHost@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@HUSize@Foundation@6@@Z
    virtual long SetupContainerContentChangingAfterPrepare(::Windows::UI::Xaml::IDependencyObject *, IInspectable *, int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRaiseChoosingGroupHeaderContainer@CalendarViewGeneratorHost@DirectUI@@UEAAJPEAE@Z
    virtual long ShouldRaiseChoosingGroupHeaderContainer(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRaiseChoosingItemContainer@CalendarViewGeneratorHost@DirectUI@@UEAAJPEAE@Z
    virtual long ShouldRaiseChoosingItemContainer(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuggestContainerForContainerFromItemLookup@CalendarViewGeneratorHost@DirectUI@@UEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long SuggestContainerForContainerFromItemLookup(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScope@CalendarViewGeneratorHost@DirectUI@@QEAAJUDateTime@Foundation@Windows@@0PEA_N@Z
    long UpdateScope(WindissectOpaque, WindissectOpaque, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VirtualizationFinished@CalendarViewGeneratorHost@DirectUI@@UEAAJXZ
    virtual long VirtualizationFinished();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CollectionView@CalendarViewGeneratorHost@DirectUI@@UEAAJPEAPEAUICollectionView@Data@Xaml@UI@Windows@@@Z
    virtual long get_CollectionView(::Windows::UI::Xaml::Data::ICollectionView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@CalendarViewGeneratorHost@DirectUI@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_View@CalendarViewGeneratorHost@DirectUI@@UEAAJPEAPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long get_View(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CalendarViewGeneratorHost@DirectUI@@UEAA@XZ
    virtual ~CalendarViewGeneratorHost();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CalendarViewGeneratorHost@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CalendarViewGeneratorHost@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemFocusVisualMargin@CalendarViewGeneratorHost@DirectUI@@IEBA?AUThickness@Xaml@UI@Windows@@XZ
    ::Windows::UI::Xaml::Thickness GetItemFocusVisualMargin() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemMargin@CalendarViewGeneratorHost@DirectUI@@IEBA?AUThickness@Xaml@UI@Windows@@XZ
    ::Windows::UI::Xaml::Thickness GetItemMargin() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CalendarViewGeneratorHost@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

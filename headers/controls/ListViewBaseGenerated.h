#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 96 member(s).
namespace DirectUI {
class ListViewBaseGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildTree@ListViewBaseGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long BuildTree(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteViewChange@ListViewBaseGenerated@DirectUI@@UEAAJXZ
    virtual long CompleteViewChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteViewChangeFrom@ListViewBaseGenerated@DirectUI@@UEAAJPEAUISemanticZoomLocation@Controls@Xaml@UI@Windows@@0@Z
    virtual long CompleteViewChangeFrom(::Windows::UI::Xaml::Controls::ISemanticZoomLocation *, ::Windows::UI::Xaml::Controls::ISemanticZoomLocation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteViewChangeTo@ListViewBaseGenerated@DirectUI@@UEAAJPEAUISemanticZoomLocation@Controls@Xaml@UI@Windows@@0@Z
    virtual long CompleteViewChangeTo(::Windows::UI::Xaml::Controls::ISemanticZoomLocation *, ::Windows::UI::Xaml::Controls::ISemanticZoomLocation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeselectRange@ListViewBaseGenerated@DirectUI@@UEAAJPEAUIItemIndexRange@Data@Xaml@UI@Windows@@@Z
    virtual long DeselectRange(::Windows::UI::Xaml::Data::IItemIndexRange *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChoosingGroupHeaderContainerEventSourceNoRef@ListViewBaseGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVListViewBase@Controls@Xaml@UI@Windows@@PEAVChoosingGroupHeaderContainerEventArgs@2345@@Foundation@Windows@@UIListViewBase@Controls@Xaml@UI@3@UIChoosingGroupHeaderContainerEventArgs@5673@@2@@Z
    long GetChoosingGroupHeaderContainerEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChoosingItemContainerEventSourceNoRef@ListViewBaseGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVListViewBase@Controls@Xaml@UI@Windows@@PEAVChoosingItemContainerEventArgs@2345@@Foundation@Windows@@UIListViewBase@Controls@Xaml@UI@3@UIChoosingItemContainerEventArgs@5673@@2@@Z
    long GetChoosingItemContainerEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerContentChangingEventSourceNoRef@ListViewBaseGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVListViewBase@Controls@Xaml@UI@Windows@@PEAVContainerContentChangingEventArgs@2345@@Foundation@Windows@@UIListViewBase@Controls@Xaml@UI@3@UIContainerContentChangingEventArgs@5673@@2@@Z
    long GetContainerContentChangingEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDragItemsCompletedEventSourceNoRef@ListViewBaseGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVListViewBase@Controls@Xaml@UI@Windows@@PEAVDragItemsCompletedEventArgs@2345@@Foundation@Windows@@UIListViewBase@Controls@Xaml@UI@3@UIDragItemsCompletedEventArgs@5673@@2@@Z
    long GetDragItemsCompletedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDragItemsStartingEventSourceNoRef@ListViewBaseGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@UIDragItemsStartingEventHandler@Controls@Xaml@UI@Windows@@UIInspectable@@UIDragItemsStartingEventArgs@2345@@2@@Z
    long GetDragItemsStartingEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemClickEventSourceNoRef@ListViewBaseGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIItemClickEventHandler@Controls@Xaml@UI@Windows@@UIInspectable@@UIItemClickEventArgs@2345@@2@@Z
    long GetItemClickEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastInteractionItem@ListViewBaseGenerated@DirectUI@@UEAAJPEAPEAUISelectorItem@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long GetLastInteractionItem(::Windows::UI::Xaml::Controls::Primitives::ISelectorItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelativeScrollPosition@ListViewBaseGenerated@DirectUI@@QEAAJPEAUIListViewItemToKeyHandler@Controls@Xaml@UI@Windows@@PEAPEAUHSTRING__@@@Z
    long GetRelativeScrollPosition(::Windows::UI::Xaml::Controls::IListViewItemToKeyHandler *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ListViewBaseGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeViewChange@ListViewBaseGenerated@DirectUI@@UEAAJXZ
    virtual long InitializeViewChange();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBuildTreeSuspended@ListViewBaseGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long IsBuildTreeSuspended(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDragSource@ListViewBaseGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long IsDragSource(unsigned char *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ListViewBaseGenerated@DirectUI@@QEAA@XZ
    ListViewBaseGenerated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadMoreItemsAsync@ListViewBaseGenerated@DirectUI@@UEAAJPEAPEAU?$IAsyncOperation@ULoadMoreItemsResult@Data@Xaml@UI@Windows@@@Foundation@Windows@@@Z
    virtual long LoadMoreItemsAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeVisible@ListViewBaseGenerated@DirectUI@@UEAAJPEAUISemanticZoomLocation@Controls@Xaml@UI@Windows@@@Z
    virtual long MakeVisible(::Windows::UI::Xaml::Controls::ISemanticZoomLocation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackButtonPressed@ListViewBaseGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long OnBackButtonPressed(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareConnectedAnimation@ListViewBaseGenerated@DirectUI@@QEAAJPEAUHSTRING__@@PEAUIInspectable@@0PEAPEAUIConnectedAnimation@Animation@Media@Xaml@UI@Windows@@@Z
    long PrepareConnectedAnimation(HSTRING__*, IInspectable *, HSTRING__*, ::Windows::UI::Xaml::Media::Animation::IConnectedAnimation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollIntoView@ListViewBaseGenerated@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long ScrollIntoView(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollIntoViewWithAlignment@ListViewBaseGenerated@DirectUI@@UEAAJPEAUIInspectable@@W4ScrollIntoViewAlignment@Controls@Xaml@UI@Windows@@@Z
    virtual long ScrollIntoViewWithAlignment(IInspectable *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollIntoViewWithOptionalAnimation@ListViewBaseGenerated@DirectUI@@UEAAJPEAUIInspectable@@W4ScrollIntoViewAlignment@Controls@Xaml@UI@Windows@@E@Z
    virtual long ScrollIntoViewWithOptionalAnimation(IInspectable *, int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectAll@ListViewBaseGenerated@DirectUI@@UEAAJXZ
    virtual long SelectAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectRange@ListViewBaseGenerated@DirectUI@@UEAAJPEAUIItemIndexRange@Data@Xaml@UI@Windows@@@Z
    virtual long SelectRange(::Windows::UI::Xaml::Data::IItemIndexRange *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDesiredContainerUpdateDuration@ListViewBaseGenerated@DirectUI@@UEAAJUTimeSpan@Foundation@Windows@@@Z
    virtual long SetDesiredContainerUpdateDuration(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeScrollPositionAsync@ListViewBaseGenerated@DirectUI@@QEAAJPEAUHSTRING__@@PEAUIListViewKeyToItemHandler@Controls@Xaml@UI@Windows@@PEAPEAUIAsyncAction@Foundation@8@@Z
    long SetRelativeScrollPositionAsync(HSTRING__*, ::Windows::UI::Xaml::Controls::IListViewKeyToItemHandler *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutDownDeferredWork@ListViewBaseGenerated@DirectUI@@UEAAJXZ
    virtual long ShutDownDeferredWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartViewChangeFrom@ListViewBaseGenerated@DirectUI@@UEAAJPEAUISemanticZoomLocation@Controls@Xaml@UI@Windows@@0@Z
    virtual long StartViewChangeFrom(::Windows::UI::Xaml::Controls::ISemanticZoomLocation *, ::Windows::UI::Xaml::Controls::ISemanticZoomLocation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartViewChangeTo@ListViewBaseGenerated@DirectUI@@UEAAJPEAUISemanticZoomLocation@Controls@Xaml@UI@Windows@@0@Z
    virtual long StartViewChangeTo(::Windows::UI::Xaml::Controls::ISemanticZoomLocation *, ::Windows::UI::Xaml::Controls::ISemanticZoomLocation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryStartConnectedAnimationAsync@ListViewBaseGenerated@DirectUI@@QEAAJPEAUIConnectedAnimation@Animation@Media@Xaml@UI@Windows@@PEAUIInspectable@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@_N@Foundation@8@@Z
    long TryStartConnectedAnimationAsync(::Windows::UI::Xaml::Media::Animation::IConnectedAnimation *, IInspectable *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ChoosingGroupHeaderContainer@ListViewBaseGenerated@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVListViewBase@Controls@Xaml@UI@Windows@@PEAVChoosingGroupHeaderContainerEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ChoosingGroupHeaderContainer(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ChoosingItemContainer@ListViewBaseGenerated@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVListViewBase@Controls@Xaml@UI@Windows@@PEAVChoosingItemContainerEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ChoosingItemContainer(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ContainerContentChanging@ListViewBaseGenerated@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVListViewBase@Controls@Xaml@UI@Windows@@PEAVContainerContentChangingEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ContainerContentChanging(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DragItemsCompleted@ListViewBaseGenerated@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVListViewBase@Controls@Xaml@UI@Windows@@PEAVDragItemsCompletedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DragItemsCompleted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DragItemsStarting@ListViewBaseGenerated@DirectUI@@UEAAJPEAUIDragItemsStartingEventHandler@Controls@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DragItemsStarting(::Windows::UI::Xaml::Controls::IDragItemsStartingEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ItemClick@ListViewBaseGenerated@DirectUI@@UEAAJPEAUIItemClickEventHandler@Controls@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ItemClick(::Windows::UI::Xaml::Controls::IItemClickEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanDragItems@ListViewBaseGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_CanDragItems(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanReorderItems@ListViewBaseGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_CanReorderItems(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DataFetchSize@ListViewBaseGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_DataFetchSize(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Footer@ListViewBaseGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Footer(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FooterTemplate@ListViewBaseGenerated@DirectUI@@UEAAJPEAPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long get_FooterTemplate(::Windows::UI::Xaml::IDataTemplate * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FooterTransitions@ListViewBaseGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVTransition@Animation@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_FooterTransitions(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Header@ListViewBaseGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Header(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeaderTemplate@ListViewBaseGenerated@DirectUI@@UEAAJPEAPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long get_HeaderTemplate(::Windows::UI::Xaml::IDataTemplate * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeaderTransitions@ListViewBaseGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVTransition@Animation@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_HeaderTransitions(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IncrementalLoadingThreshold@ListViewBaseGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_IncrementalLoadingThreshold(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IncrementalLoadingTrigger@ListViewBaseGenerated@DirectUI@@UEAAJPEAW4IncrementalLoadingTrigger@Controls@Xaml@UI@Windows@@@Z
    virtual long get_IncrementalLoadingTrigger(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsActiveView@ListViewBaseGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsActiveView(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsItemClickEnabled@ListViewBaseGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsItemClickEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMultiSelectCheckBoxEnabled@ListViewBaseGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsMultiSelectCheckBoxEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsRegisteredForCallbacks@ListViewBaseGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsRegisteredForCallbacks(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSwipeEnabled@ListViewBaseGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsSwipeEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsZoomedInView@ListViewBaseGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsZoomedInView(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ReorderMode@ListViewBaseGenerated@DirectUI@@UEAAJPEAW4ListViewReorderMode@Controls@Xaml@UI@Windows@@@Z
    virtual long get_ReorderMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectedItems@ListViewBaseGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long get_SelectedItems(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectedRanges@ListViewBaseGenerated@DirectUI@@UEAAJPEAPEAU?$IVectorView@PEAVItemIndexRange@Data@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_SelectedRanges(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionMode@ListViewBaseGenerated@DirectUI@@UEAAJPEAW4ListViewSelectionMode@Controls@Xaml@UI@Windows@@@Z
    virtual long get_SelectionMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SemanticZoomOwner@ListViewBaseGenerated@DirectUI@@UEAAJPEAPEAUISemanticZoom@Controls@Xaml@UI@Windows@@@Z
    virtual long get_SemanticZoomOwner(::Windows::UI::Xaml::Controls::ISemanticZoom * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SingleSelectionFollowsFocus@ListViewBaseGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_SingleSelectionFollowsFocus(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CanDragItems@ListViewBaseGenerated@DirectUI@@UEAAJE@Z
    virtual long put_CanDragItems(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CanReorderItems@ListViewBaseGenerated@DirectUI@@UEAAJE@Z
    virtual long put_CanReorderItems(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DataFetchSize@ListViewBaseGenerated@DirectUI@@UEAAJN@Z
    virtual long put_DataFetchSize(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Footer@ListViewBaseGenerated@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_Footer(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FooterTemplate@ListViewBaseGenerated@DirectUI@@UEAAJPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long put_FooterTemplate(::Windows::UI::Xaml::IDataTemplate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FooterTransitions@ListViewBaseGenerated@DirectUI@@UEAAJPEAU?$IVector@PEAVTransition@Animation@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long put_FooterTransitions(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Header@ListViewBaseGenerated@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_Header(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HeaderTemplate@ListViewBaseGenerated@DirectUI@@UEAAJPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long put_HeaderTemplate(::Windows::UI::Xaml::IDataTemplate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HeaderTransitions@ListViewBaseGenerated@DirectUI@@UEAAJPEAU?$IVector@PEAVTransition@Animation@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long put_HeaderTransitions(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IncrementalLoadingThreshold@ListViewBaseGenerated@DirectUI@@UEAAJN@Z
    virtual long put_IncrementalLoadingThreshold(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IncrementalLoadingTrigger@ListViewBaseGenerated@DirectUI@@UEAAJW4IncrementalLoadingTrigger@Controls@Xaml@UI@Windows@@@Z
    virtual long put_IncrementalLoadingTrigger(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsActiveView@ListViewBaseGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsActiveView(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsItemClickEnabled@ListViewBaseGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsItemClickEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsMultiSelectCheckBoxEnabled@ListViewBaseGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsMultiSelectCheckBoxEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsRegisteredForCallbacks@ListViewBaseGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsRegisteredForCallbacks(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsSwipeEnabled@ListViewBaseGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsSwipeEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsZoomedInView@ListViewBaseGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsZoomedInView(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ReorderMode@ListViewBaseGenerated@DirectUI@@UEAAJW4ListViewReorderMode@Controls@Xaml@UI@Windows@@@Z
    virtual long put_ReorderMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SelectionMode@ListViewBaseGenerated@DirectUI@@UEAAJW4ListViewSelectionMode@Controls@Xaml@UI@Windows@@@Z
    virtual long put_SelectionMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SemanticZoomOwner@ListViewBaseGenerated@DirectUI@@UEAAJPEAUISemanticZoom@Controls@Xaml@UI@Windows@@@Z
    virtual long put_SemanticZoomOwner(::Windows::UI::Xaml::Controls::ISemanticZoom *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShowsScrollingPlaceholders@ListViewBaseGenerated@DirectUI@@UEAAJE@Z
    virtual long put_ShowsScrollingPlaceholders(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SingleSelectionFollowsFocus@ListViewBaseGenerated@DirectUI@@UEAAJE@Z
    virtual long put_SingleSelectionFollowsFocus(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ChoosingGroupHeaderContainer@ListViewBaseGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ChoosingGroupHeaderContainer(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ChoosingItemContainer@ListViewBaseGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ChoosingItemContainer(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ContainerContentChanging@ListViewBaseGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ContainerContentChanging(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DragItemsCompleted@ListViewBaseGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DragItemsCompleted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DragItemsStarting@ListViewBaseGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DragItemsStarting(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ItemClick@ListViewBaseGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ItemClick(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ListViewBaseGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventAddHandlerByIndex@ListViewBaseGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@E@Z
    virtual long EventAddHandlerByIndex(int, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventRemoveHandlerByIndex@ListViewBaseGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@@Z
    virtual long EventRemoveHandlerByIndex(int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ListViewBaseGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ListViewBaseGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ListViewBaseGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

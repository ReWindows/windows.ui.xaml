#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 216 member(s).
namespace DirectUI {
class ListViewBase {
public:
    class PanVelocity;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@ListViewBase@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long ArrangeOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildTreeImpl@ListViewBase@DirectUI@@QEAAJPEAE@Z
    long BuildTreeImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanRecycleContainer@ListViewBase@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAE@Z
    virtual long CanRecycleContainer(::Windows::UI::Xaml::IDependencyObject *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearGroupContainerForGroup@ListViewBase@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUICollectionViewGroup@Data@456@@Z
    virtual long ClearGroupContainerForGroup(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::Data::ICollectionViewGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteViewChangeFromImpl@ListViewBase@DirectUI@@QEAAJPEAUISemanticZoomLocation@Controls@Xaml@UI@Windows@@0@Z
    long CompleteViewChangeFromImpl(::Windows::UI::Xaml::Controls::ISemanticZoomLocation *, ::Windows::UI::Xaml::Controls::ISemanticZoomLocation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteViewChangeToImpl@ListViewBase@DirectUI@@QEAAJPEAUISemanticZoomLocation@Controls@Xaml@UI@Windows@@0@Z
    long CompleteViewChangeToImpl(::Windows::UI::Xaml::Controls::ISemanticZoomLocation *, ::Windows::UI::Xaml::Controls::ISemanticZoomLocation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeselectRangeImpl@ListViewBase@DirectUI@@QEAAJPEAUIItemIndexRange@Data@Xaml@UI@Windows@@@Z
    long DeselectRangeImpl(::Windows::UI::Xaml::Data::IItemIndexRange *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDropOffsetToRoot@ListViewBase@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long GetDropOffsetToRoot(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDropTargetDropEffect@ListViewBase@DirectUI@@QEAAJPEAPEAUHSTRING__@@@Z
    long GetDropTargetDropEffect(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDropTargetDropEffects@ListViewBase@DirectUI@@QEAAJPEAIPEAPEAPEAUHSTRING__@@@Z
    long GetDropTargetDropEffects(unsigned int *, HSTRING__* * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstFocusableElementOverride@ListViewBase@DirectUI@@UEAAJPEAPEAVDependencyObject@2@@Z
    virtual long GetFirstFocusableElementOverride(::DirectUI::DependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusableElement@ListViewBase@DirectUI@@QEAAJ_NPEAPEAVDependencyObject@2@@Z
    long GetFocusableElement(bool, ::DirectUI::DependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsInPhoneReorderMode@ListViewBase@DirectUI@@QEAAJPEAE@Z
    long GetIsInPhoneReorderMode(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastFocusableElementOverride@ListViewBase@DirectUI@@UEAAJPEAPEAVDependencyObject@2@@Z
    virtual long GetLastFocusableElementOverride(::DirectUI::DependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlainText@ListViewBase@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPlainText(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelativeScrollPositionImpl@ListViewBase@DirectUI@@QEAAJPEAUIListViewItemToKeyHandler@Controls@Xaml@UI@Windows@@PEAPEAUHSTRING__@@@Z
    long GetRelativeScrollPositionImpl(::Windows::UI::Xaml::Controls::IListViewItemToKeyHandler *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReorderHintDirection@ListViewBase@DirectUI@@QEAAJPEAVListViewBaseItem@2@PEAW4ReorderHintDirection@2@@Z
    long GetReorderHintDirection(ListViewBaseItem *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GroupHeaderItemFocused@ListViewBase@DirectUI@@QEAAJPEAVListViewBaseHeaderItem@2@@Z
    long GroupHeaderItemFocused(ListViewBaseHeaderItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeViewChangeImpl@ListViewBase@DirectUI@@QEAAJXZ
    long InitializeViewChangeImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsContainerDragDropOwner@ListViewBase@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAE@Z
    long IsContainerDragDropOwner(::Windows::UI::Xaml::IUIElement *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDraggableOrPannableImpl@ListViewBase@DirectUI@@UEAA_NXZ
    virtual bool IsDraggableOrPannableImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsItemReorderable@ListViewBase@DirectUI@@QEAAJPEAVListViewBaseItem@2@PEAE@Z
    long IsItemReorderable(ListViewBaseItem *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsScrollable@ListViewBase@DirectUI@@QEAAJPEA_N@Z
    long IsScrollable(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadMoreItemsAsyncImpl@ListViewBase@DirectUI@@QEAAJPEAPEAU?$IAsyncOperation@ULoadMoreItemsResult@Data@Xaml@UI@Windows@@@Foundation@Windows@@@Z
    long LoadMoreItemsAsyncImpl(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeVisibleImpl@ListViewBase@DirectUI@@QEAAJPEAUISemanticZoomLocation@Controls@Xaml@UI@Windows@@@Z
    long MakeVisibleImpl(::Windows::UI::Xaml::Controls::ISemanticZoomLocation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@ListViewBase@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long MeasureOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyStateChange@ListViewBase@DirectUI@@UEAAJW4DMManipulationState@2@MMMMMEEE@Z
    virtual long NotifyStateChange(int, float, float, float, float, float, unsigned char, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@ListViewBase@DirectUI@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGroupFocusChanged@ListViewBase@DirectUI@@QEAAJEEW4FocusState@Xaml@UI@Windows@@@Z
    long OnGroupFocusChanged(unsigned char, unsigned char, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGroupHeaderKeyDown@ListViewBase@DirectUI@@QEAAJPEAUIInspectable@@W4VirtualKey@System@Windows@@1PEAE@Z
    long OnGroupHeaderKeyDown(IInspectable *, int, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPhoneReorderDirectManipulationInteraction@ListViewBase@DirectUI@@QEAAJPEAVListViewBaseItem@2@@Z
    long OnPhoneReorderDirectManipulationInteraction(ListViewBaseItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareConnectedAnimationImpl@ListViewBase@DirectUI@@QEAAJPEAUHSTRING__@@PEAUIInspectable@@0PEAPEAUIConnectedAnimation@Animation@Media@Xaml@UI@Windows@@@Z
    long PrepareConnectedAnimationImpl(HSTRING__*, IInspectable *, HSTRING__*, ::Windows::UI::Xaml::Media::Animation::IConnectedAnimation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareGroupContainer@ListViewBase@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUICollectionViewGroup@Data@456@@Z
    virtual long PrepareGroupContainer(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::Data::ICollectionViewGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseChoosingGroupHeaderContainer@ListViewBase@DirectUI@@UEAAJPEAUIChoosingGroupHeaderContainerEventArgs@Controls@Xaml@UI@Windows@@@Z
    virtual long RaiseChoosingGroupHeaderContainer(::Windows::UI::Xaml::Controls::IChoosingGroupHeaderContainerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseChoosingItemContainer@ListViewBase@DirectUI@@UEAAJPEAUIChoosingItemContainerEventArgs@Controls@Xaml@UI@Windows@@@Z
    virtual long RaiseChoosingItemContainer(::Windows::UI::Xaml::Controls::IChoosingItemContainerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseContainerContentChangingOnRecycle@ListViewBase@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long RaiseContainerContentChangingOnRecycle(::Windows::UI::Xaml::IUIElement *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterIfWorkPending@ListViewBase@DirectUI@@QEAAJXZ
    long RegisterIfWorkPending();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWorkForContainer@ListViewBase@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long RegisterWorkForContainer(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWorkFromArgs@ListViewBase@DirectUI@@UEAAJPEAUIContainerContentChangingEventArgs@Controls@Xaml@UI@Windows@@@Z
    virtual long RegisterWorkFromArgs(::Windows::UI::Xaml::Controls::IContainerContentChangingEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollIntoViewWithOptionalAnimationImpl@ListViewBase@DirectUI@@QEAAJPEAUIInspectable@@W4ScrollIntoViewAlignment@Controls@Xaml@UI@Windows@@E@Z
    long ScrollIntoViewWithOptionalAnimationImpl(IInspectable *, int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectRangeImpl@ListViewBase@DirectUI@@QEAAJPEAUIItemIndexRange@Data@Xaml@UI@Windows@@@Z
    long SelectRangeImpl(::Windows::UI::Xaml::Data::IItemIndexRange *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeScrollPositionAsyncImpl@ListViewBase@DirectUI@@QEAAJPEAUHSTRING__@@PEAUIListViewKeyToItemHandler@Controls@Xaml@UI@Windows@@PEAPEAUIAsyncAction@Foundation@8@@Z
    long SetRelativeScrollPositionAsyncImpl(HSTRING__*, ::Windows::UI::Xaml::Controls::IListViewKeyToItemHandler *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupContainerContentChangingAfterPrepare@ListViewBase@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@HUSize@Foundation@6@@Z
    virtual long SetupContainerContentChangingAfterPrepare(::Windows::UI::Xaml::IDependencyObject *, IInspectable *, int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRaiseChoosingGroupHeaderContainer@ListViewBase@DirectUI@@UEAAJPEAE@Z
    virtual long ShouldRaiseChoosingGroupHeaderContainer(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRaiseChoosingItemContainer@ListViewBase@DirectUI@@UEAAJPEAE@Z
    virtual long ShouldRaiseChoosingItemContainer(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutDownDeferredWorkImpl@ListViewBase@DirectUI@@QEAAJXZ
    long ShutDownDeferredWorkImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartViewChangeFromImpl@ListViewBase@DirectUI@@QEAAJPEAUISemanticZoomLocation@Controls@Xaml@UI@Windows@@0@Z
    long StartViewChangeFromImpl(::Windows::UI::Xaml::Controls::ISemanticZoomLocation *, ::Windows::UI::Xaml::Controls::ISemanticZoomLocation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuggestContainerForContainerFromItemLookup@ListViewBase@DirectUI@@UEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long SuggestContainerForContainerFromItemLookup(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryStartConnectedAnimationAsyncImpl@ListViewBase@DirectUI@@QEAAJPEAUIConnectedAnimation@Animation@Media@Xaml@UI@Windows@@PEAUIInspectable@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@_N@Foundation@8@@Z
    long TryStartConnectedAnimationAsyncImpl(::Windows::UI::Xaml::Media::Animation::IConnectedAnimation *, IInspectable *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateClip@ListViewBase@DirectUI@@QEAAJXZ
    long UpdateClip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDragPositionOnCapturedTarget@ListViewBase@DirectUI@@QEAAJW4DragDropMessageType@2@UPoint@Foundation@Windows@@@Z
    long UpdateDragPositionOnCapturedTarget(int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseLegacyPhoneReorderMode@ListViewBase@DirectUI@@SA_NXZ
    static bool UseLegacyPhoneReorderMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectedRangesImpl@ListViewBase@DirectUI@@QEAAJPEAPEAU?$IVectorView@PEAVItemIndexRange@Data@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    long get_SelectedRangesImpl(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowsScrollingPlaceholders@ListViewBase@DirectUI@@UEAAJPEAE@Z
    virtual long get_ShowsScrollingPlaceholders(unsigned char *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelDrag@ListViewBase@DirectUI@@IEAAJXZ
    long CancelDrag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContainerForItemOverride@ListViewBase@DirectUI@@MEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long ClearContainerForItemOverride(::Windows::UI::Xaml::IDependencyObject *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFirstSelectableItemInGroup@ListViewBase@DirectUI@@IEAAJIEHPEAHPEAE@Z
    long FindFirstSelectableItemInGroup(unsigned int, unsigned char, int, int *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusImpl@ListViewBase@DirectUI@@MEAAJW4FocusState@Xaml@UI@Windows@@PEAE@Z
    virtual long FocusImpl(int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusItem@ListViewBase@DirectUI@@IEAAJW4FocusState@Xaml@UI@Windows@@PEAVListViewBaseItem@2@@Z
    long FocusItem(int, ListViewBaseItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClosestIndexToItemInGroupPanel@ListViewBase@DirectUI@@IEAAJIIW4KeyNavigationAction@Controls@Xaml@UI@Windows@@PEAUIGroupItem@4567@PEAHPEAE3@Z
    long GetClosestIndexToItemInGroupPanel(unsigned int, unsigned int, int, ::Windows::UI::Xaml::Controls::IGroupItem *, int *, unsigned char *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupCount@ListViewBase@DirectUI@@IEAAJPEAH@Z
    long GetGroupCount(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupInformation@ListViewBase@DirectUI@@IEAAJIPEAI0PEAE@Z
    long GetGroupInformation(unsigned int, unsigned int *, unsigned int *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationSourcePoint@ListViewBase@DirectUI@@IEAAJPEAVFrameworkElement@2@W4KeyNavigationAction@Controls@Xaml@UI@Windows@@PEAUPoint@Foundation@8@@Z
    long GetNavigationSourcePoint(::DirectUI::FrameworkElement *, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ListViewBase@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInExclusiveInteraction@ListViewBase@DirectUI@@IEAAEXZ
    unsigned char IsInExclusiveInteraction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrepareContainerForItemDeferred@ListViewBase@DirectUI@@MEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAE@Z
    virtual long IsPrepareContainerForItemDeferred(::Windows::UI::Xaml::IDependencyObject *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelectionPatternApplicable@ListViewBase@DirectUI@@MEAAJPEA_N@Z
    virtual long IsSelectionPatternApplicable(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemFocused@ListViewBase@DirectUI@@MEAAJPEAVSelectorItem@2@@Z
    virtual long ItemFocused(::DirectUI::SelectorItem *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ListViewBase@DirectUI@@IEAA@XZ
    ListViewBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragEnter@ListViewBase@DirectUI@@MEAAJPEAUIDragEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnDragEnter(::Windows::UI::Xaml::IDragEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragItemsStarting@ListViewBase@DirectUI@@IEAAJPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAUIDataPackage@DataTransfer@ApplicationModel@6@PEAE@Z
    long OnDragItemsStarting(WindissectOpaque *, ::Windows::ApplicationModel::DataTransfer::IDataPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragLeave@ListViewBase@DirectUI@@MEAAJPEAUIDragEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnDragLeave(::Windows::UI::Xaml::IDragEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragMoveGesture@ListViewBase@DirectUI@@IEAAJPEAUIPointer@Input@Xaml@UI@Windows@@UPoint@Foundation@7@PEAE@Z
    long OnDragMoveGesture(::Windows::UI::Xaml::Input::IPointer *, WindissectOpaque, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragOver@ListViewBase@DirectUI@@MEAAJPEAUIDragEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnDragOver(::Windows::UI::Xaml::IDragEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDrop@ListViewBase@DirectUI@@MEAAJPEAUIDragEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnDrop(::Windows::UI::Xaml::IDragEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDropGesture@ListViewBase@DirectUI@@IEAAJPEAUIPointer@Input@Xaml@UI@Windows@@AEBUPoint@Foundation@7@PEAE@Z
    long OnDropGesture(::Windows::UI::Xaml::Input::IPointer *, WindissectOpaque const &, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusChanged@ListViewBase@DirectUI@@IEAAJE@Z
    long OnFocusChanged(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@ListViewBase@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnGotFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemClick@ListViewBase@DirectUI@@IEAAJPEAVListViewBaseItem@2@@Z
    long OnItemClick(ListViewBaseItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemPrimaryInteractionGesture@ListViewBase@DirectUI@@IEAAJPEAVListViewBaseItem@2@EPEAE@Z
    long OnItemPrimaryInteractionGesture(ListViewBaseItem *, unsigned char, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemSecondaryInteractionGesture@ListViewBase@DirectUI@@IEAAJPEAVListViewBaseItem@2@EPEAE@Z
    long OnItemSecondaryInteractionGesture(ListViewBaseItem *, unsigned char, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsChanged@ListViewBase@DirectUI@@MEAAJPEAUIVectorChangedEventArgs@Collections@Foundation@Windows@@@Z
    virtual long OnItemsChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsHostAvailable@ListViewBase@DirectUI@@MEAAJXZ
    virtual long OnItemsHostAvailable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@ListViewBase@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@ListViewBase@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyUp(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyboardNavigation@ListViewBase@DirectUI@@IEAAJW4VirtualKey@System@Windows@@0EPEAHPEAW4ElementType@Controls@Xaml@UI@5@@Z
    long OnKeyboardNavigation(int, int, unsigned char, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@ListViewBase@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnLostFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@ListViewBase@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerCaptureLost(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@ListViewBase@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerMoved(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@ListViewBase@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerReleased(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@ListViewBase@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReorderDrop@ListViewBase@DirectUI@@IEAAJUPoint@Foundation@Windows@@@Z
    long OnReorderDrop(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectItemPrimary@ListViewBase@DirectUI@@IEAAJPEAVListViewBaseItem@2@_N1PEAE@Z
    long OnSelectItemPrimary(ListViewBaseItem *, bool, bool, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectItemSecondary@ListViewBase@DirectUI@@IEAAJPEAVListViewBaseItem@2@EPEAE@Z
    long OnSelectItemSecondary(ListViewBaseItem *, unsigned char, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChanged@ListViewBase@DirectUI@@MEAAJHHPEAUIInspectable@@0EW4FocusNavigationDirection@Input@Xaml@UI@Windows@@@Z
    virtual long OnSelectionChanged(int, int, IInspectable *, IInspectable *, unsigned char, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreProcessContentPreparation@ListViewBase@DirectUI@@MEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long PreProcessContentPreparation(::Windows::UI::Xaml::IDependencyObject *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareContainerForItemOverride@ListViewBase@DirectUI@@MEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long PrepareContainerForItemOverride(::Windows::UI::Xaml::IDependencyObject *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCandidateTabStopOverride@ListViewBase@DirectUI@@MEAAJPEAVDependencyObject@2@00_NPEAPEAV32@PEAE@Z
    virtual long ProcessCandidateTabStopOverride(::DirectUI::DependencyObject *, ::DirectUI::DependencyObject *, ::DirectUI::DependencyObject *, bool, ::DirectUI::DependencyObject * *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTabStopOverride@ListViewBase@DirectUI@@MEAAJPEAVDependencyObject@2@0_N1PEAPEAV32@PEAE@Z
    virtual long ProcessTabStopOverride(::DirectUI::DependencyObject *, ::DirectUI::DependencyObject *, bool, bool, ::DirectUI::DependencyObject * *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryGroupFallbackForGroupNavigation@ListViewBase@DirectUI@@IEAAJW4VirtualKey@System@Windows@@HPEAHPEAE@Z
    long QueryGroupFallbackForGroupNavigation(int, int, int *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryGroupFallbackForItemNavigation@ListViewBase@DirectUI@@IEAAJPEAUIPanel@Controls@Xaml@UI@Windows@@W4VirtualKey@System@7@HHHPEAHPEAE@Z
    long QueryGroupFallbackForItemNavigation(::Windows::UI::Xaml::Controls::IPanel *, int, int, int, int, int *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusedItem@ListViewBase@DirectUI@@MEAAJHEEW4FocusState@Xaml@UI@Windows@@EW4FocusNavigationDirection@Input@456@@Z
    virtual long SetFocusedItem(int, unsigned char, unsigned char, int, unsigned char, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusedItem@ListViewBase@DirectUI@@MEAAJHEEW4FocusNavigationDirection@Input@Xaml@UI@Windows@@@Z
    virtual long SetFocusedItem(int, unsigned char, unsigned char, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleSemanticZoomActiveView@ListViewBase@DirectUI@@IEAAJPEAUIInspectable@@PEAE@Z
    long ToggleSemanticZoomActiveView(IInspectable *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateKeyToKeyNavigationAction@ListViewBase@DirectUI@@IEAAJW4VirtualKey@System@Windows@@PEAW4KeyNavigationAction@Controls@Xaml@UI@5@PEA_N@Z
    long TranslateKeyToKeyNavigationAction(int, int *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanSelectMultiple@ListViewBase@DirectUI@@MEAAJPEAE@Z
    virtual long get_CanSelectMultiple(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ListViewBase@DirectUI@@MEAA@XZ
    virtual ~ListViewBase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreSamePointer@ListViewBase@DirectUI@@CAJPEAUIPointer@Input@Xaml@UI@Windows@@0PEAE@Z
    static long AreSamePointer(::Windows::UI::Xaml::Input::IPointer *, ::Windows::UI::Xaml::Input::IPointer *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachScrollViewerPropertyChanged@ListViewBase@DirectUI@@AEAAJXZ
    long AttachScrollViewerPropertyChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanPerformKeyboardNavigation@ListViewBase@DirectUI@@AEAAJW4VirtualKey@System@Windows@@PEA_N@Z
    long CanPerformKeyboardNavigation(int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelScrollViewerDirectManipulation@ListViewBase@DirectUI@@AEAAJXZ
    long CancelScrollViewerDirectManipulation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckReorderAndGroupingCompatibility@ListViewBase@DirectUI@@AEAAJW4ListViewReorderMode@Controls@Xaml@UI@Windows@@@Z
    long CheckReorderAndGroupingCompatibility(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearHoldingItem@ListViewBase@DirectUI@@AEAAJPEAVListViewBaseItem@2@@Z
    long ClearHoldingItem(ListViewBaseItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearHoldingState@ListViewBase@DirectUI@@AEAAJXZ
    long ClearHoldingState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearInteractedItemPointerState@ListViewBase@DirectUI@@AEAAJXZ
    long ClearInteractedItemPointerState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPointerInteractionItem@ListViewBase@DirectUI@@AEAAJPEAVListViewBaseItem@2@@Z
    long ClearPointerInteractionItem(ListViewBaseItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPrimaryDragContainer@ListViewBase@DirectUI@@AEAAJXZ
    long ClearPrimaryDragContainer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReorderHintAndDragOverItems@ListViewBase@DirectUI@@AEAAJXZ
    long ClearReorderHintAndDragOverItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReorderableItem@ListViewBase@DirectUI@@AEAAJXZ
    long ClearReorderableItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteDrop@ListViewBase@DirectUI@@AEAAJXZ
    long CompleteDrop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeEdgeScrollVelocity@ListViewBase@DirectUI@@AEAAJUPoint@Foundation@Windows@@PEAUPanVelocity@12@@Z
    long ComputeEdgeScrollVelocity(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeEdgeScrollVelocityFromEdgeDistance@ListViewBase@DirectUI@@AEAAMN@Z
    float ComputeEdgeScrollVelocityFromEdgeDistance(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfirmReorderableItem@ListViewBase@DirectUI@@AEAAJE@Z
    long ConfirmReorderableItem(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCopyOfDragGrabbedItems@ListViewBase@DirectUI@@AEAAJPEAIPEAPEAPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@@Z
    long CreateCopyOfDragGrabbedItems(unsigned int *, ::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSerializationBuffer@ListViewBase@DirectUI@@AEBAJAEBUListSerializationData@12@PEAPEAUIBuffer@Streams@Storage@Windows@@@Z
    long CreateSerializationBuffer(WindissectOpaque const &, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecodeBuffer@ListViewBase@DirectUI@@AEAAJPEAUHSTRING__@@PEAPEAUIBuffer@Streams@Storage@Windows@@@Z
    long DecodeBuffer(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyStartEdgeScrollTimer@ListViewBase@DirectUI@@AEAAJXZ
    long DestroyStartEdgeScrollTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachScrollViewerPropertyChanged@ListViewBase@DirectUI@@AEAAJXZ
    long DetachScrollViewerPropertyChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableListViewBaseItemIfGroupIsEmpty@ListViewBase@DirectUI@@EEAAJPEAVListViewBaseItem@2@PEAUIInspectable@@@Z
    virtual long DisableListViewBaseItemIfGroupIsEmpty(ListViewBaseItem *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DropCausesReorder@ListViewBase@DirectUI@@AEAAJPEAE@Z
    long DropCausesReorder(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EncodeBuffer@ListViewBase@DirectUI@@AEAAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAUHSTRING__@@@Z
    long EncodeBuffer(WindissectOpaque *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureLiveReorderTimer@ListViewBase@DirectUI@@AEAAJXZ
    long EnsureLiveReorderTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureReorderableItemConfirmationDelayTimer@ListViewBase@DirectUI@@AEAAJXZ
    long EnsureReorderableItemConfirmationDelayTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureScrollHostOffsetChangeAction@ListViewBase@DirectUI@@AEAAJXZ
    long EnsureScrollHostOffsetChangeAction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureStartEdgeScrollTimer@ListViewBase@DirectUI@@AEAAJXZ
    long EnsureStartEdgeScrollTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteDeferredScrollCommand@ListViewBase@DirectUI@@AEAAJXZ
    long ExecuteDeferredScrollCommand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFirstItem@ListViewBase@DirectUI@@AEAAJIPEAHPEAPEAUIInspectable@@@Z
    long FindFirstItem(unsigned int, int *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextTabStopCandidateFromItem@ListViewBase@DirectUI@@AEAAJH_N0PEAHPEA_N@Z
    long FindNextTabStopCandidateFromItem(int, bool, bool, int *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationString@ListViewBase@DirectUI@@AEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAG@Z
    long GetAutomationString(::Windows::UI::Xaml::IDependencyObject *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBlankDataPackage@ListViewBase@DirectUI@@AEAAJPEAPEAUIDataPackage@DataTransfer@ApplicationModel@Windows@@@Z
    long GetBlankDataPackage(::Windows::ApplicationModel::DataTransfer::IDataPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultShowsScrollingPlaceholdersValue@ListViewBase@DirectUI@@AEAAEXZ
    unsigned char GetDefaultShowsScrollingPlaceholdersValue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveSelectionMode@ListViewBase@DirectUI@@AEAAJPEAW4ListViewSelectionMode@Controls@Xaml@UI@Windows@@@Z
    long GetEffectiveSelectionMode(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementTypeTransition@ListViewBase@DirectUI@@CA?AW4ElementType@12@W4312@_N@Z
    static int GetElementTypeTransition(int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusCandidateFromPanel@ListViewBase@DirectUI@@AEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long GetFocusCandidateFromPanel(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusableElementForModernPanel@ListViewBase@DirectUI@@AEAAJEPEAPEAVDependencyObject@2@@Z
    long GetFocusableElementForModernPanel(unsigned char, ::DirectUI::DependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupFromItem@ListViewBase@DirectUI@@AEAAJIPEAPEAUICollectionViewGroup@Data@Xaml@UI@Windows@@PEAPEAUIGroupItem@Controls@567@PEAH2@Z
    long GetGroupFromItem(unsigned int, ::Windows::UI::Xaml::Data::ICollectionViewGroup * *, ::Windows::UI::Xaml::Controls::IGroupItem * *, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsDragEnabled@ListViewBase@DirectUI@@AEAAJPEAE@Z
    long GetIsDragEnabled(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemFromGroup@ListViewBase@DirectUI@@AEAAJPEAUICollectionViewGroup@Data@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    long GetItemFromGroup(::Windows::UI::Xaml::Data::ICollectionViewGroup *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsCount@ListViewBase@DirectUI@@AEAAJPEAH@Z
    long GetItemsCount(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutSlot@ListViewBase@DirectUI@@AEAAJHPEAVLayoutInformation@2@PEAURect@Foundation@Windows@@@Z
    long GetLayoutSlot(int, ::DirectUI::LayoutInformation *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextFocusablePeer@ListViewBase@DirectUI@@AEAAJ_NPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long GetNextFocusablePeer(bool, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextTabStop@ListViewBase@DirectUI@@AEAAJW4ElementType@12@_NPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long GetNextTabStop(int, bool, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextTabStopForElementType@ListViewBase@DirectUI@@AEAAJW4ElementType@12@_NPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long GetNextTabStopForElementType(int, bool, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPanelOrientation@ListViewBase@DirectUI@@AEAAJPEAW4Orientation@Controls@Xaml@UI@Windows@@@Z
    long GetPanelOrientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GroupHasElements@ListViewBase@DirectUI@@AEAAJIPEAE@Z
    long GroupHasElements(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasBoundaryEmptyGroup@ListViewBase@DirectUI@@AEAAJEPEAE@Z
    long HasBoundaryEmptyGroup(unsigned char, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IdentifyParentElement@ListViewBase@DirectUI@@AEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAW4ElementType@12@PEAPEAU3456@@Z
    long IdentifyParentElement(::Windows::UI::Xaml::IDependencyObject *, int *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDataSourceItemsRangeInfo@ListViewBase@DirectUI@@AEAAJXZ
    long InitializeDataSourceItemsRangeInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDataSourceSelectionInfo@ListViewBase@DirectUI@@AEAAJXZ
    long InitializeDataSourceSelectionInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeDataSourceRangesChanged@ListViewBase@DirectUI@@AEAAJXZ
    long InvokeDataSourceRangesChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeDataSourceRangesChangedHelper@ListViewBase@DirectUI@@AEAAJPEAUIItemIndexRange@Data@Xaml@UI@Windows@@PEAV?$TrackerCollection@PEAVItemIndexRange@Data@Xaml@UI@Windows@@@2@@Z
    long InvokeDataSourceRangesChangedHelper(::Windows::UI::Xaml::Data::IItemIndexRange *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGroupItemSelectable@ListViewBase@DirectUI@@CAJPEAUIGroupHeaderMapping@2@IPEAE@Z
    static long IsGroupItemSelectable(::DirectUI::IGroupHeaderMapping *, unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsItemReorderingActive@ListViewBase@DirectUI@@AEAAJPEAE@Z
    long IsItemReorderingActive(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsItemSelectable@ListViewBase@DirectUI@@CAJPEAUIItemContainerMapping@Controls@Xaml@UI@Windows@@IPEAE@Z
    static long IsItemSelectable(::Windows::UI::Xaml::Controls::IItemContainerMapping *, unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsListViewBaseHeaderItem@ListViewBase@DirectUI@@CAEPEAUIInspectable@@@Z
    static unsigned char IsListViewBaseHeaderItem(IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsListViewBaseItem@ListViewBase@DirectUI@@CAEPEAUIInspectable@@@Z
    static unsigned char IsListViewBaseItem(IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNotGroupingAndHostIsLookupPanel@ListViewBase@DirectUI@@AEAAJPEAE@Z
    long IsNotGroupingAndHostIsLookupPanel(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LiveReorderTimerTickHandler@ListViewBase@DirectUI@@AEAAJXZ
    long LiveReorderTimerTickHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadMoreItemsAsyncInternal@ListViewBase@DirectUI@@AEAAJPEAVLoadMoreItemsOperation@2@PEAPEAUIAsyncInfo@@@Z
    long LoadMoreItemsAsyncInternal(::DirectUI::LoadMoreItemsOperation *, IAsyncInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadMoreItemsIfNeeded@ListViewBase@DirectUI@@AEAAJUSize@Foundation@Windows@@@Z
    long LoadMoreItemsIfNeeded(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeRangeSelection@ListViewBase@DirectUI@@AEAAJIE@Z
    long MakeRangeSelection(unsigned int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeRangeSelection@ListViewBase@DirectUI@@AEAAJPEAVListViewBaseItem@2@E@Z
    long MakeRangeSelection(ListViewBaseItem *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeSingleSelection@ListViewBase@DirectUI@@AEAAJPEAVListViewBaseItem@2@W4FocusNavigationDirection@Input@Xaml@UI@Windows@@@Z
    long MakeSingleSelection(ListViewBaseItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeSingleSelection@ListViewBase@DirectUI@@EEAAJIEPEAUIInspectable@@W4FocusNavigationDirection@Input@Xaml@UI@Windows@@@Z
    virtual long MakeSingleSelection(unsigned int, unsigned char, IInspectable *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeToggleSelection@ListViewBase@DirectUI@@AEAAJPEAVListViewBaseItem@2@@Z
    long MakeToggleSelection(ListViewBaseItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkReorderableItemCandidate@ListViewBase@DirectUI@@AEAAJPEAVListViewBaseItem@2@@Z
    long MarkReorderableItemCandidate(ListViewBaseItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDragVisualCreated@ListViewBase@DirectUI@@AEAAJPEAVDragDropVisual@2@@Z
    long NotifyDragVisualCreated(::DirectUI::DragDropVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDirectManipulationTransformChanged@ListViewBase@DirectUI@@AEAAJMMM@Z
    long OnDirectManipulationTransformChanged(float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragCompleted@ListViewBase@DirectUI@@AEAAJPEAU?$IAsyncOperation@W4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Foundation@Windows@@W4AsyncStatus@45ABI@@PEAU?$IVector@PEAUIInspectable@@@Collections@45@@Z
    long OnDragCompleted(WindissectOpaque *, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGettingFocus@ListViewBase@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUIGettingFocusEventArgs@Input@456@@Z
    long OnGettingFocus(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::Input::IGettingFocusEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsSelectionActiveChanged@ListViewBase@DirectUI@@AEAAJXZ
    long OnIsSelectionActiveChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyboardReorder@ListViewBase@DirectUI@@AEAAJW4KeyboardReorderDirection@12@PEAVListViewBaseItem@2@@Z
    long OnKeyboardReorder(int, ListViewBaseItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoadAsyncCompleted@ListViewBase@DirectUI@@AEAAJPEAU?$IAsyncOperation@ULoadMoreItemsResult@Data@Xaml@UI@Windows@@@Foundation@Windows@@W4AsyncStatus@45ABI@@@Z
    long OnLoadAsyncCompleted(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@ListViewBase@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnLoaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReorderModeChanged@ListViewBase@DirectUI@@AEAAJAEBUPropertyChangedParams@@@Z
    long OnReorderModeChanged(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollHostOffsetsChanged@ListViewBase@DirectUI@@AEAAJXZ
    long OnScrollHostOffsetsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollHostPropertyChanged@ListViewBase@DirectUI@@AEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEBVCDependencyProperty@@@Z
    long OnScrollHostPropertyChanged(::Windows::UI::Xaml::IDependencyObject *, CDependencyProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionModeChanged@ListViewBase@DirectUI@@AEAAJW4ListViewSelectionMode@Controls@Xaml@UI@Windows@@0@Z
    long OnSelectionModeChanged(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloaded@ListViewBase@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnUnloaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowActivated@ListViewBase@DirectUI@@AEAAJPEAUIInspectable@@PEAUIWindowActivatedEventArgs@Core@UI@Windows@@@Z
    long OnWindowActivated(IInspectable *, ::Windows::UI::Core::IWindowActivatedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverrideContainerArrangeBounds@ListViewBase@DirectUI@@EEAAJHURect@Foundation@Windows@@PEAU345@@Z
    virtual long OverrideContainerArrangeBounds(int, WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseSerializationBuffer@ListViewBase@DirectUI@@AEBAJPEAUIBuffer@Streams@Storage@Windows@@PEAUListSerializationData@12@PEAE@Z
    long ParseSerializationBuffer(WindissectOpaque *, WindissectOpaque *, unsigned char *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDataVirtualizationScrollOffsets@ListViewBase@DirectUI@@AEAAJXZ
    long ProcessDataVirtualizationScrollOffsets();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDragOverAt@ListViewBase@DirectUI@@AEAAJUPoint@Foundation@Windows@@PEAE@Z
    long ProcessDragOverAt(WindissectOpaque, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTabStopInternal@ListViewBase@DirectUI@@AEAAJPEAVDependencyObject@2@0_N1PEAEPEAPEAV32@@Z
    long ProcessTabStopInternal(::DirectUI::DependencyObject *, ::DirectUI::DependencyObject *, bool, bool, unsigned char *, ::DirectUI::DependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAllItemsForLiveReorder@ListViewBase@DirectUI@@AEAAJXZ
    long ResetAllItemsForLiveReorder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveAndQueryListViewBaseItem@ListViewBase@DirectUI@@CAJAEAVWeakRefPtr@ctl@@PEAPEAVListViewBaseItem@2@@Z
    static long ResolveAndQueryListViewBaseItem(WindissectOpaque &, ListViewBaseItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollWithVelocity@ListViewBase@DirectUI@@AEAAJUPanVelocity@12@@Z
    long ScrollWithVelocity(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnchorIndex@ListViewBase@DirectUI@@AEAAJI@Z
    long SetAnchorIndex(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDragOverItem@ListViewBase@DirectUI@@AEAAJPEAVListViewBaseItem@2@@Z
    long SetDragOverItem(ListViewBaseItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPendingAutoPanVelocity@ListViewBase@DirectUI@@AEAAJUPanVelocity@12@@Z
    long SetPendingAutoPanVelocity(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPointerInteractionItem@ListViewBase@DirectUI@@AEAAJPEAVListViewBaseItem@2@@Z
    long SetPointerInteractionItem(ListViewBaseItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldAcceptDragInput@ListViewBase@DirectUI@@AEAAJPEAUIPointer@Input@Xaml@UI@Windows@@PEAE@Z
    long ShouldAcceptDragInput(::Windows::UI::Xaml::Input::IPointer *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldCustomizeTabNavigation@ListViewBase@DirectUI@@AEAAJPEAE@Z
    long ShouldCustomizeTabNavigation(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldPlayLiveReorder@ListViewBase@DirectUI@@AEAAJPEAE@Z
    long ShouldPlayLiveReorder(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartEdgeScrollTimerTick@ListViewBase@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long StartEdgeScrollTimerTick(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartLiveReorderTimer@ListViewBase@DirectUI@@AEAAJXZ
    long StartLiveReorderTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopLiveReorderTimer@ListViewBase@DirectUI@@AEAAJXZ
    long StopLiveReorderTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToOnWindowActivated@ListViewBase@DirectUI@@AEAAJXZ
    long SubscribeToOnWindowActivated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryNextElementType@ListViewBase@DirectUI@@AEAAJW4ElementType@12@0_NPEAW4312@PEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long TryNextElementType(int, int, bool, int *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDragGrabbedItems@ListViewBase@DirectUI@@AEAAJE@Z
    long UpdateDragGrabbedItems(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDropTargetDropEffect@ListViewBase@DirectUI@@AEAAJEEPEAVUIElement@2@@Z
    long UpdateDropTargetDropEffect(unsigned char, unsigned char, ::DirectUI::UIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTabStopFlags@ListViewBase@DirectUI@@AEAAJXZ
    long UpdateTabStopFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateReorderingAfterItemsChanged@ListViewBase@DirectUI@@AEAAJXZ
    long ValidateReorderingAfterItemsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VirtualizationFinished@ListViewBase@DirectUI@@EEAAJXZ
    virtual long VirtualizationFinished();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanSemanticZoomGroup@ListViewBase@DirectUI@@AEAAJPEAE@Z
    long get_CanSemanticZoomGroup(unsigned char *);
};
} // namespace DirectUI

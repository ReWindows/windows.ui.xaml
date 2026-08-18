#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 88 member(s).
namespace DirectUI {
class ListViewBaseItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualStateWithContext@ListViewBaseItem@DirectUI@@UEAAJPEAVVisualStateManagerBatchContext@2@_N@Z
    virtual long ChangeVisualStateWithContext(::DirectUI::VisualStateManagerBatchContext *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearHoldingState@ListViewBaseItem@DirectUI@@QEAAJXZ
    long ClearHoldingState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearInteractionState@ListViewBaseItem@DirectUI@@QEAAJXZ
    long ClearInteractionState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearItemPhoneReorderState@ListViewBaseItem@DirectUI@@QEAAXXZ
    void ClearItemPhoneReorderState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPointerState@ListViewBaseItem@DirectUI@@QEAAJXZ
    long ClearPointerState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTransitionContext@ListViewBaseItem@DirectUI@@UEAAJHPEAW4ThemeTransitionContext@2@@Z
    virtual long GetCurrentTransitionContext(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDropOffsetToRoot@ListViewBaseItem@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long GetDropOffsetToRoot(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemChrome@ListViewBaseItem@DirectUI@@QEAAJPEAPEAVCListViewBaseItemChrome@@@Z
    long GetItemChrome(CListViewBaseItemChrome * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentListView@ListViewBaseItem@DirectUI@@QEAAPEAVListViewBase@2@XZ
    ::DirectUI::ListViewBase * GetParentListView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCollectionMutatingFast@ListViewBaseItem@DirectUI@@UEAAJPEAE@Z
    virtual long IsCollectionMutatingFast(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInBottomHalfForExternalReorder@ListViewBaseItem@DirectUI@@QEAAJUPoint@Foundation@Windows@@W4Orientation@Controls@Xaml@UI@5@PEA_N@Z
    long IsInBottomHalfForExternalReorder(WindissectOpaque, int, bool *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ListViewBaseItem@DirectUI@@QEAA@XZ
    ListViewBaseItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@ListViewBaseItem@DirectUI@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDirectManipulationCrossSlideContainerStart@ListViewBaseItem@DirectUI@@UEAAJW4DMConfigurations@2@0AEAE@Z
    virtual long OnDirectManipulationCrossSlideContainerStart(int, int, unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTouchDragStarted@ListViewBaseItem@DirectUI@@UEAAJPEAUIPointerPoint@Input@UI@Windows@@PEAUIPointer@4Xaml@56@@Z
    virtual long OnTouchDragStarted(::Windows::UI::Input::IPointerPoint *, ::Windows::UI::Xaml::Input::IPointer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryFor@ListViewBaseItem@DirectUI@@SAJPEAUIUnknown@@PEAPEAV12@@Z
    static long QueryFor(IUnknown *, ListViewBaseItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseCrossSlideViewport@ListViewBaseItem@DirectUI@@QEAAJXZ
    long ReleaseCrossSlideViewport();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDragIsGrabbed@ListViewBaseItem@DirectUI@@QEAAJE@Z
    long SetDragIsGrabbed(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDragItemsCountDisplay@ListViewBaseItem@DirectUI@@UEAAJI@Z
    virtual long SetDragItemsCountDisplay(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDragVisualCaptured@ListViewBaseItem@DirectUI@@QEAAJE@Z
    long SetDragVisualCaptured(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartReordering@ListViewBaseItem@DirectUI@@QEAAJE@Z
    long StartReordering(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TeardownSwipe@ListViewBaseItem@DirectUI@@QEAAJXZ
    long TeardownSwipe();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ListViewBaseItem@DirectUI@@UEAA@XZ
    virtual ~ListViewBaseItem();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@ListViewBaseItem@DirectUI@@MEAAJIIII@Z
    virtual long EnterImpl(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogicalParentForAPProtected@ListViewBaseItem@DirectUI@@MEAAJPEAPEAVDependencyObject@2@@Z
    virtual long GetLogicalParentForAPProtected(::DirectUI::DependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ListViewBaseItem@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@ListViewBaseItem@DirectUI@@MEAAJIIII@Z
    virtual long LeaveImpl(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextRequestedImpl@ListViewBaseItem@DirectUI@@MEAAJPEAUIContextRequestedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnContextRequestedImpl(::Windows::UI::Xaml::Input::IContextRequestedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragLeave@ListViewBaseItem@DirectUI@@MEAAJPEAUIDragEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnDragLeave(::Windows::UI::Xaml::IDragEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragOver@ListViewBaseItem@DirectUI@@MEAAJPEAUIDragEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnDragOver(::Windows::UI::Xaml::IDragEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@ListViewBaseItem@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnGotFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHolding@ListViewBaseItem@DirectUI@@MEAAJPEAUIHoldingRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnHolding(::Windows::UI::Xaml::Input::IHoldingRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@ListViewBaseItem@DirectUI@@MEAAJPEAVIsEnabledChangedEventArgs@2@@Z
    virtual long OnIsEnabledChanged(::DirectUI::IsEnabledChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@ListViewBaseItem@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@ListViewBaseItem@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyUp(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@ListViewBaseItem@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnLostFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNoReorderHintStoryboardCompleted@ListViewBaseItem@DirectUI@@IEAAJPEAUIInspectable@@0@Z
    long OnNoReorderHintStoryboardCompleted(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNoSelectionHintStoryboardCompleted@ListViewBaseItem@DirectUI@@IEAAJPEAUIInspectable@@0@Z
    long OnNoSelectionHintStoryboardCompleted(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCanceled@ListViewBaseItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerCanceled(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@ListViewBaseItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerCaptureLost(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@ListViewBaseItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerEntered(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@ListViewBaseItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerExited(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@ListViewBaseItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerMoved(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@ListViewBaseItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerPressed(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@ListViewBaseItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerReleased(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@ListViewBaseItem@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightTapped@ListViewBaseItem@DirectUI@@MEAAJPEAUIRightTappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnRightTapped(::Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTapped@ListViewBaseItem@DirectUI@@MEAAJPEAUITappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnTapped(::Windows::UI::Xaml::Input::ITappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@ListViewBaseItem@DirectUI@@MEAAJXZ
    virtual long OnVisibilityChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldAutomaticDragHelperHandleInputEvents@ListViewBaseItem@DirectUI@@MEAA_NXZ
    virtual bool ShouldAutomaticDragHelperHandleInputEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartDragIfEnabled@ListViewBaseItem@DirectUI@@IEAAJPEAUIPointerPoint@Input@UI@Windows@@@Z
    long StartDragIfEnabled(::Windows::UI::Input::IPointerPoint *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginCheckingForMouseDrag@ListViewBaseItem@DirectUI@@AEAAJPEAUIPointer@Input@Xaml@UI@Windows@@@Z
    long BeginCheckingForMouseDrag(::Windows::UI::Xaml::Input::IPointer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelPendingTapInteractionForPointerId@ListViewBaseItem@DirectUI@@AEAAJI@Z
    long CancelPendingTapInteractionForPointerId(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualStateWithContextNewStyle@ListViewBaseItem@DirectUI@@AEAAJPEAVVisualStateManagerBatchContext@2@_N@Z
    long ChangeVisualStateWithContextNewStyle(::DirectUI::VisualStateManagerBatchContext *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearStateFlags@ListViewBaseItem@DirectUI@@AEAAJXZ
    long ClearStateFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearTopmost@ListViewBaseItem@DirectUI@@AEAAJXZ
    long ClearTopmost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteStartDrag@ListViewBaseItem@DirectUI@@AEAAJXZ
    long CompleteStartDrag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHoldingVisual@ListViewBaseItem@DirectUI@@AEAAJXZ
    long CreateHoldingVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyHoldingVisual@ListViewBaseItem@DirectUI@@AEAAJXZ
    long DestroyHoldingVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroySwipeRecognizer@ListViewBaseItem@DirectUI@@AEAAJXZ
    long DestroySwipeRecognizer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoPendingTapInteractionForPointerId@ListViewBaseItem@DirectUI@@AEAAJIPEAE@Z
    long DoPendingTapInteractionForPointerId(unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoTapInteraction@ListViewBaseItem@DirectUI@@AEAAJPEAE@Z
    long DoTapInteraction(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueuePendingTapInteractionForPointerId@ListViewBaseItem@DirectUI@@AEAAJI@Z
    long EnqueuePendingTapInteractionForPointerId(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDragDropVisual@ListViewBaseItem@DirectUI@@AEAAJUPoint@Foundation@Windows@@_N@Z
    long EnsureDragDropVisual(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSwipeRecognizer@ListViewBaseItem@DirectUI@@AEAAJEW4DMConfigurations@2@0@Z
    long EnsureSwipeRecognizer(unsigned char, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTouchTimer@ListViewBaseItem@DirectUI@@AEAAJXZ
    long EnsureTouchTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FeedSwipeRecognizer@ListViewBaseItem@DirectUI@@AEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long FeedSwipeRecognizer(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusChanged@ListViewBaseItem@DirectUI@@AEAAJEE@Z
    long FocusChanged(unsigned char, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConfiguredSwipeRecognizer@ListViewBaseItem@DirectUI@@AEAAJEW4DMConfigurations@2@0PEAPEAUIGestureRecognizer@Input@UI@Windows@@@Z
    long GetConfiguredSwipeRecognizer(unsigned char, int, int, ::Windows::UI::Input::IGestureRecognizer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDragVisual@ListViewBaseItem@DirectUI@@AEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    long GetDragVisual(::Windows::UI::Xaml::IUIElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSwipeDirection@ListViewBaseItem@DirectUI@@AEAAJPEAE0@Z
    long GetSwipeDirection(unsigned char *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDragOver@ListViewBaseItem@DirectUI@@AEAAJUPoint@Foundation@Windows@@W4Orientation@Controls@Xaml@UI@5@PEA_N@Z
    long IsDragOver(WindissectOpaque, int, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOutsideDragRectangle@ListViewBaseItem@DirectUI@@AEAAIUPoint@Foundation@Windows@@0@Z
    unsigned int IsOutsideDragRectangle(WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverCheckbox@ListViewBaseItem@DirectUI@@AEBAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@PEAE@Z
    long IsOverCheckbox(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *, unsigned char *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeTopmost@ListViewBaseItem@DirectUI@@AEAAJXZ
    long MakeTopmost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@ListViewBaseItem@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnLoaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSwipeRecognizerManipulationStarted@ListViewBaseItem@DirectUI@@AEAAJPEAUIGestureRecognizer@Input@UI@Windows@@PEAUIManipulationStartedEventArgs@456@@Z
    long OnSwipeRecognizerManipulationStarted(::Windows::UI::Input::IGestureRecognizer *, ::Windows::UI::Input::IManipulationStartedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSwiping@ListViewBaseItem@DirectUI@@AEAAJPEAUIGestureRecognizer@Input@UI@Windows@@PEAUICrossSlidingEventArgs@456@@Z
    long OnSwiping(::Windows::UI::Input::IGestureRecognizer *, ::Windows::UI::Input::ICrossSlidingEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterNoHintVisualStateHandlers@ListViewBaseItem@DirectUI@@AEAAJXZ
    long RegisterNoHintVisualStateHandlers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsDragOver@ListViewBaseItem@DirectUI@@AEAAJE@Z
    long SetIsDragOver(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsKeyboardPressed@ListViewBaseItem@DirectUI@@AEAAJE@Z
    long SetIsKeyboardPressed(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartTouchTimer@ListViewBaseItem@DirectUI@@AEAAJW4TouchTimerState@12@@Z
    long StartTouchTimer(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopCheckingForMouseDrag@ListViewBaseItem@DirectUI@@AEAAJPEAUIPointer@Input@Xaml@UI@Windows@@@Z
    long StopCheckingForMouseDrag(::Windows::UI::Xaml::Input::IPointer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopTouchTimer@ListViewBaseItem@DirectUI@@AEAAJXZ
    long StopTouchTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformHoldingVisual@ListViewBaseItem@DirectUI@@AEAAJPEAUIHoldingRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long TransformHoldingVisual(::Windows::UI::Xaml::Input::IHoldingRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryStartDrag@ListViewBaseItem@DirectUI@@AEAAJPEAUIPointer@Input@Xaml@UI@Windows@@UPoint@Foundation@7@PEAE2@Z
    long TryStartDrag(::Windows::UI::Xaml::Input::IPointer *, WindissectOpaque, unsigned char *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterNoHintVisualStateHandlers@ListViewBaseItem@DirectUI@@AEAAJXZ
    long UnregisterNoHintVisualStateHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTopmost@ListViewBaseItem@DirectUI@@AEAAJXZ
    long UpdateTopmost();
};
} // namespace DirectUI

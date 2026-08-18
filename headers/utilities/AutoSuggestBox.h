#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 75 member(s).
namespace DirectUI {
class AutoSuggestBox {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AutoSuggestBox@DirectUI@@QEAA@XZ
    AutoSuggestBox();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@AutoSuggestBox@DirectUI@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInkingEnded@AutoSuggestBox@DirectUI@@SAJPEAVCDependencyObject@@0@Z
    static long OnInkingEnded(CDependencyObject *, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInkingFunctionButtonClicked@AutoSuggestBox@DirectUI@@SAJPEAVCDependencyObject@@@Z
    static long OnInkingFunctionButtonClicked(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInkingStarted@AutoSuggestBox@DirectUI@@SAJPEAVCDependencyObject@@0@Z
    static long OnInkingStarted(CDependencyObject *, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProgrammaticSubmitQuery@AutoSuggestBox@DirectUI@@QEAAJXZ
    long ProgrammaticSubmitQuery();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOnInkingStarted@AutoSuggestBox@DirectUI@@QEAAJPEAVCDependencyObject@@@Z
    long UpdateOnInkingStarted(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsSuggestionListOpen@AutoSuggestBox@DirectUI@@UEAAJE@Z
    virtual long put_IsSuggestionListOpen(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AutoSuggestBox@DirectUI@@UEAA@XZ
    virtual ~AutoSuggestBox();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlainText@AutoSuggestBox@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPlainText(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTextBoxFocusedElement@AutoSuggestBox@DirectUI@@IEAAJPEAE@Z
    long IsTextBoxFocusedElement(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@AutoSuggestBox@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@AutoSuggestBox@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnGotFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsChanged@AutoSuggestBox@DirectUI@@MEAAJPEAUIInspectable@@@Z
    virtual long OnItemsChanged(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@AutoSuggestBox@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@AutoSuggestBox@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnLostFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@AutoSuggestBox@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSipHiding@AutoSuggestBox@DirectUI@@IEAAJPEAUIInputPane@ViewManagement@UI@Windows@@PEAUIInputPaneVisibilityEventArgs@456@@Z
    long OnSipHiding(::Windows::UI::ViewManagement::IInputPane *, ::Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSipShowing@AutoSuggestBox@DirectUI@@IEAAJPEAUIInputPane@ViewManagement@UI@Windows@@PEAUIInputPaneVisibilityEventArgs@456@@Z
    long OnSipShowing(::Windows::UI::ViewManagement::IInputPane *, ::Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@AutoSuggestBox@DirectUI@@MEAAJXZ
    virtual long PrepareState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetSuggestionValue@AutoSuggestBox@DirectUI@@IEAAJPEAUIInspectable@@PEAVPropertyPathListener@2@PEAPEAUHSTRING__@@@Z
    long TryGetSuggestionValue(IInspectable *, ::DirectUI::PropertyPathListener *, HSTRING__* *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AlignmentHelper@AutoSuggestBox@DirectUI@@AEAAJURect@Foundation@Windows@@@Z
    long AlignmentHelper(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyScrollActions@AutoSuggestBox@DirectUI@@AEAAJE@Z
    long ApplyScrollActions(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@AutoSuggestBox@DirectUI@@AEAAJXZ
    long ChangeVisualState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLTEs@AutoSuggestBox@DirectUI@@AEAAJXZ
    long CreateLTEs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyLTEs@AutoSuggestBox@DirectUI@@AEAAJXZ
    long DestroyLTEs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureHandwritingViewCandidatesVisible@AutoSuggestBox@DirectUI@@AEAAJXZ
    long EnsureHandwritingViewCandidatesVisible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualTextBoxSize@AutoSuggestBox@DirectUI@@AEBAJAEAN0@Z
    long GetActualTextBoxSize(double &, double &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjustedLayoutBounds@AutoSuggestBox@DirectUI@@AEBAJAEAURect@Foundation@Windows@@@Z
    long GetAdjustedLayoutBounds(WindissectOpaque &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidateWindowPopupAdjustment@AutoSuggestBox@DirectUI@@AEAAJ_NPEAN1@Z
    long GetCandidateWindowPopupAdjustment(bool, double *, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandwritingView@AutoSuggestBox@DirectUI@@AEAAJPEAPEAVCHandwritingView@@@Z
    long GetHandwritingView(CHandwritingView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookToRootScrollViewer@AutoSuggestBox@DirectUI@@AEAAJXZ
    long HookToRootScrollViewer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSuggestionListVectorReversed@AutoSuggestBox@DirectUI@@AEBA_NXZ
    bool IsSuggestionListVectorReversed() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSuggestionListVerticallyMirrored@AutoSuggestBox@DirectUI@@AEBA_NXZ
    bool IsSuggestionListVerticallyMirrored() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaximizeSuggestionArea@AutoSuggestBox@DirectUI@@AEAAJNNNURect@Foundation@Windows@@@Z
    long MaximizeSuggestionArea(double, double, double, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaximizeSuggestionAreaWithoutInputPane@AutoSuggestBox@DirectUI@@AEAAJXZ
    long MaximizeSuggestionAreaWithoutInputPane();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHandwritingViewSizeChanged@AutoSuggestBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnHandwritingViewSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListViewContainerContentChanging@AutoSuggestBox@DirectUI@@AEAAJPEAUIListViewBase@Controls@Xaml@UI@Windows@@PEAUIContainerContentChangingEventArgs@4567@@Z
    long OnListViewContainerContentChanging(::Windows::UI::Xaml::Controls::IListViewBase *, ::Windows::UI::Xaml::Controls::IContainerContentChangingEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListViewItemClick@AutoSuggestBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIItemClickEventArgs@Controls@Xaml@UI@Windows@@@Z
    long OnListViewItemClick(IInspectable *, ::Windows::UI::Xaml::Controls::IItemClickEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPopupOpened@AutoSuggestBox@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnPopupOpened(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSipHidingInternal@AutoSuggestBox@DirectUI@@AEAAJXZ
    long OnSipHidingInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSipShowingInternal@AutoSuggestBox@DirectUI@@AEAAJPEAUIInputPaneVisibilityEventArgs@ViewManagement@UI@Windows@@@Z
    long OnSipShowingInternal(::Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@AutoSuggestBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSuggestionListKeyDown@AutoSuggestBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnSuggestionListKeyDown(IInspectable *, ::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSuggestionSelectionChanged@AutoSuggestBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUISelectionChangedEventArgs@Controls@Xaml@UI@Windows@@@Z
    long OnSuggestionSelectionChanged(IInspectable *, ::Windows::UI::Xaml::Controls::ISelectionChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSuggestionsContainerLoaded@AutoSuggestBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnSuggestionsContainerLoaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextBoxCandidateWindowBoundsChanged@AutoSuggestBox@DirectUI@@AEAAJPEAUITextBox@Controls@Xaml@UI@Windows@@PEAUICandidateWindowBoundsChangedEventArgs@4567@@Z
    long OnTextBoxCandidateWindowBoundsChanged(::Windows::UI::Xaml::Controls::ITextBox *, ::Windows::UI::Xaml::Controls::ICandidateWindowBoundsChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextBoxLoaded@AutoSuggestBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnTextBoxLoaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextBoxQueryButtonClick@AutoSuggestBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnTextBoxQueryButtonClick(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextBoxTextChanged@AutoSuggestBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUITextChangedEventArgs@Controls@Xaml@UI@Windows@@@Z
    long OnTextBoxTextChanged(IInspectable *, ::Windows::UI::Xaml::Controls::ITextChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextBoxUnloaded@AutoSuggestBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnTextBoxUnloaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextChangedEventTimerTick@AutoSuggestBox@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnTextChangedEventTimerTick(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloaded@AutoSuggestBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnUnloaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionLTEs@AutoSuggestBox@DirectUI@@AEAAJXZ
    long PositionLTEs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDeferredUpdate@AutoSuggestBox@DirectUI@@AEAAJXZ
    long ProcessDeferredUpdate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDeferredUpdateStatic@AutoSuggestBox@DirectUI@@CAJVWeakRefPtr@ctl@@@Z
    static long ProcessDeferredUpdateStatic(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushScrollAction@AutoSuggestBox@DirectUI@@AEAAJPEAUIScrollViewer@Controls@Xaml@UI@Windows@@AEAN@Z
    long PushScrollAction(::Windows::UI::Xaml::Controls::IScrollViewer *, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReevaluateIsOverlayVisible@AutoSuggestBox@DirectUI@@AEAAJXZ
    long ReevaluateIsOverlayVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetIgnoreTextChanges@AutoSuggestBox@DirectUI@@AEAAJXZ
    long ResetIgnoreTextChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scroll@AutoSuggestBox@DirectUI@@AEAAJAEAN@Z
    long Scroll(double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollLastItemIntoView@AutoSuggestBox@DirectUI@@AEAAJXZ
    long ScrollLastItemIntoView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentControlledPeer@AutoSuggestBox@DirectUI@@AEAAJW4ControlledPeer@12@@Z
    long SetCurrentControlledPeer(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextBoxQueryButtonIcon@AutoSuggestBox@DirectUI@@AEAAJXZ
    long SetTextBoxQueryButtonIcon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupOverlayState@AutoSuggestBox@DirectUI@@AEAAJXZ
    long SetupOverlayState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseParentedLTE@AutoSuggestBox@DirectUI@@AEAA_NXZ
    bool ShouldUseParentedLTE();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitQuery@AutoSuggestBox@DirectUI@@AEAAJPEAUIInspectable@@@Z
    long SubmitQuery(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TeardownOverlayState@AutoSuggestBox@DirectUI@@AEAAJXZ
    long TeardownOverlayState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformPoint@AutoSuggestBox@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUPoint@Foundation@6@@Z
    long TransformPoint(::Windows::UI::Xaml::IUIElement *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHandwritingViewFuctionButtonIcon@AutoSuggestBox@DirectUI@@AEAAJXZ
    long UpdateHandwritingViewFuctionButtonIcon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSuggestionListItemsSource@AutoSuggestBox@DirectUI@@AEAAJXZ
    long UpdateSuggestionListItemsSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSuggestionListPosition@AutoSuggestBox@DirectUI@@AEAAJXZ
    long UpdateSuggestionListPosition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSuggestionListSize@AutoSuggestBox@DirectUI@@AEAAJXZ
    long UpdateSuggestionListSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSuggestionListVisibility@AutoSuggestBox@DirectUI@@AEAAJXZ
    long UpdateSuggestionListVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateText@AutoSuggestBox@DirectUI@@AEAAJPEAUHSTRING__@@@Z
    long UpdateText(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTextBoxText@AutoSuggestBox@DirectUI@@AEAAJPEAUHSTRING__@@W4AutoSuggestionBoxTextChangeReason@Controls@Xaml@UI@Windows@@@Z
    long UpdateTextBoxText(HSTRING__*, int);
};
} // namespace DirectUI

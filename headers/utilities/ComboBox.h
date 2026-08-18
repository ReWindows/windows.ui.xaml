#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 149 member(s).
namespace DirectUI {
class ComboBox {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@ComboBox@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long ArrangeOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@ComboBox@DirectUI@@UEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentPresenterPart@ComboBox@DirectUI@@QEAAJPEAPEAUIContentPresenter@Controls@Xaml@UI@Windows@@@Z
    long GetContentPresenterPart(::Windows::UI::Xaml::Controls::IContentPresenter * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHostForItemContainer@ComboBox@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAE@Z
    virtual long IsHostForItemContainer(::Windows::UI::Xaml::IDependencyObject *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@ComboBox@DirectUI@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHandwritingViewClosed@ComboBox@DirectUI@@QEAAJPEAUIHandwritingView@Controls@Xaml@UI@Windows@@PEAUIHandwritingPanelClosedEventArgs@4567@@Z
    long OnHandwritingViewClosed(::Windows::UI::Xaml::Controls::IHandwritingView *, ::Windows::UI::Xaml::Controls::IHandwritingPanelClosedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightTappedUnhandled@ComboBox@DirectUI@@UEAAJPEAUIRightTappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnRightTappedUnhandled(::Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIA_GetContainerForDataItemOverride@ComboBox@DirectUI@@UEAAJPEAUIInspectable@@HPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long UIA_GetContainerForDataItemOverride(IInspectable *, int, ::Windows::UI::Xaml::IUIElement * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanScrollIntoView@ComboBox@DirectUI@@MEAAJAEAE@Z
    virtual long CanScrollIntoView(unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContainerForItemOverride@ComboBox@DirectUI@@MEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long ClearContainerForItemOverride(::Windows::UI::Xaml::IDependencyObject *, IInspectable *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ComboBox@DirectUI@@IEAA@XZ
    ComboBox();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditableTextHasFocus@ComboBox@DirectUI@@IEAA_NXZ
    bool EditableTextHasFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTextBoxIsEnabled@ComboBox@DirectUI@@IEAAJ_N@Z
    long EnsureTextBoxIsEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerForItemOverride@ComboBox@DirectUI@@MEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long GetContainerForItemOverride(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocus@ComboBox@DirectUI@@MEAAJPEAE@Z
    virtual long HasFocus(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ComboBox@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsItemItsOwnContainerOverride@ComboBox@DirectUI@@MEAAJPEAUIInspectable@@PEAE@Z
    virtual long IsItemItsOwnContainerOverride(IInspectable *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@ComboBox@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@ComboBox@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnGotFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@ComboBox@DirectUI@@MEAAJPEAVIsEnabledChangedEventArgs@2@@Z
    virtual long OnIsEnabledChanged(::DirectUI::IsEnabledChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsChanged@ComboBox@DirectUI@@MEAAJPEAUIVectorChangedEventArgs@Collections@Foundation@Windows@@@Z
    virtual long OnItemsChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@ComboBox@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@ComboBox@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyUp(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@ComboBox@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnLostFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@ComboBox@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerCaptureLost(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@ComboBox@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerEntered(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@ComboBox@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerExited(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@ComboBox@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerMoved(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@ComboBox@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerPressed(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@ComboBox@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerReleased(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerWheelChanged@ComboBox@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerWheelChanged(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@ComboBox@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChanged@ComboBox@DirectUI@@MEAAJHHPEAUIInspectable@@0EW4FocusNavigationDirection@Input@Xaml@UI@Windows@@@Z
    virtual long OnSelectionChanged(int, int, IInspectable *, IInspectable *, unsigned char, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@ComboBox@DirectUI@@MEAAJXZ
    virtual long OnVisibilityChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareContainerForItemOverride@ComboBox@DirectUI@@MEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long PrepareContainerForItemOverride(::Windows::UI::Xaml::IDependencyObject *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@ComboBox@DirectUI@@MEAAJXZ
    virtual long PrepareState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTabStopOverride@ComboBox@DirectUI@@MEAAJPEAVDependencyObject@2@0_N1PEAPEAV32@PEAE@Z
    virtual long ProcessTabStopOverride(::DirectUI::DependencyObject *, ::DirectUI::DependencyObject *, bool, bool, ::DirectUI::DependencyObject * *, unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ComboBox@DirectUI@@MEAA@XZ
    virtual ~ComboBox();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendCharToSearchString@ComboBox@DirectUI@@AEAAJGPEAE@Z
    long AppendCharToSearchString(unsigned short, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreStringsEqual@ComboBox@DirectUI@@CA_NAEBVString@Internal@Windows@@0@Z
    static bool AreStringsEqual(::Windows::Internal::String const &, ::Windows::Internal::String const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangePopup@ComboBox@DirectUI@@AEAAJ_N@Z
    long ArrangePopup(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearSelectedIndexOverrideForVisualStates@ComboBox@DirectUI@@AEAAJXZ
    long ClearSelectedIndexOverrideForVisualStates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearStateFlags@ComboBox@DirectUI@@AEAAJXZ
    long ClearStateFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearStateFlagsOnItems@ComboBox@DirectUI@@AEAAJXZ
    long ClearStateFlagsOnItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitRevertEditableSearch@ComboBox@DirectUI@@AEAAJ_N@Z
    long CommitRevertEditableSearch(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEditableContentPresenterTextBlock@ComboBox@DirectUI@@AEAAJXZ
    long CreateEditableContentPresenterTextBlock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableEditableMode@ComboBox@DirectUI@@AEAAJXZ
    long DisableEditableMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePresenterReadyForFullMode@ComboBox@DirectUI@@AEAAJXZ
    long EnsurePresenterReadyForFullMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePresenterReadyForInlineMode@ComboBox@DirectUI@@AEAAJXZ
    long EnsurePresenterReadyForInlineMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePropertyPathListener@ComboBox@DirectUI@@AEAAJXZ
    long EnsurePropertyPathListener();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindParentComboBoxFromDO@ComboBox@DirectUI@@CAJPEAVCDependencyObject@@PEAPEAV12@@Z
    static long FindParentComboBoxFromDO(CDependencyObject *, ComboBox * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishClosingDropDown@ComboBox@DirectUI@@AEAAJXZ
    long FinishClosingDropDown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusChanged@ComboBox@DirectUI@@AEAAJE@Z
    long FocusChanged(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceApplyInlineLayoutUpdate@ComboBox@DirectUI@@AEAAJXZ
    long ForceApplyInlineLayoutUpdate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEditableComboBoxPopupLayout@ComboBox@DirectUI@@AEAAJINNUThickness@Xaml@UI@Windows@@USize@Foundation@6@AEAN2@Z
    long GetEditableComboBoxPopupLayout(unsigned int, double, double, ::Windows::UI::Xaml::Thickness, WindissectOpaque, double &, double &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemLayoutHeight@ComboBox@DirectUI@@AEAAJHUSize@Foundation@Windows@@AEAN@Z
    long GetItemLayoutHeight(int, WindissectOpaque, double &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutPosition@ComboBox@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@AEAUPoint@Foundation@6@@Z
    long GetLayoutPosition(::Windows::UI::Xaml::IUIElement *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMeasureDeltaForVisualsBetweenPopupAndCarouselPanelFromCarouselPanel@ComboBox@DirectUI@@AEAAJAEAN@Z
    long GetMeasureDeltaForVisualsBetweenPopupAndCarouselPanelFromCarouselPanel(double &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNonPannablePopupLayout@ComboBox@DirectUI@@AEAAJHINNUThickness@Xaml@UI@Windows@@USize@Foundation@6@AEAN22@Z
    long GetNonPannablePopupLayout(int, unsigned int, double, double, ::Windows::UI::Xaml::Thickness, WindissectOpaque, double &, double &, double &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPannablePopupLayout@ComboBox@DirectUI@@AEAAJHINNNUSize@Foundation@Windows@@AEAN11@Z
    long GetPannablePopupLayout(int, unsigned int, double, double, double, WindissectOpaque, double &, double &, double &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealizedFirstChildFromCarouselPanel@ComboBox@DirectUI@@AEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    long GetRealizedFirstChildFromCarouselPanel(::Windows::UI::Xaml::IUIElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleBoundsInternal@ComboBox@DirectUI@@AEAAJPEAURect@Foundation@Windows@@@Z
    long GetVisibleBoundsInternal(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleRotateTransformOnParentForPopupPlacement@ComboBox@DirectUI@@AEAAJUMatrix@Media@Xaml@UI@Windows@@W4FlowDirection@567@AEAN2AEAUSize@Foundation@7@@Z
    long HandleRotateTransformOnParentForPopupPlacement(::Windows::UI::Xaml::Media::Matrix, int, double &, double &, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSearchStringTimedOut@ComboBox@DirectUI@@AEAA_NXZ
    bool HasSearchStringTimedOut();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvertMatrix@ComboBox@DirectUI@@AEAAJPEAUMatrix@Media@Xaml@UI@Windows@@@Z
    long InvertMatrix(::Windows::UI::Xaml::Media::Matrix *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsChildOfTarget@ComboBox@DirectUI@@AEAAJPEAUIDependencyObject@Xaml@UI@Windows@@EEPEAE@Z
    long IsChildOfTarget(::Windows::UI::Xaml::IDependencyObject *, unsigned char, unsigned char, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDropDownOverlay@ComboBox@DirectUI@@AEAA_NPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    bool IsDropDownOverlay(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEditable@ComboBox@DirectUI@@AEAA_NXZ
    bool IsEditable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEventSourceTarget@ComboBox@DirectUI@@AEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@PEAE@Z
    long IsEventSourceTarget(::Windows::UI::Xaml::IRoutedEventArgs *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullMode@ComboBox@DirectUI@@AEBAEXZ
    unsigned char IsFullMode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInSearchingMode@ComboBox@DirectUI@@AEAA_NXZ
    bool IsInSearchingMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInline@ComboBox@DirectUI@@AEBAEXZ
    unsigned char IsInline() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLeftButtonPressed@ComboBox@DirectUI@@AEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@PEAEPEAW4PointerDeviceType@4Devices@7@@Z
    long IsLeftButtonPressed(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *, unsigned char *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSearchStringValid@ComboBox@DirectUI@@CA_NAEBVString@Internal@Windows@@@Z
    static bool IsSearchStringValid(::Windows::Internal::String const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSmallFormFactor@ComboBox@DirectUI@@AEBAEXZ
    unsigned char IsSmallFormFactor() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTextSearchEnabled@ComboBox@DirectUI@@AEAA_NXZ
    bool IsTextSearchEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MainKeyDown@ComboBox@DirectUI@@AEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long MainKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCharacterReceivedImpl@ComboBox@DirectUI@@EEAAJPEAUICharacterReceivedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnCharacterReceivedImpl(::Windows::UI::Xaml::Input::ICharacterReceivedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClose@ComboBox@DirectUI@@AEAAJXZ
    long OnClose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCloseSmallFormFactor@ComboBox@DirectUI@@AEAAJXZ
    long OnCloseSmallFormFactor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClosedStateStoryboardCompleted@ComboBox@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnClosedStateStoryboardCompleted(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDropDownOverlayPointerEntered@ComboBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnDropDownOverlayPointerEntered(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDropDownOverlayPointerExited@ComboBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnDropDownOverlayPointerExited(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementOutsidePopupPointerPressed@ComboBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnElementOutsidePopupPointerPressed(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementPopupChildGotFocus@ComboBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnElementPopupChildGotFocus(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementPopupChildLoaded@ComboBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnElementPopupChildLoaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementPopupChildLostFocus@ComboBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnElementPopupChildLostFocus(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementPopupChildPointerEntered@ComboBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnElementPopupChildPointerEntered(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementPopupChildPointerExited@ComboBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnElementPopupChildPointerExited(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementPopupChildSizeChanged@ComboBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnElementPopupChildSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFlyoutButtonClick@ComboBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnFlyoutButtonClick(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetListPickerSelectionAsyncCompleted@ComboBox@DirectUI@@AEAAJPEAU?$IAsyncOperation@H@Foundation@Windows@@W4AsyncStatus@45ABI@@@Z
    long OnGetListPickerSelectionAsyncCompleted(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHandwritingViewSizeChanged@ComboBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnHandwritingViewSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsDropDownOpenChanged@ComboBox@DirectUI@@AEAAJXZ
    long OnIsDropDownOpenChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsPresenterHostParentSizeChanged@ComboBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnItemsPresenterHostParentSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsPresenterSizeChanged@ComboBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnItemsPresenterSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDownPrivate@ComboBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnKeyDownPrivate(IInspectable *, ::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUpPrivate@ComboBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnKeyUpPrivate(IInspectable *, ::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMaxDropDownHeightChanged@ComboBox@DirectUI@@AEAAJXZ
    long OnMaxDropDownHeightChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOpen@ComboBox@DirectUI@@AEAAJXZ
    long OnOpen();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOpenSmallFormFactor@ComboBox@DirectUI@@AEAAJXZ
    long OnOpenSmallFormFactor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPopupCharacterReceived@ComboBox@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUICharacterReceivedRoutedEventArgs@Input@456@@Z
    long OnPopupCharacterReceived(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::Input::ICharacterReceivedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPopupClosed@ComboBox@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnPopupClosed(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@ComboBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextBoxCandidateWindowBoundsChanged@ComboBox@DirectUI@@AEAAJPEAUITextBox@Controls@Xaml@UI@Windows@@PEAUICandidateWindowBoundsChangedEventArgs@4567@@Z
    long OnTextBoxCandidateWindowBoundsChanged(::Windows::UI::Xaml::Controls::ITextBox *, ::Windows::UI::Xaml::Controls::ICandidateWindowBoundsChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextBoxPointerPressedPrivate@ComboBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnTextBoxPointerPressedPrivate(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextBoxPreviewKeyDown@ComboBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnTextBoxPreviewKeyDown(IInspectable *, ::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextBoxSizeChanged@ComboBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnTextBoxSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextBoxTapped@ComboBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUITappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnTextBoxTapped(IInspectable *, ::Windows::UI::Xaml::Input::ITappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextBoxTextChanged@ComboBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUITextChangedEventArgs@Controls@Xaml@UI@Windows@@@Z
    long OnTextBoxTextChanged(IInspectable *, ::Windows::UI::Xaml::Controls::ITextChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloaded@ComboBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnUnloaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverrideSelectedIndexForVisualStates@ComboBox@DirectUI@@AEAAJH@Z
    long OverrideSelectedIndexForVisualStates(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformPointerUpAction@ComboBox@DirectUI@@AEAAJ_N@Z
    long PerformPointerUpAction(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopupKeyDown@ComboBox@DirectUI@@AEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long PopupKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareLayoutForInlineDropDownClosed@ComboBox@DirectUI@@AEAAJXZ
    long PrepareLayoutForInlineDropDownClosed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareLayoutForInlineDropDownOpened@ComboBox@DirectUI@@AEAAJXZ
    long PrepareLayoutForInlineDropDownOpened();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSearch@ComboBox@DirectUI@@AEAAJG@Z
    long ProcessSearch(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseAutomationPeerExpandCollapse@ComboBox@DirectUI@@AEAAJE@Z
    long RaiseAutomationPeerExpandCollapse(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseDropDownOpenChangedEvents@ComboBox@DirectUI@@AEAAJE@Z
    long RaiseDropDownOpenChangedEvents(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseTextSubmittedEvent@ComboBox@DirectUI@@AEAA_NAEAVString@Internal@Windows@@@Z
    bool RaiseTextSubmittedEvent(::Windows::Internal::String &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReevaluateIsOverlayVisible@ComboBox@DirectUI@@AEAAJXZ
    long ReevaluateIsOverlayVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseMembers@ComboBox@DirectUI@@AEAAJXZ
    long ReleaseMembers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetCarouselPanelState@ComboBox@DirectUI@@AEAAJXZ
    long ResetCarouselPanelState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SearchItemSourceIndex@ComboBox@DirectUI@@AEAAJG_N0AEAH@Z
    long SearchItemSourceIndex(unsigned short, bool, bool, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClosingAnimationDirection@ComboBox@DirectUI@@AEAAJXZ
    long SetClosingAnimationDirection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentPresenter@ComboBox@DirectUI@@AEAAJH_N@Z
    long SetContentPresenter(int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsPopupPannable@ComboBox@DirectUI@@AEAAJXZ
    long SetIsPopupPannable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVerticalOffsetOnCarouselPanel@ComboBox@DirectUI@@AEAAJN@Z
    long SetVerticalOffsetOnCarouselPanel(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupEditableMode@ComboBox@DirectUI@@AEAAJXZ
    long SetupEditableMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupElementOutsidePopupChild@ComboBox@DirectUI@@AEAAJXZ
    long SetupElementOutsidePopupChild();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupElementPopup@ComboBox@DirectUI@@AEAAJXZ
    long SetupElementPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupElementPopupChild@ComboBox@DirectUI@@AEAAJXZ
    long SetupElementPopupChild();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupElementPopupChildCanvas@ComboBox@DirectUI@@AEAAJXZ
    long SetupElementPopupChildCanvas();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupOtherEventHandlers@ComboBox@DirectUI@@AEAAJXZ
    long SetupOtherEventHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupVisualStateEventHandlerForDropDownClosedState@ComboBox@DirectUI@@AEAAJXZ
    long SetupVisualStateEventHandlerForDropDownClosedState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartsWithIgnoreLinguisticSemantics@ComboBox@DirectUI@@CA_NAEBVString@Internal@Windows@@0@Z
    static bool StartsWithIgnoreLinguisticSemantics(::Windows::Internal::String const &, ::Windows::Internal::String const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformComboBoxToVisual@ComboBox@DirectUI@@AEAAJPEAPEAUIGeneralTransform@Media@Xaml@UI@Windows@@@Z
    long TransformComboBoxToVisual(::Windows::UI::Xaml::Media::IGeneralTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetStringValue@ComboBox@DirectUI@@AEAAJPEAUIInspectable@@PEAVPropertyPathListener@2@PEAPEAUHSTRING__@@@Z
    long TryGetStringValue(IInspectable *, ::DirectUI::PropertyPathListener *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEditableContentPresenterTextBlock@ComboBox@DirectUI@@AEAAJAEBVString@Internal@Windows@@@Z
    long UpdateEditableContentPresenterTextBlock(::Windows::Internal::String const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEditableContentPresenterTextBlock@ComboBox@DirectUI@@AEAAJPEAUIInspectable@@@Z
    long UpdateEditableContentPresenterTextBlock(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEditableTextBox@ComboBox@DirectUI@@AEAAJPEAUIInspectable@@_N1@Z
    long UpdateEditableTextBox(IInspectable *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEditableTextBox@ComboBox@DirectUI@@AEAAJPEAVString@Internal@Windows@@_N1@Z
    long UpdateEditableTextBox(::Windows::Internal::String *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHeaderPresenterVisibility@ComboBox@DirectUI@@AEAAJXZ
    long UpdateHeaderPresenterVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsPopupPannable@ComboBox@DirectUI@@AEAAJINUSize@Foundation@Windows@@AEAN@Z
    long UpdateIsPopupPannable(unsigned int, double, WindissectOpaque, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectedItemVisualState@ComboBox@DirectUI@@AEAAJXZ
    long UpdateSelectedItemVisualState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectionBoxHighlighted@ComboBox@DirectUI@@AEAAJXZ
    long UpdateSelectionBoxHighlighted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectionBoxItemProperties@ComboBox@DirectUI@@AEAAJH@Z
    long UpdateSelectionBoxItemProperties(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTargetForOverlayAnimations@ComboBox@DirectUI@@AEAAJXZ
    long UpdateTargetForOverlayAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTemplateSettings@ComboBox@DirectUI@@AEAAJXZ
    long UpdateTemplateSettings();
};
} // namespace DirectUI

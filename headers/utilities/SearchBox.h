#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 75 member(s).
namespace DirectUI {
class SearchBox {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalizeImeWithAlternatives@SearchBox@DirectUI@@QEAAJPEBG@Z
    long FinalizeImeWithAlternatives(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HostControlHasFocus@SearchBox@DirectUI@@QEAAJPEAH@Z
    long HostControlHasFocus(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCandidateListUIManagerChanged@SearchBox@DirectUI@@QEAAJXZ
    long OnCandidateListUIManagerChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusRequested@SearchBox@DirectUI@@QEAAJXZ
    long OnFocusRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImeShowWindow@SearchBox@DirectUI@@QEAAJXZ
    long OnImeShowWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@SearchBox@DirectUI@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SearchBox@DirectUI@@QEAA@XZ
    SearchBox();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuggestionsItemsSource@SearchBox@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long SetSuggestionsItemsSource(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryProcessInput@SearchBox@DirectUI@@UEAAJPEAUInputMessage@@@Z
    virtual long TryProcessInput(InputMessage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FontSize@SearchBox@DirectUI@@UEAAJN@Z
    virtual long put_FontSize(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@SearchBox@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SearchBox@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@SearchBox@DirectUI@@MEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@SearchBox@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusOnKeyboardInputChanged@SearchBox@DirectUI@@IEAAJE@Z
    long OnFocusOnKeyboardInputChanged(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@SearchBox@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnGotFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@SearchBox@DirectUI@@MEAAJPEAVIsEnabledChangedEventArgs@2@@Z
    virtual long OnIsEnabledChanged(::DirectUI::IsEnabledChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@SearchBox@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnLostFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@SearchBox@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerCaptureLost(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@SearchBox@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerEntered(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@SearchBox@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerExited(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@SearchBox@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSearchHistoryEnabledChanged@SearchBox@DirectUI@@IEAAJE@Z
    long OnSearchHistoryEnabledChanged(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSearchTextBoxKeyDown@SearchBox@DirectUI@@IEAAJPEAUIInspectable@@PEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnSearchTextBoxKeyDown(IInspectable *, ::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSearchTextBoxPointerPressed@SearchBox@DirectUI@@IEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnSearchTextBoxPointerPressed(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSuggestionsVectorChanged@SearchBox@DirectUI@@IEAAJXZ
    long OnSuggestionsVectorChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@SearchBox@DirectUI@@MEAAJXZ
    virtual long OnVisibilityChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SearchBox@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentControlledPeer@SearchBox@DirectUI@@IEAAJW4ControlledPeer@12@@Z
    long SetCurrentControlledPeer(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePopupState@SearchBox@DirectUI@@IEAAJXZ
    long UpdatePopupState();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SearchBox@DirectUI@@MEAA@XZ
    virtual ~SearchBox();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindChildContentControlContent@SearchBox@DirectUI@@AEAAJPEAUIInspectable@@PEBG01@Z
    long BindChildContentControlContent(IInspectable *, unsigned short const *, IInspectable *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindChildImageSource@SearchBox@DirectUI@@AEAAJPEAUIInspectable@@PEBG01@Z
    long BindChildImageSource(IInspectable *, unsigned short const *, IInspectable *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindControlProperty@SearchBox@DirectUI@@AEAAJPEAUIInspectable@@PEBVCDependencyProperty@@0PEBG@Z
    long BindControlProperty(IInspectable *, CDependencyProperty const *, IInspectable *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToRichTextBlockSelectionHighlightColor@SearchBox@DirectUI@@AEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@0@Z
    long BindToRichTextBlockSelectionHighlightColor(::Windows::UI::Xaml::IFrameworkElement *, ::Windows::UI::Xaml::IFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLinguisticDetails@SearchBox@DirectUI@@AEAAJEEPEAPEAUISearchQueryLinguisticDetails@Search@ApplicationModel@Windows@@@Z
    long CreateLinguisticDetails(unsigned char, unsigned char, ::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureImeCandidateList@SearchBox@DirectUI@@AEAAJXZ
    long EnsureImeCandidateList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureImeEventHelperHost@SearchBox@DirectUI@@AEAAJXZ
    long EnsureImeEventHelperHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSearchSuggestionManagerHost@SearchBox@DirectUI@@AEAAJXZ
    long EnsureSearchSuggestionManagerHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextSelectableSuggestionIndex@SearchBox@DirectUI@@AEAAJHHPEAH@Z
    long FindNextSelectableSuggestionIndex(int, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushes@SearchBox@DirectUI@@AEAAJPEAUIRichTextBlock@Controls@Xaml@UI@Windows@@PEAPEAUISolidColorBrush@Media@567@1@Z
    long GetBrushes(::Windows::UI::Xaml::Controls::IRichTextBlock *, ::Windows::UI::Xaml::Media::ISolidColorBrush * *, ::Windows::UI::Xaml::Media::ISolidColorBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputLanguage@SearchBox@DirectUI@@AEAAJPEAPEAUHSTRING__@@@Z
    long GetInputLanguage(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetListViewItemsVector@SearchBox@DirectUI@@AEAAJPEAPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    long GetListViewItemsVector(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuggestionCount@SearchBox@DirectUI@@AEAAJPEAI@Z
    long GetSuggestionCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuggestionKind@SearchBox@DirectUI@@AEAAJPEAUIInspectable@@PEAW4SearchSuggestionKind@Core@Search@ApplicationModel@Windows@@@Z
    long GetSuggestionKind(IInspectable *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuggestionRichText@SearchBox@DirectUI@@AEAAJPEBGPEAUIInspectable@@PEAPEAUIRichTextBlock@Controls@Xaml@UI@Windows@@@Z
    long GetSuggestionRichText(unsigned short const *, IInspectable *, ::Windows::UI::Xaml::Controls::IRichTextBlock * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuggestionSelection@SearchBox@DirectUI@@AEAAHXZ
    int GetSuggestionSelection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuggestionText@SearchBox@DirectUI@@AEAAJPEBGPEAUIInspectable@@PEAPEAUHSTRING__@@@Z
    long GetSuggestionText(unsigned short const *, IInspectable *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTabKeyDown@SearchBox@DirectUI@@AEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long HandleTabKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSuggestionSelectable@SearchBox@DirectUI@@AEAAJIPEAE@Z
    long IsSuggestionSelectable(unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveCursorToEnd@SearchBox@DirectUI@@AEAAJXZ
    long MoveCursorToEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContainerContentChanging@SearchBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIContainerContentChangingEventArgs@Controls@Xaml@UI@Windows@@@Z
    long OnContainerContentChanging(IInspectable *, ::Windows::UI::Xaml::Controls::IContainerContentChangingEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemClick@SearchBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIItemClickEventArgs@Controls@Xaml@UI@Windows@@@Z
    long OnItemClick(IInspectable *, ::Windows::UI::Xaml::Controls::IItemClickEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSearchBoxBorderSizeChanged@SearchBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnSearchBoxBorderSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSearchButtonClick@SearchBox@DirectUI@@AEAAJXZ
    long OnSearchButtonClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSearchButtonSizeChanged@SearchBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnSearchButtonSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSuggestionChosen@SearchBox@DirectUI@@AEAAJPEAUIInspectable@@W4SearchBoxInvocationMethod@Controls@Xaml@UI@Windows@@@Z
    long OnSuggestionChosen(IInspectable *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTapped@SearchBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUITappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnTapped(IInspectable *, ::Windows::UI::Xaml::Input::ITappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutFocusOnSearchBox@SearchBox@DirectUI@@AEAAJE@Z
    long PutFocusOnSearchBox(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseQueryChangedEvent@SearchBox@DirectUI@@AEAAJXZ
    long RaiseQueryChangedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseQuerySubmittedEvent@SearchBox@DirectUI@@AEAAJPEAUHSTRING__@@PEAUIInspectable@@W4SearchBoxInvocationMethod@Controls@Xaml@UI@Windows@@@Z
    long RaiseQuerySubmittedEvent(HSTRING__*, IInspectable *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseResultSuggestionChosenEvent@SearchBox@DirectUI@@AEAAJPEAUICustomPropertyProvider@Data@Xaml@UI@Windows@@W4SearchBoxInvocationMethod@Controls@567@@Z
    long RaiseResultSuggestionChosenEvent(::Windows::UI::Xaml::Data::ICustomPropertyProvider *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseTemplateParts@SearchBox@DirectUI@@AEAAJ_N@Z
    long ReleaseTemplateParts(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutomationProperties@SearchBox@DirectUI@@AEAAJXZ
    long SetAutomationProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetChildTextBlockText@SearchBox@DirectUI@@AEAAJPEAUIInspectable@@PEBGPEAUHSTRING__@@@Z
    long SetChildTextBlockText(IInspectable *, unsigned short const *, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchButtonFontSize@SearchBox@DirectUI@@AEAAJXZ
    long SetSearchButtonFontSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuggestionListFont@SearchBox@DirectUI@@AEAAJXZ
    long SetSuggestionListFont();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuggestionListLanguage@SearchBox@DirectUI@@AEAAJPEAUHSTRING__@@@Z
    long SetSuggestionListLanguage(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuggestionSelection@SearchBox@DirectUI@@AEAAJH@Z
    long SetSuggestionSelection(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowSuggestionsPopup@SearchBox@DirectUI@@AEAAJE@Z
    long ShowSuggestionsPopup(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncFromTextBox@SearchBox@DirectUI@@AEAAJPEAE@Z
    long SyncFromTextBox(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncToTextBox@SearchBox@DirectUI@@AEAAJPEAE@Z
    long SyncToTextBox(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFakeFocus@SearchBox@DirectUI@@AEAAJXZ
    long UpdateFakeFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateQueryTextWithSuggestionText@SearchBox@DirectUI@@AEAAJH@Z
    long UpdateQueryTextWithSuggestionText(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateQueryTextWithoutSuggestionChange@SearchBox@DirectUI@@AEAAJPEAUHSTRING__@@@Z
    long UpdateQueryTextWithoutSuggestionChange(HSTRING__*);
};
} // namespace DirectUI

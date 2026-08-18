#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 37 member(s).
namespace DirectUI {
class SearchBoxGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanPasteFromClipBoard@SearchBoxGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long CanPasteFromClipBoard(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrepareForFocusOnKeyboardInputEventSourceNoRef@SearchBoxGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@U?$ITypedEventHandler@PEAVSearchBox@Controls@Xaml@UI@Windows@@PEAVRoutedEventArgs@345@@Foundation@Windows@@UISearchBox@Controls@Xaml@UI@3@UIRoutedEventArgs@673@@2@@Z
    long GetPrepareForFocusOnKeyboardInputEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQueryChangedEventSourceNoRef@SearchBoxGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVSearchBox@Controls@Xaml@UI@Windows@@PEAVSearchBoxQueryChangedEventArgs@2345@@Foundation@Windows@@UISearchBox@Controls@Xaml@UI@3@UISearchBoxQueryChangedEventArgs@5673@@2@@Z
    long GetQueryChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQuerySubmittedEventSourceNoRef@SearchBoxGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVSearchBox@Controls@Xaml@UI@Windows@@PEAVSearchBoxQuerySubmittedEventArgs@2345@@Foundation@Windows@@UISearchBox@Controls@Xaml@UI@3@UISearchBoxQuerySubmittedEventArgs@5673@@2@@Z
    long GetQuerySubmittedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResultSuggestionChosenEventSourceNoRef@SearchBoxGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVSearchBox@Controls@Xaml@UI@Windows@@PEAVSearchBoxResultSuggestionChosenEventArgs@2345@@Foundation@Windows@@UISearchBox@Controls@Xaml@UI@3@UISearchBoxResultSuggestionChosenEventArgs@5673@@2@@Z
    long GetResultSuggestionChosenEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuggestionsRequestedEventSourceNoRef@SearchBoxGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVSearchBox@Controls@Xaml@UI@Windows@@PEAVSearchBoxSuggestionsRequestedEventArgs@2345@@Foundation@Windows@@UISearchBox@Controls@Xaml@UI@3@UISearchBoxSuggestionsRequestedEventArgs@5673@@2@@Z
    long GetSuggestionsRequestedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SearchBoxGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PasteFromClipBoard@SearchBoxGenerated@DirectUI@@UEAAJXZ
    virtual long PasteFromClipBoard();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocalContentSuggestionSettings@SearchBoxGenerated@DirectUI@@UEAAJPEAUILocalContentSuggestionSettings@Search@ApplicationModel@Windows@@@Z
    virtual long SetLocalContentSuggestionSettings(::Windows::ApplicationModel::Search::ILocalContentSuggestionSettings *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PrepareForFocusOnKeyboardInput@SearchBoxGenerated@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVSearchBox@Controls@Xaml@UI@Windows@@PEAVRoutedEventArgs@345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PrepareForFocusOnKeyboardInput(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_QueryChanged@SearchBoxGenerated@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVSearchBox@Controls@Xaml@UI@Windows@@PEAVSearchBoxQueryChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_QueryChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_QuerySubmitted@SearchBoxGenerated@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVSearchBox@Controls@Xaml@UI@Windows@@PEAVSearchBoxQuerySubmittedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_QuerySubmitted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ResultSuggestionChosen@SearchBoxGenerated@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVSearchBox@Controls@Xaml@UI@Windows@@PEAVSearchBoxResultSuggestionChosenEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ResultSuggestionChosen(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SuggestionsRequested@SearchBoxGenerated@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVSearchBox@Controls@Xaml@UI@Windows@@PEAVSearchBoxSuggestionsRequestedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_SuggestionsRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ChooseSuggestionOnEnter@SearchBoxGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_ChooseSuggestionOnEnter(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FocusOnKeyboardInput@SearchBoxGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_FocusOnKeyboardInput(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PlaceholderText@SearchBoxGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PlaceholderText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QueryText@SearchBoxGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_QueryText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SearchHistoryContext@SearchBoxGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SearchHistoryContext(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SearchHistoryEnabled@SearchBoxGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_SearchHistoryEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ChooseSuggestionOnEnter@SearchBoxGenerated@DirectUI@@UEAAJE@Z
    virtual long put_ChooseSuggestionOnEnter(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FocusOnKeyboardInput@SearchBoxGenerated@DirectUI@@UEAAJE@Z
    virtual long put_FocusOnKeyboardInput(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PlaceholderText@SearchBoxGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_PlaceholderText(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_QueryText@SearchBoxGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_QueryText(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SearchHistoryContext@SearchBoxGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_SearchHistoryContext(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SearchHistoryEnabled@SearchBoxGenerated@DirectUI@@UEAAJE@Z
    virtual long put_SearchHistoryEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PrepareForFocusOnKeyboardInput@SearchBoxGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PrepareForFocusOnKeyboardInput(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_QueryChanged@SearchBoxGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_QueryChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_QuerySubmitted@SearchBoxGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_QuerySubmitted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ResultSuggestionChosen@SearchBoxGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ResultSuggestionChosen(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SuggestionsRequested@SearchBoxGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SuggestionsRequested(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SearchBoxGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventAddHandlerByIndex@SearchBoxGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@E@Z
    virtual long EventAddHandlerByIndex(int, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventRemoveHandlerByIndex@SearchBoxGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@@Z
    virtual long EventRemoveHandlerByIndex(int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SearchBoxGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SearchBoxGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SearchBoxGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

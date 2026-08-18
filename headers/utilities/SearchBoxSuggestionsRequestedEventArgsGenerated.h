#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class SearchBoxSuggestionsRequestedEventArgsGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Language@SearchBoxSuggestionsRequestedEventArgsGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Language(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LinguisticDetails@SearchBoxSuggestionsRequestedEventArgsGenerated@DirectUI@@UEAAJPEAPEAUISearchQueryLinguisticDetails@Search@ApplicationModel@Windows@@@Z
    virtual long get_LinguisticDetails(::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QueryText@SearchBoxSuggestionsRequestedEventArgsGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_QueryText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Request@SearchBoxSuggestionsRequestedEventArgsGenerated@DirectUI@@UEAAJPEAPEAUISearchSuggestionsRequest@Search@ApplicationModel@Windows@@@Z
    virtual long get_Request(::Windows::ApplicationModel::Search::ISearchSuggestionsRequest * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SearchBoxSuggestionsRequestedEventArgsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SearchBoxSuggestionsRequestedEventArgsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SearchBoxSuggestionsRequestedEventArgsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SearchBoxSuggestionsRequestedEventArgsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

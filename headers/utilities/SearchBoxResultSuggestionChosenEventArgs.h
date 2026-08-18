#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class SearchBoxResultSuggestionChosenEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InvocationMethod@SearchBoxResultSuggestionChosenEventArgs@DirectUI@@UEAAJPEAW4SearchBoxInvocationMethod@Controls@Xaml@UI@Windows@@@Z
    virtual long get_InvocationMethod(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyModifiers@SearchBoxResultSuggestionChosenEventArgs@DirectUI@@UEAAJPEAW4VirtualKeyModifiers@System@Windows@@@Z
    virtual long get_KeyModifiers(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Suggestion@SearchBoxResultSuggestionChosenEventArgs@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Suggestion(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Tag@SearchBoxResultSuggestionChosenEventArgs@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Tag(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InvocationMethod@SearchBoxResultSuggestionChosenEventArgs@DirectUI@@UEAAJW4SearchBoxInvocationMethod@Controls@Xaml@UI@Windows@@@Z
    virtual long put_InvocationMethod(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Suggestion@SearchBoxResultSuggestionChosenEventArgs@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_Suggestion(IInspectable *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SearchBoxResultSuggestionChosenEventArgs@DirectUI@@UEAA@XZ
    virtual ~SearchBoxResultSuggestionChosenEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SearchBoxResultSuggestionChosenEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SearchBoxResultSuggestionChosenEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SearchBoxResultSuggestionChosenEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SearchBoxResultSuggestionChosenEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

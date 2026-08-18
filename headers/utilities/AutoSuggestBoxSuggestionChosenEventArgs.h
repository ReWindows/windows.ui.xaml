#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class AutoSuggestBoxSuggestionChosenEventArgs {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@AutoSuggestBoxSuggestionChosenEventArgs@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectedItem@AutoSuggestBoxSuggestionChosenEventArgs@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_SelectedItem(IInspectable * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@AutoSuggestBoxSuggestionChosenEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@AutoSuggestBoxSuggestionChosenEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@AutoSuggestBoxSuggestionChosenEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@AutoSuggestBoxSuggestionChosenEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class AutoSuggestBoxQuerySubmittedEventArgs {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@AutoSuggestBoxQuerySubmittedEventArgs@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ChosenSuggestion@AutoSuggestBoxQuerySubmittedEventArgs@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_ChosenSuggestion(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QueryText@AutoSuggestBoxQuerySubmittedEventArgs@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_QueryText(HSTRING__* *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@AutoSuggestBoxQuerySubmittedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@AutoSuggestBoxQuerySubmittedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@AutoSuggestBoxQuerySubmittedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@AutoSuggestBoxQuerySubmittedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

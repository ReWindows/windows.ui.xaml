#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class AutoSuggestBoxTextChangedEventArgsGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCurrent@AutoSuggestBoxTextChangedEventArgsGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long CheckCurrent(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@AutoSuggestBoxTextChangedEventArgsGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@AutoSuggestBoxTextChangedEventArgsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@AutoSuggestBoxTextChangedEventArgsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@AutoSuggestBoxTextChangedEventArgsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@AutoSuggestBoxTextChangedEventArgsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

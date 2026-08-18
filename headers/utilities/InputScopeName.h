#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class InputScopeName {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@InputScopeName@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NameValue@InputScopeName@DirectUI@@UEAAJPEAW4InputScopeNameValue@Input@Xaml@UI@Windows@@@Z
    virtual long get_NameValue(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NameValue@InputScopeName@DirectUI@@UEAAJW4InputScopeNameValue@Input@Xaml@UI@Windows@@@Z
    virtual long put_NameValue(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@InputScopeName@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@InputScopeName@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@InputScopeName@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@InputScopeName@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

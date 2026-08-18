#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class InputScopeNameFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@InputScopeNameFactory@DirectUI@@UEAAJW4InputScopeNameValue@Input@Xaml@UI@Windows@@PEAPEAUIInputScopeName@4567@@Z
    virtual long CreateInstance(int, ::Windows::UI::Xaml::Input::IInputScopeName * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@InputScopeNameFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@InputScopeNameFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@InputScopeNameFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@InputScopeNameFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceImpl@InputScopeNameFactory@DirectUI@@AEAAJW4InputScopeNameValue@Input@Xaml@UI@Windows@@PEAPEAUIInputScopeName@4567@@Z
    long CreateInstanceImpl(int, ::Windows::UI::Xaml::Input::IInputScopeName * *);
};
} // namespace DirectUI

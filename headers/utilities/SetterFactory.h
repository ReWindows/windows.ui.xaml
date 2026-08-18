#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class SetterFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@SetterFactory@DirectUI@@UEAAJPEAUIDependencyProperty@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAUISetter@456@@Z
    virtual long CreateInstance(::Windows::UI::Xaml::IDependencyProperty *, IInspectable *, ::Windows::UI::Xaml::ISetter * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SetterFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SetterFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SetterFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SetterFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceImpl@SetterFactory@DirectUI@@AEAAJPEAUIDependencyProperty@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAUISetter@456@@Z
    long CreateInstanceImpl(::Windows::UI::Xaml::IDependencyProperty *, IInspectable *, ::Windows::UI::Xaml::ISetter * *);
};
} // namespace DirectUI

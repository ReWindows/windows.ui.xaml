#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class StyleFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@StyleFactory@DirectUI@@UEAAJUTypeName@Interop@Xaml@UI@Windows@@PEAPEAUIStyle@567@@Z
    virtual long CreateInstance(::Windows::UI::Xaml::Interop::TypeName, ::Windows::UI::Xaml::IStyle * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@StyleFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@StyleFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@StyleFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@StyleFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceImpl@StyleFactory@DirectUI@@AEAAJUTypeName@Interop@Xaml@UI@Windows@@PEAPEAUIStyle@567@@Z
    long CreateInstanceImpl(::Windows::UI::Xaml::Interop::TypeName, ::Windows::UI::Xaml::IStyle * *);
};
} // namespace DirectUI

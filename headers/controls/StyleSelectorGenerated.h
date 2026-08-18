#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class StyleSelectorGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@StyleSelectorGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectStyle@StyleSelectorGenerated@DirectUI@@UEAAJPEAUIInspectable@@PEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUIStyle@567@@Z
    virtual long SelectStyle(IInspectable *, ::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IStyle * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectStyleCore@StyleSelectorGenerated@DirectUI@@UEAAJPEAUIInspectable@@PEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUIStyle@567@@Z
    virtual long SelectStyleCore(IInspectable *, ::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IStyle * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@StyleSelectorGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@StyleSelectorGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@StyleSelectorGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@StyleSelectorGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class GroupStyleSelectorGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@GroupStyleSelectorGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectGroupStyle@GroupStyleSelectorGenerated@DirectUI@@UEAAJPEAUIInspectable@@IPEAPEAUIGroupStyle@Controls@Xaml@UI@Windows@@@Z
    virtual long SelectGroupStyle(IInspectable *, unsigned int, ::Windows::UI::Xaml::Controls::IGroupStyle * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectGroupStyleCore@GroupStyleSelectorGenerated@DirectUI@@UEAAJPEAUIInspectable@@IPEAPEAUIGroupStyle@Controls@Xaml@UI@Windows@@@Z
    virtual long SelectGroupStyleCore(IInspectable *, unsigned int, ::Windows::UI::Xaml::Controls::IGroupStyle * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@GroupStyleSelectorGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@GroupStyleSelectorGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@GroupStyleSelectorGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@GroupStyleSelectorGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

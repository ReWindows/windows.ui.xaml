#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class HubSectionHeaderClickEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Section@HubSectionHeaderClickEventArgs@DirectUI@@UEAAJPEAPEAUIHubSection@Controls@Xaml@UI@Windows@@@Z
    virtual long get_Section(::Windows::UI::Xaml::Controls::IHubSection * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HubSectionHeaderClickEventArgs@DirectUI@@UEAA@XZ
    virtual ~HubSectionHeaderClickEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@HubSectionHeaderClickEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@HubSectionHeaderClickEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@HubSectionHeaderClickEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@HubSectionHeaderClickEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

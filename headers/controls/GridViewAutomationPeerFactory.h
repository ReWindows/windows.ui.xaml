#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class GridViewAutomationPeerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithOwner@GridViewAutomationPeerFactory@DirectUI@@UEAAJPEAUIGridView@Controls@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU8@PEAPEAUIGridViewAutomationPeer@Peers@Automation@567@@Z
    virtual long CreateInstanceWithOwner(::Windows::UI::Xaml::Controls::IGridView *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeer * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@GridViewAutomationPeerFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@GridViewAutomationPeerFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@GridViewAutomationPeerFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@GridViewAutomationPeerFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithOwnerImpl@GridViewAutomationPeerFactory@DirectUI@@AEAAJPEAUIGridView@Controls@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU8@PEAPEAUIGridViewAutomationPeer@Peers@Automation@567@@Z
    long CreateInstanceWithOwnerImpl(::Windows::UI::Xaml::Controls::IGridView *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeer * *);
};
} // namespace DirectUI

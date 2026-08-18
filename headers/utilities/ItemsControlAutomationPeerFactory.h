#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class ItemsControlAutomationPeerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithOwner@ItemsControlAutomationPeerFactory@DirectUI@@UEAAJPEAUIItemsControl@Controls@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU8@PEAPEAUIItemsControlAutomationPeer@Peers@Automation@567@@Z
    virtual long CreateInstanceWithOwner(::Windows::UI::Xaml::Controls::IItemsControl *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ItemsControlAutomationPeerFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ItemsControlAutomationPeerFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ItemsControlAutomationPeerFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ItemsControlAutomationPeerFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithOwnerImpl@ItemsControlAutomationPeerFactory@DirectUI@@AEAAJPEAUIItemsControl@Controls@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU8@PEAPEAUIItemsControlAutomationPeer@Peers@Automation@567@@Z
    long CreateInstanceWithOwnerImpl(::Windows::UI::Xaml::Controls::IItemsControl *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer * *);
};
} // namespace DirectUI

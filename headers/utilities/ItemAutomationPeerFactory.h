#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class ItemAutomationPeerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithParentAndItem@ItemAutomationPeerFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAUIItemsControlAutomationPeer@Peers@Automation@Xaml@UI@Windows@@0PEAPEAU3@PEAPEAUIItemAutomationPeer@56789@@Z
    virtual long CreateInstanceWithParentAndItem(IInspectable *, ::Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ItemAutomationPeerFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ItemAutomationPeerFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ItemAutomationPeerFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ItemAutomationPeerFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithParentAndItemImpl@ItemAutomationPeerFactory@DirectUI@@AEAAJPEAUIInspectable@@PEAUIItemsControlAutomationPeer@Peers@Automation@Xaml@UI@Windows@@0PEAPEAU3@PEAPEAUIItemAutomationPeer@56789@@Z
    long CreateInstanceWithParentAndItemImpl(IInspectable *, ::Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer * *);
};
} // namespace DirectUI

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class ListBoxItemDataAutomationPeerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithParentAndItem@ListBoxItemDataAutomationPeerFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAUIListBoxAutomationPeer@Peers@Automation@Xaml@UI@Windows@@0PEAPEAU3@PEAPEAUIListBoxItemDataAutomationPeer@56789@@Z
    virtual long CreateInstanceWithParentAndItem(IInspectable *, ::Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeer *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeer * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ListBoxItemDataAutomationPeerFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ListBoxItemDataAutomationPeerFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ListBoxItemDataAutomationPeerFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ListBoxItemDataAutomationPeerFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithParentAndItemImpl@ListBoxItemDataAutomationPeerFactory@DirectUI@@AEAAJPEAUIInspectable@@PEAUIListBoxAutomationPeer@Peers@Automation@Xaml@UI@Windows@@0PEAPEAU3@PEAPEAUIListBoxItemDataAutomationPeer@56789@@Z
    long CreateInstanceWithParentAndItemImpl(IInspectable *, ::Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeer *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeer * *);
};
} // namespace DirectUI

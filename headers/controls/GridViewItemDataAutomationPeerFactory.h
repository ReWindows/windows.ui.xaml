#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class GridViewItemDataAutomationPeerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithParentAndItem@GridViewItemDataAutomationPeerFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAUIGridViewAutomationPeer@Peers@Automation@Xaml@UI@Windows@@0PEAPEAU3@PEAPEAUIGridViewItemDataAutomationPeer@56789@@Z
    virtual long CreateInstanceWithParentAndItem(IInspectable *, ::Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeer *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeer * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@GridViewItemDataAutomationPeerFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@GridViewItemDataAutomationPeerFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@GridViewItemDataAutomationPeerFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@GridViewItemDataAutomationPeerFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithParentAndItemImpl@GridViewItemDataAutomationPeerFactory@DirectUI@@AEAAJPEAUIInspectable@@PEAUIGridViewAutomationPeer@Peers@Automation@Xaml@UI@Windows@@0PEAPEAU3@PEAPEAUIGridViewItemDataAutomationPeer@56789@@Z
    long CreateInstanceWithParentAndItemImpl(IInspectable *, ::Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeer *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeer * *);
};
} // namespace DirectUI

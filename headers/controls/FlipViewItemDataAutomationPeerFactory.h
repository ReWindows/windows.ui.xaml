#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class FlipViewItemDataAutomationPeerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithParentAndItem@FlipViewItemDataAutomationPeerFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAUIFlipViewAutomationPeer@Peers@Automation@Xaml@UI@Windows@@0PEAPEAU3@PEAPEAUIFlipViewItemDataAutomationPeer@56789@@Z
    virtual long CreateInstanceWithParentAndItem(IInspectable *, ::Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeer *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeer * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@FlipViewItemDataAutomationPeerFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@FlipViewItemDataAutomationPeerFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@FlipViewItemDataAutomationPeerFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@FlipViewItemDataAutomationPeerFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithParentAndItemImpl@FlipViewItemDataAutomationPeerFactory@DirectUI@@AEAAJPEAUIInspectable@@PEAUIFlipViewAutomationPeer@Peers@Automation@Xaml@UI@Windows@@0PEAPEAU3@PEAPEAUIFlipViewItemDataAutomationPeer@56789@@Z
    long CreateInstanceWithParentAndItemImpl(IInspectable *, ::Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeer *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeer * *);
};
} // namespace DirectUI

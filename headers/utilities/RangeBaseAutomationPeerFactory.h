#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class RangeBaseAutomationPeerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithOwner@RangeBaseAutomationPeerFactory@DirectUI@@UEAAJPEAUIRangeBase@Primitives@Controls@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU9@PEAPEAUIRangeBaseAutomationPeer@Peers@Automation@678@@Z
    virtual long CreateInstanceWithOwner(::Windows::UI::Xaml::Controls::Primitives::IRangeBase *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeer * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@RangeBaseAutomationPeerFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@RangeBaseAutomationPeerFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@RangeBaseAutomationPeerFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@RangeBaseAutomationPeerFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithOwnerImpl@RangeBaseAutomationPeerFactory@DirectUI@@AEAAJPEAUIRangeBase@Primitives@Controls@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU9@PEAPEAUIRangeBaseAutomationPeer@Peers@Automation@678@@Z
    long CreateInstanceWithOwnerImpl(::Windows::UI::Xaml::Controls::Primitives::IRangeBase *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeer * *);
};
} // namespace DirectUI

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class ScrollBarAutomationPeerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithOwner@ScrollBarAutomationPeerFactory@DirectUI@@UEAAJPEAUIScrollBar@Primitives@Controls@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU9@PEAPEAUIScrollBarAutomationPeer@Peers@Automation@678@@Z
    virtual long CreateInstanceWithOwner(::Windows::UI::Xaml::Controls::Primitives::IScrollBar *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeer * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ScrollBarAutomationPeerFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ScrollBarAutomationPeerFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ScrollBarAutomationPeerFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ScrollBarAutomationPeerFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithOwnerImpl@ScrollBarAutomationPeerFactory@DirectUI@@AEAAJPEAUIScrollBar@Primitives@Controls@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU9@PEAPEAUIScrollBarAutomationPeer@Peers@Automation@678@@Z
    long CreateInstanceWithOwnerImpl(::Windows::UI::Xaml::Controls::Primitives::IScrollBar *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeer * *);
};
} // namespace DirectUI

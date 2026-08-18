#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class SelectorAutomationPeerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithOwner@SelectorAutomationPeerFactory@DirectUI@@UEAAJPEAUISelector@Primitives@Controls@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU9@PEAPEAUISelectorAutomationPeer@Peers@Automation@678@@Z
    virtual long CreateInstanceWithOwner(::Windows::UI::Xaml::Controls::Primitives::ISelector *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeer * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SelectorAutomationPeerFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SelectorAutomationPeerFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SelectorAutomationPeerFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SelectorAutomationPeerFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithOwnerImpl@SelectorAutomationPeerFactory@DirectUI@@AEAAJPEAUISelector@Primitives@Controls@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU9@PEAPEAUISelectorAutomationPeer@Peers@Automation@678@@Z
    long CreateInstanceWithOwnerImpl(::Windows::UI::Xaml::Controls::Primitives::ISelector *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeer * *);
};
} // namespace DirectUI

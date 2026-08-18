#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class ButtonBaseAutomationPeerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithOwner@ButtonBaseAutomationPeerFactory@DirectUI@@UEAAJPEAUIButtonBase@Primitives@Controls@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU9@PEAPEAUIButtonBaseAutomationPeer@Peers@Automation@678@@Z
    virtual long CreateInstanceWithOwner(::Windows::UI::Xaml::Controls::Primitives::IButtonBase *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ButtonBaseAutomationPeerFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ButtonBaseAutomationPeerFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ButtonBaseAutomationPeerFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ButtonBaseAutomationPeerFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithOwnerImpl@ButtonBaseAutomationPeerFactory@DirectUI@@AEAAJPEAUIButtonBase@Primitives@Controls@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU9@PEAPEAUIButtonBaseAutomationPeer@Peers@Automation@678@@Z
    long CreateInstanceWithOwnerImpl(::Windows::UI::Xaml::Controls::Primitives::IButtonBase *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer * *);
};
} // namespace DirectUI

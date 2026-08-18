#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class ListBoxAutomationPeerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithOwner@ListBoxAutomationPeerFactory@DirectUI@@UEAAJPEAUIListBox@Controls@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU8@PEAPEAUIListBoxAutomationPeer@Peers@Automation@567@@Z
    virtual long CreateInstanceWithOwner(::Windows::UI::Xaml::Controls::IListBox *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeer * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ListBoxAutomationPeerFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ListBoxAutomationPeerFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ListBoxAutomationPeerFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ListBoxAutomationPeerFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithOwnerImpl@ListBoxAutomationPeerFactory@DirectUI@@AEAAJPEAUIListBox@Controls@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU8@PEAPEAUIListBoxAutomationPeer@Peers@Automation@567@@Z
    long CreateInstanceWithOwnerImpl(::Windows::UI::Xaml::Controls::IListBox *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeer * *);
};
} // namespace DirectUI

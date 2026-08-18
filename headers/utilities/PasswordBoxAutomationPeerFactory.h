#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class PasswordBoxAutomationPeerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithOwner@PasswordBoxAutomationPeerFactory@DirectUI@@UEAAJPEAUIPasswordBox@Controls@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU8@PEAPEAUIPasswordBoxAutomationPeer@Peers@Automation@567@@Z
    virtual long CreateInstanceWithOwner(::Windows::UI::Xaml::Controls::IPasswordBox *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeer * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PasswordBoxAutomationPeerFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PasswordBoxAutomationPeerFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@PasswordBoxAutomationPeerFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PasswordBoxAutomationPeerFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithOwnerImpl@PasswordBoxAutomationPeerFactory@DirectUI@@AEAAJPEAUIPasswordBox@Controls@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU8@PEAPEAUIPasswordBoxAutomationPeer@Peers@Automation@567@@Z
    long CreateInstanceWithOwnerImpl(::Windows::UI::Xaml::Controls::IPasswordBox *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeer * *);
};
} // namespace DirectUI

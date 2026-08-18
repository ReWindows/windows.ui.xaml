#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class FrameworkElementAutomationPeerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithOwner@FrameworkElementAutomationPeerFactory@DirectUI@@UEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU7@PEAPEAUIFrameworkElementAutomationPeer@Peers@Automation@456@@Z
    virtual long CreateInstanceWithOwner(::Windows::UI::Xaml::IFrameworkElement *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePeerForElement@FrameworkElementAutomationPeerFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAPEAUIAutomationPeer@Peers@Automation@456@@Z
    virtual long CreatePeerForElement(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromElement@FrameworkElementAutomationPeerFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAPEAUIAutomationPeer@Peers@Automation@456@@Z
    virtual long FromElement(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@FrameworkElementAutomationPeerFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@FrameworkElementAutomationPeerFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@FrameworkElementAutomationPeerFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@FrameworkElementAutomationPeerFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithOwnerImpl@FrameworkElementAutomationPeerFactory@DirectUI@@AEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU7@PEAPEAUIFrameworkElementAutomationPeer@Peers@Automation@456@@Z
    long CreateInstanceWithOwnerImpl(::Windows::UI::Xaml::IFrameworkElement *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer * *);
};
} // namespace DirectUI

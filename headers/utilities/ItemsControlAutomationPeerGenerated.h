#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class ItemsControlAutomationPeerGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateItemAutomationPeer@ItemsControlAutomationPeerGenerated@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAUIItemAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long CreateItemAutomationPeer(IInspectable *, ::Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindItemByProperty@ItemsControlAutomationPeerGenerated@DirectUI@@UEAAJPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@PEAUIAutomationProperty@5678@PEAUIInspectable@@PEAPEAU345678@@Z
    virtual long FindItemByProperty(::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple *, ::Windows::UI::Xaml::Automation::IAutomationProperty *, IInspectable *, ::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ItemsControlAutomationPeerGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateItemAutomationPeer@ItemsControlAutomationPeerGenerated@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAUIItemAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateItemAutomationPeer(IInspectable *, ::Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateItemAutomationPeerProtected@ItemsControlAutomationPeerGenerated@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAUIItemAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateItemAutomationPeerProtected(IInspectable *, ::Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ItemsControlAutomationPeerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ItemsControlAutomationPeerGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ItemsControlAutomationPeerGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ItemsControlAutomationPeerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

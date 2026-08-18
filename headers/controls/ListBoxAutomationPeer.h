#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class ListBoxAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@ListBoxAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@ListBoxAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateItemAutomationPeerImpl@ListBoxAutomationPeer@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAUIItemAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateItemAutomationPeerImpl(IInspectable *, ::Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer * *);
};
} // namespace DirectUI

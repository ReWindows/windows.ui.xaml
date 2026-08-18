#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class FlipViewAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@FlipViewAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenCore@FlipViewAutomationPeer@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetChildrenCore(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@FlipViewAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateItemAutomationPeerImpl@FlipViewAutomationPeer@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAUIItemAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateItemAutomationPeerImpl(IInspectable *, ::Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer * *);
};
} // namespace DirectUI

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class GroupItemAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@GroupItemAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenCore@GroupItemAutomationPeer@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetChildrenCore(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@GroupItemAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ParentItemsControlAutomationPeer@GroupItemAutomationPeer@DirectUI@@QEAAJPEAPEAUIItemsControlAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    long get_ParentItemsControlAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer * *);
};
} // namespace DirectUI

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class HubSectionAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@HubSectionAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenCore@HubSectionAutomationPeer@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetChildrenCore(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@HubSectionAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameCore@HubSectionAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@HubSectionAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollIntoViewImpl@HubSectionAutomationPeer@DirectUI@@QEAAJXZ
    long ScrollIntoViewImpl();
};
} // namespace DirectUI

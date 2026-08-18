#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class MediaElementAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@MediaElementAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenCore@MediaElementAutomationPeer@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetChildrenCore(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@MediaElementAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalizedControlTypeCore@MediaElementAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetLocalizedControlTypeCore(HSTRING__* *);
};
} // namespace DirectUI

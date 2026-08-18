#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class ThumbAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@ThumbAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@ThumbAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsControlElementCore@ThumbAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsControlElementCore(unsigned char *);
};
} // namespace DirectUI

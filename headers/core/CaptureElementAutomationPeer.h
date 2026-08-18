#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class CaptureElementAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@CaptureElementAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@CaptureElementAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalizedControlTypeCore@CaptureElementAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetLocalizedControlTypeCore(HSTRING__* *);
};
} // namespace DirectUI

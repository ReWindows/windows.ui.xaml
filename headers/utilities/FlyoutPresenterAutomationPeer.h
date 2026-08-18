#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class FlyoutPresenterAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@FlyoutPresenterAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationIdCore@FlyoutPresenterAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetAutomationIdCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@FlyoutPresenterAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@FlyoutPresenterAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
};
} // namespace DirectUI

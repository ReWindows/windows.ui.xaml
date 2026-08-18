#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class PopupAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseImpl@PopupAutomationPeer@DirectUI@@QEAAJXZ
    long CloseImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@PopupAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@PopupAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameCore@PopupAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@PopupAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InteractionStateImpl@PopupAutomationPeer@DirectUI@@QEAAJPEAW4WindowInteractionState@Automation@Xaml@UI@Windows@@@Z
    long get_InteractionStateImpl(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsModalImpl@PopupAutomationPeer@DirectUI@@QEAAJPEAE@Z
    long get_IsModalImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTopmostImpl@PopupAutomationPeer@DirectUI@@QEAAJPEAE@Z
    long get_IsTopmostImpl(unsigned char *);
};
} // namespace DirectUI

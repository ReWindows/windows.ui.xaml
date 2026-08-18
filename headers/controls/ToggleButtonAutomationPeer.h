#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class ToggleButtonAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToToggleState@ToggleButtonAutomationPeer@DirectUI@@SAJPEAUIInspectable@@PEAW4ToggleState@Automation@Xaml@UI@Windows@@@Z
    static long ConvertToToggleState(IInspectable *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@ToggleButtonAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@ToggleButtonAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@ToggleButtonAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseToggleStatePropertyChangedEvent@ToggleButtonAutomationPeer@DirectUI@@UEAAJPEAUIInspectable@@0@Z
    virtual long RaiseToggleStatePropertyChangedEvent(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleImpl@ToggleButtonAutomationPeer@DirectUI@@QEAAJXZ
    long ToggleImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ToggleStateImpl@ToggleButtonAutomationPeer@DirectUI@@QEAAJPEAW4ToggleState@Automation@Xaml@UI@Windows@@@Z
    long get_ToggleStateImpl(int *);
};
} // namespace DirectUI

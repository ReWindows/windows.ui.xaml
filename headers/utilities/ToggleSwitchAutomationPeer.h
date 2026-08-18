#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class ToggleSwitchAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@ToggleSwitchAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@ToggleSwitchAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClickablePointCore@ToggleSwitchAutomationPeer@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long GetClickablePointCore(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalizedControlTypeCore@ToggleSwitchAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetLocalizedControlTypeCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameCore@ToggleSwitchAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@ToggleSwitchAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseToggleStatePropertyChangedEvent@ToggleSwitchAutomationPeer@DirectUI@@UEAAJPEAUIInspectable@@0@Z
    virtual long RaiseToggleStatePropertyChangedEvent(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleImpl@ToggleSwitchAutomationPeer@DirectUI@@QEAAJXZ
    long ToggleImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ToggleStateImpl@ToggleSwitchAutomationPeer@DirectUI@@QEAAJPEAW4ToggleState@Automation@Xaml@UI@Windows@@@Z
    long get_ToggleStateImpl(int *);
};
} // namespace DirectUI

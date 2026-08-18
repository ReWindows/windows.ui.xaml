#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class AppBarAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollapseImpl@AppBarAutomationPeer@DirectUI@@QEAAJXZ
    long CollapseImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandImpl@AppBarAutomationPeer@DirectUI@@QEAAJXZ
    long ExpandImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@AppBarAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@AppBarAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@AppBarAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseExpandCollapseAutomationEvent@AppBarAutomationPeer@DirectUI@@QEAAJE@Z
    long RaiseExpandCollapseAutomationEvent(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseToggleStatePropertyChangedEvent@AppBarAutomationPeer@DirectUI@@QEAAJPEAUIInspectable@@0@Z
    long RaiseToggleStatePropertyChangedEvent(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleImpl@AppBarAutomationPeer@DirectUI@@QEAAJXZ
    long ToggleImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExpandCollapseStateImpl@AppBarAutomationPeer@DirectUI@@QEAAJPEAW4ExpandCollapseState@Automation@Xaml@UI@Windows@@@Z
    long get_ExpandCollapseStateImpl(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ToggleStateImpl@AppBarAutomationPeer@DirectUI@@QEAAJPEAW4ToggleState@Automation@Xaml@UI@Windows@@@Z
    long get_ToggleStateImpl(int *);
};
} // namespace DirectUI

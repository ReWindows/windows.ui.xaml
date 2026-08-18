#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class ToggleMenuFlyoutItemAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToToggleState@ToggleMenuFlyoutItemAutomationPeer@DirectUI@@SAJPEAUIInspectable@@PEAW4ToggleState@Automation@Xaml@UI@Windows@@@Z
    static long ConvertToToggleState(IInspectable *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAcceleratorKeyCore@ToggleMenuFlyoutItemAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetAcceleratorKeyCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@ToggleMenuFlyoutItemAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@ToggleMenuFlyoutItemAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@ToggleMenuFlyoutItemAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionInSetCoreImpl@ToggleMenuFlyoutItemAutomationPeer@DirectUI@@UEAAJPEAH@Z
    virtual long GetPositionInSetCoreImpl(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeOfSetCoreImpl@ToggleMenuFlyoutItemAutomationPeer@DirectUI@@UEAAJPEAH@Z
    virtual long GetSizeOfSetCoreImpl(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseToggleStatePropertyChangedEvent@ToggleMenuFlyoutItemAutomationPeer@DirectUI@@UEAAJPEAUIInspectable@@0@Z
    virtual long RaiseToggleStatePropertyChangedEvent(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleImpl@ToggleMenuFlyoutItemAutomationPeer@DirectUI@@QEAAJXZ
    long ToggleImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ToggleStateImpl@ToggleMenuFlyoutItemAutomationPeer@DirectUI@@QEAAJPEAW4ToggleState@Automation@Xaml@UI@Windows@@@Z
    long get_ToggleStateImpl(int *);
};
} // namespace DirectUI

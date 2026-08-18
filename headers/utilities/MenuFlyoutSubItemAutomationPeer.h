#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class MenuFlyoutSubItemAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollapseImpl@MenuFlyoutSubItemAutomationPeer@DirectUI@@QEAAJXZ
    long CollapseImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandImpl@MenuFlyoutSubItemAutomationPeer@DirectUI@@QEAAJXZ
    long ExpandImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@MenuFlyoutSubItemAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@MenuFlyoutSubItemAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@MenuFlyoutSubItemAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionInSetCoreImpl@MenuFlyoutSubItemAutomationPeer@DirectUI@@UEAAJPEAH@Z
    virtual long GetPositionInSetCoreImpl(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeOfSetCoreImpl@MenuFlyoutSubItemAutomationPeer@DirectUI@@UEAAJPEAH@Z
    virtual long GetSizeOfSetCoreImpl(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseExpandCollapseAutomationEvent@MenuFlyoutSubItemAutomationPeer@DirectUI@@QEAAJE@Z
    long RaiseExpandCollapseAutomationEvent(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExpandCollapseStateImpl@MenuFlyoutSubItemAutomationPeer@DirectUI@@QEAAJPEAW4ExpandCollapseState@Automation@Xaml@UI@Windows@@@Z
    long get_ExpandCollapseStateImpl(int *);
};
} // namespace DirectUI

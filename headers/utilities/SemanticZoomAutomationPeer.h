#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class SemanticZoomAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@SemanticZoomAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenCore@SemanticZoomAutomationPeer@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetChildrenCore(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@SemanticZoomAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@SemanticZoomAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseToggleStatePropertyChangedEvent@SemanticZoomAutomationPeer@DirectUI@@QEAAJE@Z
    long RaiseToggleStatePropertyChangedEvent(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleImpl@SemanticZoomAutomationPeer@DirectUI@@QEAAJXZ
    long ToggleImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ToggleStateImpl@SemanticZoomAutomationPeer@DirectUI@@QEAAJPEAW4ToggleState@Automation@Xaml@UI@Windows@@@Z
    long get_ToggleStateImpl(int *);
};
} // namespace DirectUI

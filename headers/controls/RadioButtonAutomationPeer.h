#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class RadioButtonAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToSelectionImpl@RadioButtonAutomationPeer@DirectUI@@QEAAJXZ
    long AddToSelectionImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@RadioButtonAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@RadioButtonAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@RadioButtonAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseIsSelectedPropertyChangedEvent@RadioButtonAutomationPeer@DirectUI@@QEAAJEE@Z
    long RaiseIsSelectedPropertyChangedEvent(unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromSelectionImpl@RadioButtonAutomationPeer@DirectUI@@QEAAJXZ
    long RemoveFromSelectionImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectImpl@RadioButtonAutomationPeer@DirectUI@@QEAAJXZ
    long SelectImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSelectedImpl@RadioButtonAutomationPeer@DirectUI@@QEAAJPEAE@Z
    long get_IsSelectedImpl(unsigned char *);
};
} // namespace DirectUI

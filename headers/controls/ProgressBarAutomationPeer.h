#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class ProgressBarAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@ProgressBarAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@ProgressBarAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@ProgressBarAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@ProgressBarAutomationPeer@DirectUI@@UEAAJN@Z
    virtual long SetValue(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsReadOnly@ProgressBarAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsReadOnly(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LargeChange@ProgressBarAutomationPeer@DirectUI@@UEAAJPEAN@Z
    virtual long get_LargeChange(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SmallChange@ProgressBarAutomationPeer@DirectUI@@UEAAJPEAN@Z
    virtual long get_SmallChange(double *);
};
} // namespace DirectUI

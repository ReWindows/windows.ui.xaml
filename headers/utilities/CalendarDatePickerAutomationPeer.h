#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class CalendarDatePickerAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@CalendarDatePickerAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@CalendarDatePickerAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalizedControlTypeCore@CalendarDatePickerAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetLocalizedControlTypeCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@CalendarDatePickerAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeImpl@CalendarDatePickerAutomationPeer@DirectUI@@QEAAJXZ
    long InvokeImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ValueImpl@CalendarDatePickerAutomationPeer@DirectUI@@QEAAJPEAPEAUHSTRING__@@@Z
    long get_ValueImpl(HSTRING__* *);
};
} // namespace DirectUI

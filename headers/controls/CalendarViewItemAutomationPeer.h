#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class CalendarViewItemAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@CalendarViewItemAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@CalendarViewItemAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@CalendarViewItemAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowHeaderItemsImpl@CalendarViewItemAutomationPeer@DirectUI@@QEAAJPEAIPEAPEAPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@@Z
    long GetRowHeaderItemsImpl(unsigned int *, ::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeImpl@CalendarViewItemAutomationPeer@DirectUI@@QEAAJXZ
    long InvokeImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ColumnImpl@CalendarViewItemAutomationPeer@DirectUI@@UEAAJPEAH@Z
    virtual long get_ColumnImpl(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RowImpl@CalendarViewItemAutomationPeer@DirectUI@@UEAAJPEAH@Z
    virtual long get_RowImpl(int *);
};
} // namespace DirectUI

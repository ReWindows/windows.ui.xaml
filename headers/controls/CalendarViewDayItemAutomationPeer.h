#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class CalendarViewDayItemAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToSelectionImpl@CalendarViewDayItemAutomationPeer@DirectUI@@QEAAJXZ
    long AddToSelectionImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@CalendarViewDayItemAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@CalendarViewDayItemAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnHeaderItemsImpl@CalendarViewDayItemAutomationPeer@DirectUI@@QEAAJPEAIPEAPEAPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@@Z
    long GetColumnHeaderItemsImpl(unsigned int *, ::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@CalendarViewDayItemAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowHeaderItemsImpl@CalendarViewDayItemAutomationPeer@DirectUI@@QEAAJPEAIPEAPEAPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@@Z
    long GetRowHeaderItemsImpl(unsigned int *, ::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabledCore@CalendarViewDayItemAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsEnabledCore(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromSelectionImpl@CalendarViewDayItemAutomationPeer@DirectUI@@QEAAJXZ
    long RemoveFromSelectionImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectImpl@CalendarViewDayItemAutomationPeer@DirectUI@@QEAAJXZ
    long SelectImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ColumnImpl@CalendarViewDayItemAutomationPeer@DirectUI@@UEAAJPEAH@Z
    virtual long get_ColumnImpl(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSelectedImpl@CalendarViewDayItemAutomationPeer@DirectUI@@QEAAJPEAE@Z
    long get_IsSelectedImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RowImpl@CalendarViewDayItemAutomationPeer@DirectUI@@UEAAJPEAH@Z
    virtual long get_RowImpl(int *);
};
} // namespace DirectUI

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class CalendarViewAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@CalendarViewAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenCore@CalendarViewAutomationPeer@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetChildrenCore(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@CalendarViewAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnHeadersImpl@CalendarViewAutomationPeer@DirectUI@@QEAAJPEAIPEAPEAPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@@Z
    long GetColumnHeadersImpl(unsigned int *, ::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemImpl@CalendarViewAutomationPeer@DirectUI@@QEAAJHHPEAPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@@Z
    long GetItemImpl(int, int, ::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@CalendarViewAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionImpl@CalendarViewAutomationPeer@DirectUI@@QEAAJPEAIPEAPEAPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@@Z
    long GetSelectionImpl(unsigned int *, ::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseSelectionEvents@CalendarViewAutomationPeer@DirectUI@@QEAAJPEAUICalendarViewSelectedDatesChangedEventArgs@Controls@Xaml@UI@Windows@@@Z
    long RaiseSelectionEvents(::Windows::UI::Xaml::Controls::ICalendarViewSelectedDatesChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanSelectMultipleImpl@CalendarViewAutomationPeer@DirectUI@@QEAAJPEAE@Z
    long get_CanSelectMultipleImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ColumnCountImpl@CalendarViewAutomationPeer@DirectUI@@QEAAJPEAH@Z
    long get_ColumnCountImpl(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RowCountImpl@CalendarViewAutomationPeer@DirectUI@@QEAAJPEAH@Z
    long get_RowCountImpl(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ValueImpl@CalendarViewAutomationPeer@DirectUI@@QEAAJPEAPEAUHSTRING__@@@Z
    long get_ValueImpl(HSTRING__* *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAPs@CalendarViewAutomationPeer@DirectUI@@AEAAJPEAU?$IVector@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    long RemoveAPs(WindissectOpaque *);
};
} // namespace DirectUI

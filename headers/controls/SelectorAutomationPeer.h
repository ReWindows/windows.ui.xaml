#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class SelectorAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@SelectorAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@SelectorAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPeerForSelectedItem@SelectorAutomationPeer@DirectUI@@QEAAJPEAUIInspectable@@PEAPEAUISelectorItemAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    long GetPeerForSelectedItem(IInspectable *, ::Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedItemAutomationPeer@SelectorAutomationPeer@DirectUI@@QEAAJPEAPEAUIItemAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    long GetSelectedItemAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionImpl@SelectorAutomationPeer@DirectUI@@QEAAJPEAIPEAPEAPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@@Z
    long GetSelectionImpl(unsigned int *, ::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseSelectionEvents@SelectorAutomationPeer@DirectUI@@QEAAJPEAUISelectionChangedEventArgs@Controls@Xaml@UI@Windows@@@Z
    long RaiseSelectionEvents(::Windows::UI::Xaml::Controls::ISelectionChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanSelectMultipleImpl@SelectorAutomationPeer@DirectUI@@QEAAJPEAE@Z
    long get_CanSelectMultipleImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSelectionRequiredImpl@SelectorAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsSelectionRequiredImpl(unsigned char *);
};
} // namespace DirectUI

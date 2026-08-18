#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class CalendarViewBaseItemAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameCore@CalendarViewBaseItemAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@CalendarViewBaseItemAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollIntoViewImpl@CalendarViewBaseItemAutomationPeer@DirectUI@@QEAAJXZ
    long ScrollIntoViewImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContainingGridImpl@CalendarViewBaseItemAutomationPeer@DirectUI@@QEAAJPEAPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@@Z
    long get_ContainingGridImpl(::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsItemVisible@CalendarViewBaseItemAutomationPeer@DirectUI@@IEAAJAEA_N@Z
    long IsItemVisible(bool &);
};
} // namespace DirectUI

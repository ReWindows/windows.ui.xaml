#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class CalendarViewBaseItemAutomationPeerGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollIntoView@CalendarViewBaseItemAutomationPeerGenerated@DirectUI@@UEAAJXZ
    virtual long ScrollIntoView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Column@CalendarViewBaseItemAutomationPeerGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_Column(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ColumnSpan@CalendarViewBaseItemAutomationPeerGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_ColumnSpan(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContainingGrid@CalendarViewBaseItemAutomationPeerGenerated@DirectUI@@UEAAJPEAPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long get_ContainingGrid(::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Row@CalendarViewBaseItemAutomationPeerGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_Row(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RowSpan@CalendarViewBaseItemAutomationPeerGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_RowSpan(int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CalendarViewBaseItemAutomationPeerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CalendarViewBaseItemAutomationPeerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

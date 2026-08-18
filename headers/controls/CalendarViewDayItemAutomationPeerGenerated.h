#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class CalendarViewDayItemAutomationPeerGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToSelection@CalendarViewDayItemAutomationPeerGenerated@DirectUI@@UEAAJXZ
    virtual long AddToSelection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnHeaderItems@CalendarViewDayItemAutomationPeerGenerated@DirectUI@@UEAAJPEAIPEAPEAPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long GetColumnHeaderItems(unsigned int *, ::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowHeaderItems@CalendarViewDayItemAutomationPeerGenerated@DirectUI@@UEAAJPEAIPEAPEAPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long GetRowHeaderItems(unsigned int *, ::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CalendarViewDayItemAutomationPeerGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromSelection@CalendarViewDayItemAutomationPeerGenerated@DirectUI@@UEAAJXZ
    virtual long RemoveFromSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@CalendarViewDayItemAutomationPeerGenerated@DirectUI@@UEAAJXZ
    virtual long Select();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSelected@CalendarViewDayItemAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsSelected(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionContainer@CalendarViewDayItemAutomationPeerGenerated@DirectUI@@UEAAJPEAPEAUIIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@@@Z
    virtual long get_SelectionContainer(::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CalendarViewDayItemAutomationPeerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CalendarViewDayItemAutomationPeerGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CalendarViewDayItemAutomationPeerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

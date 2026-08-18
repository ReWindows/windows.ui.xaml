#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class CalendarDatePickerAutomationPeerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithOwner@CalendarDatePickerAutomationPeerFactory@DirectUI@@UEAAJPEAUICalendarDatePicker@Controls@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU8@PEAPEAUICalendarDatePickerAutomationPeer@Peers@Automation@567@@Z
    virtual long CreateInstanceWithOwner(::Windows::UI::Xaml::Controls::ICalendarDatePicker *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::ICalendarDatePickerAutomationPeer * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CalendarDatePickerAutomationPeerFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CalendarDatePickerAutomationPeerFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CalendarDatePickerAutomationPeerFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CalendarDatePickerAutomationPeerFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

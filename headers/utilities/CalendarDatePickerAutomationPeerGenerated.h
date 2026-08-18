#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class CalendarDatePickerAutomationPeerGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CalendarDatePickerAutomationPeerGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CalendarDatePickerAutomationPeerGenerated@DirectUI@@UEAAJXZ
    virtual long Invoke();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CalendarDatePickerAutomationPeerGenerated@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long SetValue(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsReadOnly@CalendarDatePickerAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsReadOnly(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@CalendarDatePickerAutomationPeerGenerated@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Value(HSTRING__* *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CalendarDatePickerAutomationPeerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CalendarDatePickerAutomationPeerGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@CalendarDatePickerAutomationPeerGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CalendarDatePickerAutomationPeerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

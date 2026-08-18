#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class CalendarDatePickerDateChangedEventArgsGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NewDate@CalendarDatePickerDateChangedEventArgsGenerated@DirectUI@@UEAAJPEAPEAU?$IReference@UDateTime@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_NewDate(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OldDate@CalendarDatePickerDateChangedEventArgsGenerated@DirectUI@@UEAAJPEAPEAU?$IReference@UDateTime@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_OldDate(WindissectOpaque * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CalendarDatePickerDateChangedEventArgsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CalendarDatePickerDateChangedEventArgsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@CalendarDatePickerDateChangedEventArgsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CalendarDatePickerDateChangedEventArgsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

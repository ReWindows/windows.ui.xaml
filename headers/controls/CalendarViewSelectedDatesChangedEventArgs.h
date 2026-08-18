#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class CalendarViewSelectedDatesChangedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AddedDates@CalendarViewSelectedDatesChangedEventArgs@DirectUI@@UEAAJPEAPEAU?$IVectorView@UDateTime@Foundation@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_AddedDates(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RemovedDates@CalendarViewSelectedDatesChangedEventArgs@DirectUI@@UEAAJPEAPEAU?$IVectorView@UDateTime@Foundation@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_RemovedDates(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CalendarViewSelectedDatesChangedEventArgs@DirectUI@@UEAA@XZ
    virtual ~CalendarViewSelectedDatesChangedEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CalendarViewSelectedDatesChangedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CalendarViewSelectedDatesChangedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@CalendarViewSelectedDatesChangedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CalendarViewSelectedDatesChangedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

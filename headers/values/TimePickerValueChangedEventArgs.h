#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class TimePickerValueChangedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NewTime@TimePickerValueChangedEventArgs@DirectUI@@UEAAJPEAUTimeSpan@Foundation@Windows@@@Z
    virtual long get_NewTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OldTime@TimePickerValueChangedEventArgs@DirectUI@@UEAAJPEAUTimeSpan@Foundation@Windows@@@Z
    virtual long get_OldTime(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TimePickerValueChangedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TimePickerValueChangedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@TimePickerValueChangedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TimePickerValueChangedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

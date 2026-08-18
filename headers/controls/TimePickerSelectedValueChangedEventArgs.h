#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class TimePickerSelectedValueChangedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NewTime@TimePickerSelectedValueChangedEventArgs@DirectUI@@UEAAJPEAPEAU?$IReference@UTimeSpan@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_NewTime(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OldTime@TimePickerSelectedValueChangedEventArgs@DirectUI@@UEAAJPEAPEAU?$IReference@UTimeSpan@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_OldTime(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NewTime@TimePickerSelectedValueChangedEventArgs@DirectUI@@QEAAJPEAU?$IReference@UTimeSpan@Foundation@Windows@@@Foundation@Windows@@@Z
    long put_NewTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OldTime@TimePickerSelectedValueChangedEventArgs@DirectUI@@QEAAJPEAU?$IReference@UTimeSpan@Foundation@Windows@@@Foundation@Windows@@@Z
    long put_OldTime(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TimePickerSelectedValueChangedEventArgs@DirectUI@@UEAA@XZ
    virtual ~TimePickerSelectedValueChangedEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TimePickerSelectedValueChangedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TimePickerSelectedValueChangedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@TimePickerSelectedValueChangedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TimePickerSelectedValueChangedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

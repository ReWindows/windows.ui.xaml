#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class DatePickerSelectedValueChangedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NewDate@DatePickerSelectedValueChangedEventArgs@DirectUI@@UEAAJPEAPEAU?$IReference@UDateTime@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_NewDate(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OldDate@DatePickerSelectedValueChangedEventArgs@DirectUI@@UEAAJPEAPEAU?$IReference@UDateTime@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_OldDate(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NewDate@DatePickerSelectedValueChangedEventArgs@DirectUI@@QEAAJPEAU?$IReference@UDateTime@Foundation@Windows@@@Foundation@Windows@@@Z
    long put_NewDate(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OldDate@DatePickerSelectedValueChangedEventArgs@DirectUI@@QEAAJPEAU?$IReference@UDateTime@Foundation@Windows@@@Foundation@Windows@@@Z
    long put_OldDate(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DatePickerSelectedValueChangedEventArgs@DirectUI@@UEAA@XZ
    virtual ~DatePickerSelectedValueChangedEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DatePickerSelectedValueChangedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DatePickerSelectedValueChangedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@DatePickerSelectedValueChangedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DatePickerSelectedValueChangedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

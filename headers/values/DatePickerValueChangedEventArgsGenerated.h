#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class DatePickerValueChangedEventArgsGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NewDate@DatePickerValueChangedEventArgsGenerated@DirectUI@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_NewDate(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OldDate@DatePickerValueChangedEventArgsGenerated@DirectUI@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_OldDate(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DatePickerValueChangedEventArgsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DatePickerValueChangedEventArgsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@DatePickerValueChangedEventArgsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DatePickerValueChangedEventArgsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

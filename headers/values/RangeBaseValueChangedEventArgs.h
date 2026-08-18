#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class RangeBaseValueChangedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NewValue@RangeBaseValueChangedEventArgs@DirectUI@@UEAAJPEAN@Z
    virtual long get_NewValue(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OldValue@RangeBaseValueChangedEventArgs@DirectUI@@UEAAJPEAN@Z
    virtual long get_OldValue(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NewValue@RangeBaseValueChangedEventArgs@DirectUI@@QEAAJN@Z
    long put_NewValue(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OldValue@RangeBaseValueChangedEventArgs@DirectUI@@QEAAJN@Z
    long put_OldValue(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@RangeBaseValueChangedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@RangeBaseValueChangedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@RangeBaseValueChangedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@RangeBaseValueChangedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

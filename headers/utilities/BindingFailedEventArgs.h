#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class BindingFailedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Message@BindingFailedEventArgs@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Message(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BindingFailedEventArgs@DirectUI@@UEAA@XZ
    virtual ~BindingFailedEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@BindingFailedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@BindingFailedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@BindingFailedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@BindingFailedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

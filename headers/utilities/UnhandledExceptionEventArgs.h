#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class UnhandledExceptionEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Exception@UnhandledExceptionEventArgs@DirectUI@@UEAAJPEAJ@Z
    virtual long get_Exception(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@UnhandledExceptionEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Message@UnhandledExceptionEventArgs@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Message(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@UnhandledExceptionEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnhandledExceptionEventArgs@DirectUI@@UEAA@XZ
    virtual ~UnhandledExceptionEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@UnhandledExceptionEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@UnhandledExceptionEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@UnhandledExceptionEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@UnhandledExceptionEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

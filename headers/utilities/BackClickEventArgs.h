#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class BackClickEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@BackClickEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@BackClickEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@BackClickEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@BackClickEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@BackClickEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@BackClickEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

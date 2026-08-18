#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class RichEditBoxSelectionChangingEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Cancel@RichEditBoxSelectionChangingEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_Cancel(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionLength@RichEditBoxSelectionChangingEventArgs@DirectUI@@UEAAJPEAH@Z
    virtual long get_SelectionLength(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionStart@RichEditBoxSelectionChangingEventArgs@DirectUI@@UEAAJPEAH@Z
    virtual long get_SelectionStart(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Cancel@RichEditBoxSelectionChangingEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_Cancel(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@RichEditBoxSelectionChangingEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@RichEditBoxSelectionChangingEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@RichEditBoxSelectionChangingEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@RichEditBoxSelectionChangingEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

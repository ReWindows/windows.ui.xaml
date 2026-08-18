#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class TextBoxSelectionChangingEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Cancel@TextBoxSelectionChangingEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_Cancel(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionLength@TextBoxSelectionChangingEventArgs@DirectUI@@UEAAJPEAH@Z
    virtual long get_SelectionLength(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionStart@TextBoxSelectionChangingEventArgs@DirectUI@@UEAAJPEAH@Z
    virtual long get_SelectionStart(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Cancel@TextBoxSelectionChangingEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_Cancel(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TextBoxSelectionChangingEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TextBoxSelectionChangingEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@TextBoxSelectionChangingEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TextBoxSelectionChangingEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

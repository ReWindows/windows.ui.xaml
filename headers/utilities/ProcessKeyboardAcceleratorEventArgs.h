#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class ProcessKeyboardAcceleratorEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@ProcessKeyboardAcceleratorEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Key@ProcessKeyboardAcceleratorEventArgs@DirectUI@@UEAAJPEAW4VirtualKey@System@Windows@@@Z
    virtual long get_Key(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Modifiers@ProcessKeyboardAcceleratorEventArgs@DirectUI@@UEAAJPEAW4VirtualKeyModifiers@System@Windows@@@Z
    virtual long get_Modifiers(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@ProcessKeyboardAcceleratorEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HandledShouldNotImpedeTextInput@ProcessKeyboardAcceleratorEventArgs@DirectUI@@QEAAJE@Z
    long put_HandledShouldNotImpedeTextInput(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ProcessKeyboardAcceleratorEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ProcessKeyboardAcceleratorEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ProcessKeyboardAcceleratorEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ProcessKeyboardAcceleratorEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

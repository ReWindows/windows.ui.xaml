#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class ContextMenuEventArgsGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CursorLeft@ContextMenuEventArgsGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_CursorLeft(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CursorTop@ContextMenuEventArgsGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_CursorTop(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@ContextMenuEventArgsGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CursorLeft@ContextMenuEventArgsGenerated@DirectUI@@QEAAJN@Z
    long put_CursorLeft(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CursorTop@ContextMenuEventArgsGenerated@DirectUI@@QEAAJN@Z
    long put_CursorTop(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@ContextMenuEventArgsGenerated@DirectUI@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ContextMenuEventArgsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ContextMenuEventArgsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ContextMenuEventArgsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ContextMenuEventArgsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

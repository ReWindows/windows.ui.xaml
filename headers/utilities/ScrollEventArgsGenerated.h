#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class ScrollEventArgsGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NewValue@ScrollEventArgsGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_NewValue(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScrollEventType@ScrollEventArgsGenerated@DirectUI@@UEAAJPEAW4ScrollEventType@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long get_ScrollEventType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NewValue@ScrollEventArgsGenerated@DirectUI@@QEAAJN@Z
    long put_NewValue(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ScrollEventType@ScrollEventArgsGenerated@DirectUI@@QEAAJW4ScrollEventType@Primitives@Controls@Xaml@UI@Windows@@@Z
    long put_ScrollEventType(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ScrollEventArgsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ScrollEventArgsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ScrollEventArgsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ScrollEventArgsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

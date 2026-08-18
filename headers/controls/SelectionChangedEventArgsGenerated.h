#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class SelectionChangedEventArgsGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AddedItems@SelectionChangedEventArgsGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long get_AddedItems(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RemovedItems@SelectionChangedEventArgsGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long get_RemovedItems(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AddedItems@SelectionChangedEventArgsGenerated@DirectUI@@QEAAJPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    long put_AddedItems(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RemovedItems@SelectionChangedEventArgsGenerated@DirectUI@@QEAAJPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    long put_RemovedItems(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SelectionChangedEventArgsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SelectionChangedEventArgsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SelectionChangedEventArgsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SelectionChangedEventArgsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

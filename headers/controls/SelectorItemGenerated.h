#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class SelectorItemGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SelectorItemGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPointerOver@SelectorItemGenerated@DirectUI@@QEAAJPEAE@Z
    long get_IsPointerOver(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSelected@SelectorItemGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsSelected(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsPointerOver@SelectorItemGenerated@DirectUI@@QEAAJE@Z
    long put_IsPointerOver(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsSelected@SelectorItemGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsSelected(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SelectorItemGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SelectorItemGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SelectorItemGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SelectorItemGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

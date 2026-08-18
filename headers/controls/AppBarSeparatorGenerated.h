#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class AppBarSeparatorGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@AppBarSeparatorGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DynamicOverflowOrder@AppBarSeparatorGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_DynamicOverflowOrder(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCompact@AppBarSeparatorGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsCompact(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInOverflow@AppBarSeparatorGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsInOverflow(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UseOverflowStyle@AppBarSeparatorGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_UseOverflowStyle(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DynamicOverflowOrder@AppBarSeparatorGenerated@DirectUI@@UEAAJH@Z
    virtual long put_DynamicOverflowOrder(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsCompact@AppBarSeparatorGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsCompact(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_UseOverflowStyle@AppBarSeparatorGenerated@DirectUI@@UEAAJE@Z
    virtual long put_UseOverflowStyle(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@AppBarSeparatorGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@AppBarSeparatorGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@AppBarSeparatorGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@AppBarSeparatorGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

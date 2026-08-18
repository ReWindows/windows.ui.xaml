#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class AppBarElementContainerGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@AppBarElementContainerGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DynamicOverflowOrder@AppBarElementContainerGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_DynamicOverflowOrder(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCompact@AppBarElementContainerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsCompact(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInOverflow@AppBarElementContainerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsInOverflow(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UseOverflowStyle@AppBarElementContainerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_UseOverflowStyle(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DynamicOverflowOrder@AppBarElementContainerGenerated@DirectUI@@UEAAJH@Z
    virtual long put_DynamicOverflowOrder(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsCompact@AppBarElementContainerGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsCompact(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_UseOverflowStyle@AppBarElementContainerGenerated@DirectUI@@UEAAJE@Z
    virtual long put_UseOverflowStyle(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@AppBarElementContainerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@AppBarElementContainerGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@AppBarElementContainerGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@AppBarElementContainerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

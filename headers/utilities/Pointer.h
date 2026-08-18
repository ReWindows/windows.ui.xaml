#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class Pointer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@Pointer@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInContact@Pointer@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsInContact(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInRange@Pointer@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsInRange(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerDeviceType@Pointer@DirectUI@@UEAAJPEAW4PointerDeviceType@Input@Devices@Windows@@@Z
    virtual long get_PointerDeviceType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerId@Pointer@DirectUI@@UEAAJPEAI@Z
    virtual long get_PointerId(unsigned int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@Pointer@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@Pointer@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@Pointer@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@Pointer@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

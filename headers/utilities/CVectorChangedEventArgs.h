#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
class CVectorChangedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CVectorChangedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CVectorChangedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CVectorChangedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CVectorChangedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CVectorChangedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CVectorChangedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CollectionChange@CVectorChangedEventArgs@@UEAAJPEAW4CollectionChange@Collections@Foundation@Windows@@@Z
    virtual long get_CollectionChange(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Index@CVectorChangedEventArgs@@UEAAJPEAI@Z
    virtual long get_Index(unsigned int *);
};

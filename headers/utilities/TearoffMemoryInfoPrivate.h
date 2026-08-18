#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class TearoffMemoryInfoPrivate {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TearoffMemoryInfoPrivate@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCountOfDescendantUIElements@TearoffMemoryInfoPrivate@@UEAAJPEA_K@Z
    virtual long GetCountOfDescendantUIElements(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEstimatedSizeOfDescendantImages@TearoffMemoryInfoPrivate@@UEAAJPEA_K@Z
    virtual long GetEstimatedSizeOfDescendantImages(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TearoffMemoryInfoPrivate@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TearoffMemoryInfoPrivate@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TearoffMemoryInfoPrivate@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TearoffMemoryInfoPrivate@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TearoffMemoryInfoPrivate@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TearoffMemoryInfoPrivate@@QEAA@XZ
    ~TearoffMemoryInfoPrivate();
};

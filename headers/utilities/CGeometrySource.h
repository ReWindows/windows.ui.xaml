#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class CGeometrySource {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CGeometrySource@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGeometrySource@@QEAA@XZ
    CGeometrySource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGeometry@CGeometrySource@@UEAAJPEAPEAUID2D1Geometry@@@Z
    virtual long GetGeometry(ID2D1Geometry * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CGeometrySource@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CGeometrySource@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetGeometryUsingFactory@CGeometrySource@@UEAAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z
    virtual long TryGetGeometryUsingFactory(ID2D1Factory *, ID2D1Geometry * *);
};

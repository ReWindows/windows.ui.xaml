#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class OfferTracker {
public:
    class UnofferRevoker;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteReleasedSurfaceFactoryFromList@OfferTracker@@QEAAXPEAUIDCompositionSurfaceFactoryPartner3@@@Z
    void DeleteReleasedSurfaceFactoryFromList(IDCompositionSurfaceFactoryPartner3*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOffered@OfferTracker@@QEAA_NXZ
    bool IsOffered();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OfferSurfaceFactory@OfferTracker@@QEAAJPEAUIDCompositionSurfaceFactoryPartner3@@@Z
    long OfferSurfaceFactory(IDCompositionSurfaceFactoryPartner3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReclaimResources@OfferTracker@@QEAAJPEAH@Z
    long ReclaimResources(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@OfferTracker@@QEAAXXZ
    void Reset();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OfferTracker@@UEAA@XZ
    virtual ~OfferTracker();
};

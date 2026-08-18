#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace detail {
class OfferableHeap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Alloc@OfferableHeap@detail@@QEAAPEAXI@Z
    void * Alloc(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Free@OfferableHeap@detail@@QEAAXPEAXI@Z
    void Free(void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Offer@OfferableHeap@detail@@QEAAXPEAXI@Z
    void Offer(void *, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OfferableHeap@detail@@QEAA@XZ
    OfferableHeap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reclaim@OfferableHeap@detail@@QEAA_NPEAXI@Z
    bool Reclaim(void *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OfferableHeap@detail@@QEAA@XZ
    ~OfferableHeap();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitOnceCallback@OfferableHeap@detail@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z
    static int InitOnceCallback(_RTL_RUN_ONCE *, void *, void * *);
};
} // namespace detail

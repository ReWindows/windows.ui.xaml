#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
namespace ctl::WeakReferenceSourceNoThreadId {
class ReferenceTrackerGCLock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireLock@ReferenceTrackerGCLock@WeakReferenceSourceNoThreadId@ctl@@UEAA_JXZ
    virtual int64_t AcquireLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseLock@ReferenceTrackerGCLock@WeakReferenceSourceNoThreadId@ctl@@UEAAX_J@Z
    virtual void ReleaseLock(int64_t);
};
} // namespace ctl::WeakReferenceSourceNoThreadId

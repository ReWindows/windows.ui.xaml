#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class TrackerPtrWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@TrackerPtrWrapper@DirectUI@@UEAAPEAUIUnknown@@XZ
    virtual IUnknown * Get();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReferenceTrackerWalk@TrackerPtrWrapper@DirectUI@@UEAAXH@Z
    virtual void ReferenceTrackerWalk(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@TrackerPtrWrapper@DirectUI@@UEAAJPEAUIUnknown@@@Z
    virtual long Set(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetSafeReference@TrackerPtrWrapper@DirectUI@@UEAA_NPEAPEAUIUnknown@@@Z
    virtual bool TryGetSafeReference(IUnknown * *);
};
} // namespace DirectUI

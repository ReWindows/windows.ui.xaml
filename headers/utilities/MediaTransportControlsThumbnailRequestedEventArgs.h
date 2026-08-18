#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class MediaTransportControlsThumbnailRequestedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@MediaTransportControlsThumbnailRequestedEventArgs@DirectUI@@QEAAJXZ
    long Complete();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferralImpl@MediaTransportControlsThumbnailRequestedEventArgs@DirectUI@@QEAAJPEAPEAUIDeferral@Foundation@Windows@@@Z
    long GetDeferralImpl(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MediaTransportControlsThumbnailRequestedEventArgs@DirectUI@@UEAA@XZ
    virtual ~MediaTransportControlsThumbnailRequestedEventArgs();
};
} // namespace DirectUI

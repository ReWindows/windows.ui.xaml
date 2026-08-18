#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class WrappingHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustContentBoundsWhenWrappingEnabled@WrappingHelper@@QEAAJPEAUIDirectManipulationViewport@@AEAUtagRECT@@I@Z
    long AdjustContentBoundsWhenWrappingEnabled(IDirectManipulationViewport *, tagRECT &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@WrappingHelper@@SAJPEAVCCoreServices@@PEAPEAV1@@Z
    static long Create(CCoreServices *, WrappingHelper * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsWrappingEnabled@WrappingHelper@@QEAAJPEAUIDirectManipulationViewport@@PEAI@Z
    long GetIsWrappingEnabled(IDirectManipulationViewport *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDMHubStateChange@WrappingHelper@@UEAAJPEAUIObject@@W4DirectManipulationHubEvent@@@Z
    virtual long NotifyDMHubStateChange(IObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyViewportNormalizationCorrected@WrappingHelper@@QEAAJPEAUIDirectManipulationViewport@@@Z
    long NotifyViewportNormalizationCorrected(IDirectManipulationViewport *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentOffsetChanged@WrappingHelper@@QEAAJPEAUIDirectManipulationViewport@@M@Z
    long OnContentOffsetChanged(IDirectManipulationViewport *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewportStatusUpdated@WrappingHelper@@QEAAJPEAUIObject@@PEAUIDirectManipulationViewport@@W4DIRECTMANIPULATION_STATUS@@2@Z
    long OnViewportStatusUpdated(IObject *, IDirectManipulationViewport *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWrappingData@WrappingHelper@@QEAAJPEAUIDirectManipulationViewport@@MMIMPEAMI@Z
    long UpdateWrappingData(IDirectManipulationViewport *, float, float, unsigned int, float, float *, unsigned int);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WrappingHelper@@EEAA@XZ
    virtual ~WrappingHelper();
};

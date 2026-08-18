#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class DCompInteropCompositorPartnerCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@DCompInteropCompositorPartnerCallback@@SAJPEAVDCompTreeHost@@PEAPEAV1@@Z
    static long Create(DCompTreeHost *, DCompInteropCompositorPartnerCallback * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DCompInteropCompositorPartnerCallback@@QEAA@PEAVDCompTreeHost@@@Z
    DCompInteropCompositorPartnerCallback(DCompTreeHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDeferralState@DCompInteropCompositorPartnerCallback@@UEAAJ_N@Z
    virtual long NotifyDeferralState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDirty@DCompInteropCompositorPartnerCallback@@UEAAJXZ
    virtual long NotifyDirty();
};

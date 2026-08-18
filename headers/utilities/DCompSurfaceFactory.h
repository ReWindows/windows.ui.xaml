#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class DCompSurfaceFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@DCompSurfaceFactory@@SAJPEAVDCompTreeHost@@PEAUIDCompositionDesktopDevicePartner@@PEAUIUnknown@@PEAPEAV1@@Z
    static long Create(DCompTreeHost *, IDCompositionDesktopDevicePartner *, IUnknown *, DCompSurfaceFactory * *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DCompSurfaceFactory@@AEAA@PEAVDCompTreeHost@@PEAUIDCompositionSurfaceFactory@@@Z
    DCompSurfaceFactory(DCompTreeHost *, IDCompositionSurfaceFactory *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DCompSurfaceFactory@@EEAA@XZ
    virtual ~DCompSurfaceFactory();
};

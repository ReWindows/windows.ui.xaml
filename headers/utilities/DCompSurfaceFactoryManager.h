#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class DCompSurfaceFactoryManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupSurfaceFactoryMapForCurrentThread@DCompSurfaceFactoryManager@@QEAAJXZ
    long CleanupSurfaceFactoryMapForCurrentThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deinitialize@DCompSurfaceFactoryManager@@SAXXZ
    static void Deinitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInitialized@DCompSurfaceFactoryManager@@SAXXZ
    static void EnsureInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushAllSurfaceFactoriesWithDevice@DCompSurfaceFactoryManager@@QEAAJPEAUIUnknown@@@Z
    long FlushAllSurfaceFactoriesWithDevice(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ObtainSurfaceFactory@DCompSurfaceFactoryManager@@QEAAJPEAVDCompTreeHost@@PEAUIUnknown@@PEAUIDCompositionDesktopDevicePartner@@PEAPEAVDCompSurfaceFactory@@@Z
    long ObtainSurfaceFactory(DCompTreeHost *, IUnknown *, IDCompositionDesktopDevicePartner *, DCompSurfaceFactory * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSurfaceFactoryDestroyed@DCompSurfaceFactoryManager@@QEAAJPEAVDCompSurfaceFactory@@@Z
    long OnSurfaceFactoryDestroyed(DCompSurfaceFactory *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DCompSurfaceFactoryManager@@AEAA@XZ
    ~DCompSurfaceFactoryManager();
};

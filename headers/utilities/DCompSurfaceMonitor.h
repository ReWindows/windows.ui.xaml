#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class DCompSurfaceMonitor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDCompSurfaceCollection@DCompSurfaceMonitor@@SAJXZ
    static long CleanupDCompSurfaceCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeInitialize@DCompSurfaceMonitor@@SAJXZ
    static long DeInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DumpSurfacesDrawn@DCompSurfaceMonitor@@SAJI@Z
    static long DumpSurfacesDrawn(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@DCompSurfaceMonitor@@SAJXZ
    static long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSurface@DCompSurfaceMonitor@@SAJPEAVDCompSurface@@@Z
    static long RemoveSurface(DCompSurface *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackSurfaceDrawn@DCompSurfaceMonitor@@SAJPEAVDCompSurface@@@Z
    static long TrackSurfaceDrawn(DCompSurface *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDCompSurfaceCollection@DCompSurfaceMonitor@@CAPEAV?$xchainedmap@PEAVDCompSurface@@I@@_N@Z
    static WindissectOpaque * GetDCompSurfaceCollection(bool);
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class SurfaceImageSourceFactory {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SurfaceImageSourceFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushAllSurfacesWithDevice@SurfaceImageSourceFactory@DirectUI@@MEAAJPEAUIUnknown@@@Z
    virtual long FlushAllSurfacesWithDevice(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SurfaceImageSourceFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SurfaceImageSourceFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

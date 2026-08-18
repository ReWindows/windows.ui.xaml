#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
namespace DirectUI {
class VirtualSurfaceImageSource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDraw@VirtualSurfaceImageSource@DirectUI@@UEAAJUtagRECT@@PEAPEAUIDXGISurface@@PEAUtagPOINT@@@Z
    virtual long BeginDraw(tagRECT, IDXGISurface * *, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDraw@VirtualSurfaceImageSource@DirectUI@@UEAAJXZ
    virtual long EndDraw();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUpdateRectCount@VirtualSurfaceImageSource@DirectUI@@UEAAJPEAK@Z
    virtual long GetUpdateRectCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUpdateRects@VirtualSurfaceImageSource@DirectUI@@UEAAJPEAUtagRECT@@K@Z
    virtual long GetUpdateRects(tagRECT *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleBounds@VirtualSurfaceImageSource@DirectUI@@UEAAJPEAUtagRECT@@@Z
    virtual long GetVisibleBounds(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate@VirtualSurfaceImageSource@DirectUI@@UEAAJUtagRECT@@@Z
    virtual long Invalidate(tagRECT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForUpdatesNeeded@VirtualSurfaceImageSource@DirectUI@@UEAAJPEAUIVirtualSurfaceUpdatesCallbackNative@@@Z
    virtual long RegisterForUpdatesNeeded(IVirtualSurfaceUpdatesCallbackNative *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@VirtualSurfaceImageSource@DirectUI@@UEAAJHH@Z
    virtual long Resize(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDevice@VirtualSurfaceImageSource@DirectUI@@UEAAJPEAUIDXGIDevice@@@Z
    virtual long SetDevice(IDXGIDevice *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatesNeeded@VirtualSurfaceImageSource@DirectUI@@UEAAJXZ
    virtual long UpdatesNeeded();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VirtualSurfaceImageSource@DirectUI@@UEAA@XZ
    virtual ~VirtualSurfaceImageSource();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@VirtualSurfaceImageSource@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@VirtualSurfaceImageSource@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@VirtualSurfaceImageSource@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

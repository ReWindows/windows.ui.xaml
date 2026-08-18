#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class SurfaceImageSource {
public:
    class SurfaceImageSourceWithD2D;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDraw@SurfaceImageSource@DirectUI@@UEAAJUtagRECT@@PEAPEAUIDXGISurface@@PEAUtagPOINT@@@Z
    virtual long BeginDraw(tagRECT, IDXGISurface * *, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDrawWithD2D@SurfaceImageSource@DirectUI@@UEAAJUtagRECT@@AEBU_GUID@@PEAPEAUIUnknown@@PEAUtagPOINT@@@Z
    virtual long BeginDrawWithD2D(tagRECT, _GUID const &, IUnknown * *, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDraw@SurfaceImageSource@DirectUI@@UEAAJXZ
    virtual long EndDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDrawWithD2D@SurfaceImageSource@DirectUI@@UEAAJXZ
    virtual long EndDrawWithD2D();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeDraw@SurfaceImageSource@DirectUI@@UEAAJXZ
    virtual long ResumeDraw();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDevice@SurfaceImageSource@DirectUI@@UEAAJPEAUIDXGIDevice@@@Z
    virtual long SetDevice(IDXGIDevice *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDeviceWithD2D@SurfaceImageSource@DirectUI@@UEAAJPEAUIUnknown@@@Z
    virtual long SetDeviceWithD2D(IUnknown *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SurfaceImageSource@DirectUI@@QEAA@XZ
    SurfaceImageSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendDraw@SurfaceImageSource@DirectUI@@UEAAJXZ
    virtual long SuspendDraw();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SurfaceImageSource@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SurfaceImageSource@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SurfaceImageSource@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

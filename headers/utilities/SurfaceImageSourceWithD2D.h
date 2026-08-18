#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI::SurfaceImageSource {
class SurfaceImageSourceWithD2D {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SurfaceImageSourceWithD2D@SurfaceImageSource@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDraw@SurfaceImageSourceWithD2D@SurfaceImageSource@DirectUI@@UEAAJAEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@@Z
    virtual long BeginDraw(tagRECT const &, _GUID const &, void * *, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDraw@SurfaceImageSourceWithD2D@SurfaceImageSource@DirectUI@@UEAAJXZ
    virtual long EndDraw();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SurfaceImageSourceWithD2D@SurfaceImageSource@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SurfaceImageSourceWithD2D@SurfaceImageSource@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeDraw@SurfaceImageSourceWithD2D@SurfaceImageSource@DirectUI@@UEAAJXZ
    virtual long ResumeDraw();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDevice@SurfaceImageSourceWithD2D@SurfaceImageSource@DirectUI@@UEAAJPEAUIUnknown@@@Z
    virtual long SetDevice(IUnknown *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SurfaceImageSourceWithD2D@SurfaceImageSource@DirectUI@@QEAA@PEAV12@@Z
    SurfaceImageSourceWithD2D(::DirectUI::SurfaceImageSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendDraw@SurfaceImageSourceWithD2D@SurfaceImageSource@DirectUI@@UEAAJXZ
    virtual long SuspendDraw();
};
} // namespace DirectUI::SurfaceImageSource

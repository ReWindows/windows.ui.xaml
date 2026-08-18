#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class HWTextureManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@HWTextureManager@@SAJPEAVCWindowRenderTarget@@AEAVMaxTextureSizeProvider@@AEAVAtlasRequestProvider@@PEAPEAV1@@Z
    static long Create(CWindowRenderTarget *, MaxTextureSizeProvider &, AtlasRequestProvider &, HWTextureManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTexture@HWTextureManager@@QEAAJW4PixelFormat@@IIW4HWTextureFlags@@PEAPEAVHWTexture@@PEAVDCompSurfaceFactory@@@Z
    long CreateTexture(int, unsigned int, unsigned int, int, HWTexture * *, DCompSurfaceFactory *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTextureWithNoHardware@HWTextureManager@@QEAA?AV?$xref_ptr@VHWTexture@@@@_N@Z
    WindissectOpaque CreateTextureWithNoHardware(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureLegacyDeviceSurface@HWTextureManager@@QEAAJPEAVHWTexture@@II@Z
    long EnsureLegacyDeviceSurface(HWTexture *, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHitTestTexture@HWTextureManager@@QEAAJPEAPEAVHWTexture@@@Z
    long GetHitTestTexture(HWTexture * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitTextureUpdates@HWTextureManager@@QEAAJXZ
    long SubmitTextureUpdates();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HWTextureManager@@AEAA@PEAVCWindowRenderTarget@@AEAVMaxTextureSizeProvider@@AEAVAtlasRequestProvider@@@Z
    HWTextureManager(CWindowRenderTarget *, MaxTextureSizeProvider &, AtlasRequestProvider &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HWTextureManager@@EEAA@XZ
    virtual ~HWTextureManager();
};

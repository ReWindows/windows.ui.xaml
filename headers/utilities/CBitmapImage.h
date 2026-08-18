#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class CBitmapImage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CBitmapImage@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAndUpdateHardwareResources@CBitmapImage@@UEAAJPEAVHWTextureManager@@PEAVCWindowRenderTarget@@PEAVSurfaceCache@@@Z
    virtual long EnsureAndUpdateHardwareResources(HWTextureManager *, CWindowRenderTarget *, SurfaceCache *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CBitmapImage@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutoPlay@CBitmapImage@@MEAAJAEA_N@Z
    virtual long GetAutoPlay(bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDownloadImageAvailableImpl@CBitmapImage@@MEAAJPEAUIImageAvailableResponse@@@Z
    virtual long OnDownloadImageAvailableImpl(IImageAvailableResponse *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareDecode@CBitmapImage@@MEAAJ_N@Z
    virtual long PrepareDecode(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldKeepSoftwareSurfaces@CBitmapImage@@MEAA_NXZ
    virtual bool ShouldKeepSoftwareSurfaces();
};

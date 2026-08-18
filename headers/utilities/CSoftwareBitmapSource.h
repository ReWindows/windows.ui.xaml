#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class CSoftwareBitmapSource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSoftwareBitmapSource@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAndUpdateHardwareResources@CSoftwareBitmapSource@@UEAAJPEAVHWTextureManager@@PEAVCWindowRenderTarget@@PEAVSurfaceCache@@@Z
    virtual long EnsureAndUpdateHardwareResources(HWTextureManager *, CWindowRenderTarget *, SurfaceCache *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CSoftwareBitmapSource@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReloadReleasedSoftwareImage@CSoftwareBitmapSource@@UEAAJXZ
    virtual long ReloadReleasedSoftwareImage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReloadSource@CSoftwareBitmapSource@@QEAAJ_N@Z
    long ReloadSource(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSoftwareBitmapSource@@UEAA@XZ
    virtual ~CSoftwareBitmapSource();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSoftwareBitmap@CSoftwareBitmapSource@@AEAAJXZ
    long CloseSoftwareBitmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSoftwareBitmapImageAvailable@CSoftwareBitmapSource@@AEAAJPEAUIImageAvailableResponse@@@Z
    long OnSoftwareBitmapImageAvailable(IImageAvailableResponse *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareCopyParams@CSoftwareBitmapSource@@AEAAJ_NAEAV?$xref_ptr@VImageCopyParams@@@@@Z
    long PrepareCopyParams(bool, WindissectOpaque &);
};

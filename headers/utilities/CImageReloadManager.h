#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
class CImageReloadManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddImage@CImageReloadManager@@QEAAJPEAVCImageSource@@@Z
    long AddImage(CImageSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReloadImages@CImageReloadManager@@QEAAJW4ResourceInvalidationReason@@@Z
    long ReloadImages(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveImage@CImageReloadManager@@QEAAJPEAVCImageSource@@@Z
    long RemoveImage(CImageSource *);
};

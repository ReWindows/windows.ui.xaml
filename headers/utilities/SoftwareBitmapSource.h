#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class SoftwareBitmapSource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@SoftwareBitmapSource@DirectUI@@UEAAJXZ
    virtual long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBitmapAsyncImpl@SoftwareBitmapSource@DirectUI@@UEAAJPEAUISoftwareBitmap@Imaging@Graphics@Windows@@PEAPEAUIAsyncAction@Foundation@6@@Z
    virtual long SetBitmapAsyncImpl(::Windows::Graphics::Imaging::ISoftwareBitmap *, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SoftwareBitmapSource@DirectUI@@UEAA@XZ
    virtual ~SoftwareBitmapSource();
};
} // namespace DirectUI

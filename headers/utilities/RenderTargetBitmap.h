#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
namespace DirectUI {
class RenderTargetBitmap {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelsAsyncImpl@RenderTargetBitmap@DirectUI@@QEAAJPEAPEAU?$IAsyncOperation@PEAUIBuffer@Streams@Storage@Windows@@@Foundation@Windows@@@Z
    long GetPixelsAsyncImpl(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderToSizeAsyncImpl@RenderTargetBitmap@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@HHPEAPEAUIAsyncAction@Foundation@6@@Z
    long RenderToSizeAsyncImpl(::Windows::UI::Xaml::IUIElement *, int, int, WindissectOpaque * *);
};
} // namespace DirectUI

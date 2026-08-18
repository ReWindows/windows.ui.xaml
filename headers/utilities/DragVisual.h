#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class DragVisual {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSoftwareBitmap@DragVisual@DirectUI@@QEAAJPEAPEAUISoftwareBitmap@Imaging@Graphics@Windows@@@Z
    long GetSoftwareBitmap(::Windows::Graphics::Imaging::ISoftwareBitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DragVisual@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderAsync@DragVisual@DirectUI@@QEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    long RenderAsync(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DragVisual@DirectUI@@UEAA@XZ
    virtual ~DragVisual();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSoftwareBitmap@DragVisual@DirectUI@@AEAAJXZ
    long CreateSoftwareBitmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImageFailed@DragVisual@DirectUI@@AEAAJXZ
    long OnImageFailed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImageOpened@DragVisual@DirectUI@@AEAAJXZ
    long OnImageOpened();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRenderCompleted@DragVisual@DirectUI@@AEAAJXZ
    long OnRenderCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrieveImageSize@DragVisual@DirectUI@@AEAAJXZ
    long RetrieveImageSize();
};
} // namespace DirectUI

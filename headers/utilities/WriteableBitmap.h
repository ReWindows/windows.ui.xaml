#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class WriteableBitmap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateImpl@WriteableBitmap@DirectUI@@QEAAJXZ
    long InvalidateImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshPixelBuffer@WriteableBitmap@DirectUI@@QEAAJXZ
    long RefreshPixelBuffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PixelBufferImpl@WriteableBitmap@DirectUI@@QEAAJPEAPEAUIBuffer@Streams@Storage@Windows@@@Z
    long get_PixelBufferImpl(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WriteableBitmap@DirectUI@@UEAA@XZ
    virtual ~WriteableBitmap();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStreamReadCompleted@WriteableBitmap@DirectUI@@MEAAJPEAU?$IAsyncOperationWithProgress@PEAUIBuffer@Streams@Storage@Windows@@I@Foundation@Windows@@W4AsyncStatus@45ABI@@@Z
    virtual long OnStreamReadCompleted(WindissectOpaque *, int);
};
} // namespace DirectUI

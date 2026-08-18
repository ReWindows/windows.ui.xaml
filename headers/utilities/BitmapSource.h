#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class BitmapSource {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BitmapSource@DirectUI@@QEAA@XZ
    BitmapSource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceAsync@BitmapSource@DirectUI@@SAJPEAVCBitmapSource@@PEAUIRandomAccessStream@Streams@Storage@Windows@@PEAPEAUIAsyncAction@Foundation@7@@Z
    static long SetSourceAsync(CBitmapSource *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceAsyncImpl@BitmapSource@DirectUI@@QEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEAPEAUIAsyncAction@Foundation@6@@Z
    long SetSourceAsyncImpl(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceImpl@BitmapSource@DirectUI@@QEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@@Z
    long SetSourceImpl(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceShared@BitmapSource@DirectUI@@QEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@@Z
    long SetSourceShared(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BitmapSource@DirectUI@@UEAA@XZ
    virtual ~BitmapSource();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStreamReadCompleted@BitmapSource@DirectUI@@MEAAJPEAU?$IAsyncOperationWithProgress@PEAUIBuffer@Streams@Storage@Windows@@I@Foundation@Windows@@W4AsyncStatus@45ABI@@@Z
    virtual long OnStreamReadCompleted(WindissectOpaque *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelSetSourceAsyncActions@BitmapSource@DirectUI@@AEAAXXZ
    void CancelSetSourceAsyncActions();
};
} // namespace DirectUI

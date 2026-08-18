#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class SvgImageSource {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceAsyncImpl@SvgImageSource@DirectUI@@QEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEAPEAU?$IAsyncOperation@W4SvgImageSourceLoadStatus@Imaging@Media@Xaml@UI@Windows@@@Foundation@6@@Z
    long SetSourceAsyncImpl(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceShared@SvgImageSource@DirectUI@@QEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@@Z
    long SetSourceShared(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SvgImageSource@DirectUI@@UEAA@XZ
    virtual ~SvgImageSource();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStreamReadCompleted@SvgImageSource@DirectUI@@IEAAJPEAU?$IAsyncOperationWithProgress@PEAUIBuffer@Streams@Storage@Windows@@I@Foundation@Windows@@W4AsyncStatus@45ABI@@@Z
    long OnStreamReadCompleted(WindissectOpaque *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelSetSourceAsyncActions@SvgImageSource@DirectUI@@AEAAXXZ
    void CancelSetSourceAsyncActions();
};
} // namespace DirectUI

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class HWCompWebViewNode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@HWCompWebViewNode@@SAJPEAVCCoreServices@@PEAVCompositorTreeHost@@IPEAPEAV1@@Z
    static long Create(CCoreServices *, CompositorTreeHost *, unsigned int, HWCompWebViewNode * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@HWCompWebViewNode@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWebViewVisual@HWCompWebViewNode@@QEAAJPEAVDCompTreeHost@@PEAVCWebView@@@Z
    long SetWebViewVisual(DCompTreeHost *, CWebView *);
};

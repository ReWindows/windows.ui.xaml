#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class HWCompSwapChainNode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@HWCompSwapChainNode@@SAJPEAVCCoreServices@@PEAVCompositorTreeHost@@IPEAPEAV1@@Z
    static long Create(CCoreServices *, CompositorTreeHost *, unsigned int, HWCompSwapChainNode * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@HWCompSwapChainNode@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSwapChain@HWCompSwapChainNode@@QEAAJPEAVDCompTreeHost@@PEAVCSwapChainElement@@PEAUIUnknown@@2MMI2@Z
    long SetSwapChain(DCompTreeHost *, CSwapChainElement *, IUnknown *, IUnknown *, float, float, unsigned int, IUnknown *);
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class HWCompMediaNode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@HWCompMediaNode@@SAJPEAVCCoreServices@@PEAVCompositorTreeHost@@IPEAPEAV1@@Z
    static long Create(CCoreServices *, CompositorTreeHost *, unsigned int, HWCompMediaNode * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@HWCompMediaNode@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMedia@HWCompMediaNode@@QEAAJPEAVDCompTreeHost@@PEAXAEBUXRECT_WH@@AEBUXMATRIX@@AEBUXRECTF_WH@@I@Z
    long SetMedia(DCompTreeHost *, void *, XRECT_WH const &, XMATRIX const &, XRECTF_WH const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTreeVirtual@HWCompMediaNode@@UEAAJPEAVDCompTreeHost@@PEAI_N2@Z
    virtual long UpdateTreeVirtual(DCompTreeHost *, unsigned int *, bool, bool);
};

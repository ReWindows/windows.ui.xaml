#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class AcceleratedBrushParams {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushBrushClip@AcceleratedBrushParams@@QEAAJIPEBVCMILMatrix@@PEAUIPALAcceleratedRenderTarget@@PEBUXRECTF_RB@@PEAI3@Z
    long PushBrushClip(unsigned int, CMILMatrix const *, IPALAcceleratedRenderTarget *, XRECTF_RB const *, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@AcceleratedBrushParams@@QEAAXXZ
    void Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBrushTransformAndClip@AcceleratedBrushParams@@QEAAJPEAUIPALAcceleratedGraphicsFactory@@PEAVCMILMatrix@@PEAUXRECTF_WH@@@Z
    long SetBrushTransformAndClip(IPALAcceleratedGraphicsFactory *, CMILMatrix *, XRECTF_WH *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetBrushClip@AcceleratedBrushParams@@AEAAXXZ
    void ResetBrushClip();
};

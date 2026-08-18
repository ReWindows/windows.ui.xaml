#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class HWCompInkCanvasNode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@HWCompInkCanvasNode@@SAJPEAVCCoreServices@@PEAVCompositorTreeHost@@_NPEAPEAV1@@Z
    static long Create(CCoreServices *, CompositorTreeHost *, bool, HWCompInkCanvasNode * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@HWCompInkCanvasNode@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInkPresenter@HWCompInkCanvasNode@@QEAAJPEAVDCompTreeHost@@PEAVCInkCanvas@@MM@Z
    long SetInkPresenter(DCompTreeHost *, CInkCanvas *, float, float);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInkPresenterRootVisual@HWCompInkCanvasNode@@IEAAJPEAUIUnknown@@@Z
    long SetInkPresenterRootVisual(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInkPresenterSize@HWCompInkCanvasNode@@IEAAJMM@Z
    long SetInkPresenterSize(float, float);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HWCompInkCanvasNode@@MEAA@XZ
    virtual ~HWCompInkCanvasNode();
};

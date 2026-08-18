#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
class CompositorScheduler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CompositorScheduler@@SAJPEAVWindowsGraphicsDeviceManager@@PEAPEAV1@@Z
    static long Create(WindowsGraphicsDeviceManager *, CompositorScheduler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRenderStateChanged@CompositorScheduler@@QEAAJI@Z
    long OnRenderStateChanged(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterUIThreadScheduler@CompositorScheduler@@QEAAXPEAVUIThreadScheduler@@PEAPEAUIPALTickableClock@@@Z
    void RegisterUIThreadScheduler(UIThreadScheduler *, IPALTickableClock * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CompositorScheduler@@QEAAJXZ
    long Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Startup@CompositorScheduler@@QEAAJXZ
    long Startup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WakeCompositionThread@CompositorScheduler@@QEAAJXZ
    long WakeCompositionThread();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositorScheduler@@AEAA@PEAVWindowsGraphicsDeviceManager@@@Z
    CompositorScheduler(WindowsGraphicsDeviceManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderThreadFrame@CompositorScheduler@@AEAAXXZ
    void RenderThreadFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderThreadMain@CompositorScheduler@@AEAAHXZ
    int RenderThreadMain();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderThreadMainStatic@CompositorScheduler@@CAHPEAE@Z
    static int RenderThreadMainStatic(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositorScheduler@@EEAA@XZ
    virtual ~CompositorScheduler();
};

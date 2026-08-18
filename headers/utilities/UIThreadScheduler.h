#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class UIThreadScheduler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginTick@UIThreadScheduler@@UEAAJXZ
    virtual long BeginTick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndTick@UIThreadScheduler@@UEAAJXZ
    virtual long EndTick();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClock@UIThreadScheduler@@UEAAPEAUIPALTickableClock@@XZ
    virtual IPALTickableClock * GetClock();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHighPriority@UIThreadScheduler@@UEAAIXZ
    virtual unsigned int IsHighPriority();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInTick@UIThreadScheduler@@UEAAIXZ
    virtual unsigned int IsInTick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueTick@UIThreadScheduler@@QEAAJXZ
    long QueueTick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestAdditionalFrame@UIThreadScheduler@@UEAAJIW4RequestFrameReason@@@Z
    virtual long RequestAdditionalFrame(unsigned int, int);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIThreadScheduler@@AEAA@PEAUIXcpDispatcher@@PEAVCompositorScheduler@@@Z
    UIThreadScheduler(IXcpDispatcher *, CompositorScheduler *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UIThreadScheduler@@EEAA@XZ
    virtual ~UIThreadScheduler();
};

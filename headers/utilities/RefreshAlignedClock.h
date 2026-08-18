#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class RefreshAlignedClock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@RefreshAlignedClock@@SAJPEAPEAV1@@Z
    static long Create(RefreshAlignedClock * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastTickTimeInSeconds@RefreshAlignedClock@@UEBANXZ
    virtual double GetLastTickTimeInSeconds() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextTickTimeInSeconds@RefreshAlignedClock@@UEBANXZ
    virtual double GetNextTickTimeInSeconds() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRefreshRateInfo@RefreshAlignedClock@@QEAAXPEAUIPALRefreshRateInfo@@@Z
    void SetRefreshRateInfo(IPALRefreshRateInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Tick@RefreshAlignedClock@@UEAANXZ
    virtual double Tick();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@RefreshAlignedClock@@AEAAJXZ
    long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RefreshAlignedClock@@EEAA@XZ
    virtual ~RefreshAlignedClock();
};

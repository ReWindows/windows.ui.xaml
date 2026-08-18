#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CWinClock {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWinClock@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAbsoluteTimeInSeconds@CWinClock@@UEAANXZ
    virtual double GetAbsoluteTimeInSeconds();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWinClock@@UEAAIXZ
    virtual unsigned int Release();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWinClock@@AEAA@XZ
    CWinClock();
};

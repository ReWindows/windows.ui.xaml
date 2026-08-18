#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CWinRenderCounters {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWinRenderCounters@@SAJPEAPEAVIXcpRenderCounters@@@Z
    static long Create(IXcpRenderCounters * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Increment@CWinRenderCounters@@UEAAJI@Z
    virtual long Increment(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWinRenderCounters@@UEAA@XZ
    virtual ~CWinRenderCounters();
};

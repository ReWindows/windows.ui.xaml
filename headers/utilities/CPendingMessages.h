#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
class CPendingMessages {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPendingMessages@@SAJPEAVCXcpDispatcher@@PEAPEAV1@@Z
    static long Create(CXcpDispatcher *, CPendingMessages * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseResource@CPendingMessages@@QEAAJI_K_J@Z
    long ReleaseResource(unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPendingMessages@@QEAA@XZ
    ~CPendingMessages();
};

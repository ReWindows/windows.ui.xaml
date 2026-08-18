#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class CDeferredInvoke {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDeferredInvoke@@QEAAJXZ
    long Create();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CDeferredInvoke@@QEAAXXZ
    void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchQueuedMessage@CDeferredInvoke@@QEAA_JPEA_N0@Z
    int64_t DispatchQueuedMessage(bool *, bool *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowProc@CDeferredInvoke@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t WindowProc(HWND__*, unsigned int, uint64_t, int64_t);
};

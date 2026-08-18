#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class WindowsPresentTarget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSynchronization@WindowsPresentTarget@@QEAAXXZ
    void ProcessSynchronization();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWorker@WindowsPresentTarget@@CAJPEAXII0PEAUIViewObjectPresentNotifySite@@PEAPEAV1@@Z
    static long CreateWorker(void *, unsigned int, unsigned int, void *, IViewObjectPresentNotifySite *, WindowsPresentTarget * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowsPresentTarget@@AEAA@PEAXII0PEAUIViewObjectPresentNotifySite@@@Z
    WindowsPresentTarget(void *, unsigned int, unsigned int, void *, IViewObjectPresentNotifySite *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowsPresentTarget@@EEAA@XZ
    virtual ~WindowsPresentTarget();
};

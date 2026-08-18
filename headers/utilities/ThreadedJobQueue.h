#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class ThreadedJobQueue {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ThreadedJobQueue@@QEAA@XZ
    ~ThreadedJobQueue();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureThreadActive@ThreadedJobQueue@@AEAAXXZ
    void EnsureThreadActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StaticThreadCallback@ThreadedJobQueue@@CAKPEAX@Z
    static unsigned long StaticThreadCallback(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThreadCallback@ThreadedJobQueue@@AEAAXXZ
    void ThreadCallback();
};

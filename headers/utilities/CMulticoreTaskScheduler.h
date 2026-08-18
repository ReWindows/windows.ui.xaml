#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CMulticoreTaskScheduler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CMulticoreTaskScheduler@@SAJPEAPEAV1@@Z
    static long Create(CMulticoreTaskScheduler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunAllTasks@CMulticoreTaskScheduler@@QEAAJXZ
    long RunAllTasks();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMulticoreTaskScheduler@@QEAA@XZ
    ~CMulticoreTaskScheduler();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CMulticoreTaskScheduler@@AEAAJXZ
    long Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WorkerThread@CMulticoreTaskScheduler@@CAHPEAE@Z
    static int WorkerThread(unsigned char *);
};

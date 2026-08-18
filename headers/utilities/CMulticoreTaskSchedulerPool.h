#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class CMulticoreTaskSchedulerPool {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskScheduler@CMulticoreTaskSchedulerPool@@SAJPEAPEAVCMulticoreTaskScheduler@@@Z
    static long GetTaskScheduler(CMulticoreTaskScheduler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockThreadPool@CMulticoreTaskSchedulerPool@@SAJXZ
    static long LockThreadPool();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseTaskScheduler@CMulticoreTaskSchedulerPool@@SAXPEAVCMulticoreTaskScheduler@@@Z
    static void ReleaseTaskScheduler(CMulticoreTaskScheduler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockThreadPool@CMulticoreTaskSchedulerPool@@SAJXZ
    static long UnlockThreadPool();
};

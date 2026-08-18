#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CMediaQueueManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CMediaQueueManager@@SAJPEAPEAV1@@Z
    static long Create(CMediaQueueManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMediaQueue@CMediaQueueManager@@QEAAJPEAUIMediaQueueClient@@PEAVCCoreServices@@PEAPEAVCMediaQueue@@@Z
    long CreateMediaQueue(IMediaQueueClient *, CCoreServices *, CMediaQueue * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessQueues@CMediaQueueManager@@QEAAJI@Z
    long ProcessQueues(unsigned int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMediaQueue@CMediaQueueManager@@IEAAJPEAVCMediaQueue@@@Z
    long AddMediaQueue(CMediaQueue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CMediaQueueManager@@IEAAJXZ
    long Shutdown();
};

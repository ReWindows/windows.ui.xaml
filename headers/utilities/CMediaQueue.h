#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CMediaQueue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMediaEvent@CMediaQueue@@UEAAJPEAUIObject@@PEAUIMediaQueueTest@@@Z
    virtual long AddMediaEvent(IObject *, IMediaQueueTest *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CMediaQueue@@SAJPEAVCMediaQueueManager@@PEAUIMediaQueueClient@@PEAVCCoreServices@@PEAPEAV1@@Z
    static long Create(CMediaQueueManager *, IMediaQueueClient *, CCoreServices *, CMediaQueue * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessQueue@CMediaQueue@@UEAAJXZ
    virtual long ProcessQueue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CMediaQueue@@UEAAJXZ
    virtual long Shutdown();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMediaQueue@@UEAA@XZ
    virtual ~CMediaQueue();
};

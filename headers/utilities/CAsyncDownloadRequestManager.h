#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class CAsyncDownloadRequestManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AbortAsync@CAsyncDownloadRequestManager@@UEAAXPEAUIPALAbortableOperation@@@Z
    virtual void AbortAsync(IPALAbortableOperation *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAsyncDownloadRequestManager@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CAsyncDownloadRequestManager@@SAJPEAVIAsyncDownloadRequestManagerSite@@PEAPEAVIAsyncDownloadRequestManager@@@Z
    static long Create(IAsyncDownloadRequestManagerSite *, IAsyncDownloadRequestManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DownloadRequests@CAsyncDownloadRequestManager@@UEAAJXZ
    virtual long DownloadRequests();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@CAsyncDownloadRequestManager@@UEAAIXZ
    virtual unsigned int IsEnabled();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAsyncDownloadRequestManager@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAbortableAsyncDownload@CAsyncDownloadRequestManager@@UEAAJPEAVCAbortableAsyncDownload@@@Z
    virtual long RemoveAbortableAsyncDownload(CAbortableAsyncDownload *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveRequest@CAsyncDownloadRequestManager@@UEAAJPEAVCDownloadRequest@@@Z
    virtual long RemoveRequest(CDownloadRequest *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsEnabled@CAsyncDownloadRequestManager@@UEAAXI@Z
    virtual void SetIsEnabled(unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CAsyncDownloadRequestManager@@AEAAJPEAVIAsyncDownloadRequestManagerSite@@@Z
    long Init(IAsyncDownloadRequestManagerSite *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAsyncDownloadRequestManager@@AEAA@XZ
    ~CAsyncDownloadRequestManager();
};

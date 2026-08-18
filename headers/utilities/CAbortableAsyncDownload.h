#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CAbortableAsyncDownload {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Abort@CAbortableAsyncDownload@@UEAAXXZ
    virtual void Abort();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAbortableAsyncDownload@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CAbortableAsyncDownload@@SAJPEAVCDownloadRequest@@PEAVIAsyncDownloadRequestManager@@PEAPEAV1@@Z
    static long Create(CDownloadRequest *, IAsyncDownloadRequestManager *, CAbortableAsyncDownload * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAbortableAsyncDownload@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAbortable@CAbortableAsyncDownload@@QEAAJPEAUIPALAbortableOperation@@@Z
    long SetAbortable(IPALAbortableOperation *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAbortableAsyncDownload@@EEAA@XZ
    virtual ~CAbortableAsyncDownload();
};

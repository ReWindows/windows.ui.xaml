#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class CWindowsAbortableDownload {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Abort@CWindowsAbortableDownload@@UEAAXXZ
    virtual void Abort();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AbortAsync@CWindowsAbortableDownload@@UEAAXPEAVIAsyncDownloadRequestManager@@@Z
    virtual void AbortAsync(IAsyncDownloadRequestManager *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWindowsAbortableDownload@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWindowsAbortableDownload@@SAJPEAVCWindowsDownloadRequest@@PEAPEAV1@@Z
    static long Create(CWindowsDownloadRequest *, CWindowsAbortableDownload * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWindowsAbortableDownload@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsAbortAsync@CWindowsAbortableDownload@@UEBA_NXZ
    virtual bool SupportsAbortAsync() const;
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWindowsAbortableDownload@@EEAA@XZ
    virtual ~CWindowsAbortableDownload();
};

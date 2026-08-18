#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class IPALAbortableOperation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AbortAsync@IPALAbortableOperation@@UEAAXPEAVIAsyncDownloadRequestManager@@@Z
    virtual void AbortAsync(IAsyncDownloadRequestManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disconnect@IPALAbortableOperation@@UEAAJXZ
    virtual long Disconnect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsAbortAsync@IPALAbortableOperation@@UEBA_NXZ
    virtual bool SupportsAbortAsync() const;
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CWindowsDownloadResponse {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWindowsDownloadResponse@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResource@CWindowsDownloadResponse@@UEAAJPEAPEAUIPALResource@@@Z
    virtual long GetResource(IPALResource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStream@CWindowsDownloadResponse@@UEAAJPEAPEAUIPALStream@@@Z
    virtual long GetStream(IPALStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CWindowsDownloadResponse@@UEAAJPEAPEAUIPALMemory@@@Z
    virtual long Lock(IPALMemory * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWindowsDownloadResponse@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@CWindowsDownloadResponse@@UEAAJXZ
    virtual long Unlock();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWindowsDownloadResponse@@QEAA@XZ
    ~CWindowsDownloadResponse();
};

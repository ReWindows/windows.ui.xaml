#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CNULLDownloadResponse {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNULLDownloadResponse@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNULLDownloadResponse@@QEAA@PEAUIPALResource@@PEAUIPALMemory@@@Z
    CNULLDownloadResponse(IPALResource *, IPALMemory *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResource@CNULLDownloadResponse@@UEAAJPEAPEAUIPALResource@@@Z
    virtual long GetResource(IPALResource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStream@CNULLDownloadResponse@@UEAAJPEAPEAUIPALStream@@@Z
    virtual long GetStream(IPALStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CNULLDownloadResponse@@UEAAJPEAPEAUIPALMemory@@@Z
    virtual long Lock(IPALMemory * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNULLDownloadResponse@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@CNULLDownloadResponse@@UEAAJXZ
    virtual long Unlock();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNULLDownloadResponse@@QEAA@XZ
    ~CNULLDownloadResponse();
};

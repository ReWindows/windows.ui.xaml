#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CAbortableDownloadWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Abort@CAbortableDownloadWrapper@@UEAAXXZ
    virtual void Abort();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAbortableDownloadWrapper@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAbortableDownloadWrapper@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAbortable@CAbortableDownloadWrapper@@QEAAJPEAUIPALAbortableOperation@@@Z
    long SetAbortable(IPALAbortableOperation *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAbortableDownloadWrapper@@EEAA@XZ
    virtual ~CAbortableDownloadWrapper();
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class EventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndShutdown@EventArgs@DirectUI@@UEAAJXZ
    virtual long EndShutdown();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EventArgs@DirectUI@@QEAA@XZ
    EventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCorePeer@EventArgs@DirectUI@@QEAAPEAVCEventArgs@@XZ
    CEventArgs * GetCorePeer();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EventArgs@DirectUI@@UEAA@XZ
    virtual ~EventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCorePeer@EventArgs@DirectUI@@MEAAPEAVCEventArgs@@XZ
    virtual CEventArgs * CreateCorePeer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCorePeerNoRefWithValidation@EventArgs@DirectUI@@IEAAJPEAPEAVCEventArgs@@@Z
    long GetCorePeerNoRefWithValidation(CEventArgs * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@EventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

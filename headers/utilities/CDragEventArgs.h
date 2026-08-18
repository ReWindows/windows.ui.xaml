#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CDragEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDragEventArgs@@SAJPEAVCCoreServices@@PEAPEAV1@PEAUIInspectable@@2@Z
    static long Create(CCoreServices *, CDragEventArgs * *, IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFrameworkPeer@CDragEventArgs@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long CreateFrameworkPeer(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsDeferred@CDragEventArgs@@QEAAJPEAVCCoreServices@@PEA_N@Z
    long GetIsDeferred(CCoreServices *, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDragEventArgs@@UEAA@XZ
    virtual ~CDragEventArgs();
};

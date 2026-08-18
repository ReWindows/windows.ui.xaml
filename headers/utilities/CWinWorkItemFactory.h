#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CWinWorkItemFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelAndCleanupAllWork@CWinWorkItemFactory@@UEAAJXZ
    virtual long CancelAndCleanupAllWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWorkItem@CWinWorkItemFactory@@UEAAJPEAPEAUIPALWorkItem@@P6AJPEAUIObject@@@Z1@Z
    virtual long CreateWorkItem(IPALWorkItem * *, long ( *)(IObject *), IObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CWinWorkItemFactory@@QEAAJXZ
    long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWinWorkItemFactory@@UEAA@XZ
    virtual ~CWinWorkItemFactory();
};

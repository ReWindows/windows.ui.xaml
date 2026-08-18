#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CNotifyOnDelete {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOnDeleteCallback@CNotifyOnDelete@@QEAAXPEAUINotifyOnDeleteCallback@@AEBVxstring_ptr@@@Z
    void AddOnDeleteCallback(INotifyOnDeleteCallback *, xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireOnDelete@CNotifyOnDelete@@QEAAXXZ
    void FireOnDelete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveOnDeleteCallback@CNotifyOnDelete@@QEAAXPEAUINotifyOnDeleteCallback@@@Z
    void RemoveOnDeleteCallback(INotifyOnDeleteCallback *);
};

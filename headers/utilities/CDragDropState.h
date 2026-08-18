#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CDragDropState {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheInitialState@CDragDropState@@QEAAJPEAUDragMsg@@UXPOINTF@@PEAVCDependencyObject@@2PEAUIInspectable@@3W4DataPackageOperation@DirectUI@@@Z
    long CacheInitialState(DragMsg *, XPOINTF, CDependencyObject *, CDependencyObject *, IInspectable *, IInspectable *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCache@CDragDropState@@QEAAJ_N@Z
    long ClearCache(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseDragEnterEvents@CDragDropState@@QEAAJXZ
    long RaiseDragEnterEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseDragLeaveEvents@CDragDropState@@QEAAJXZ
    long RaiseDragLeaveEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseDragOverOrDropEvents@CDragDropState@@QEAAJXZ
    long RaiseDragOverOrDropEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseEvents@CDragDropState@@QEAAJPEAW4DataPackageOperation@DirectUI@@@Z
    long RaiseEvents(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDragDropState@@QEAA@XZ
    ~CDragDropState();
};

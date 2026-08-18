#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace ContentRootInput {
class DragDropProcessor {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DragDropProcessor@ContentRootInput@@QEAA@AEAVCContentRoot@@@Z
    DragDropProcessor(CContentRoot &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDragDrop@DragDropProcessor@ContentRootInput@@QEAAJPEAUDragMsg@@_N1PEA_N@Z
    long ProcessDragDrop(DragMsg *, bool, bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessWinRtDragDrop@DragDropProcessor@ContentRootInput@@QEAAJPEAUDragMsg@@PEAUIInspectable@@1PEAW4DataPackageOperation@DirectUI@@PEAVCDependencyObject@@@Z
    long ProcessWinRtDragDrop(DragMsg *, IInspectable *, IInspectable *, int *, CDependencyObject *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DragDropProcessor@ContentRootInput@@QEAA@XZ
    ~DragDropProcessor();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDragEnterLeave@DragDropProcessor@ContentRootInput@@AEAAJPEAVCDependencyObject@@PEAVCEventArgs@@HUXPOINTF@@I@Z
    long ProcessDragEnterLeave(CDependencyObject *, CEventArgs *, int, XPOINTF, unsigned int);
};
} // namespace ContentRootInput

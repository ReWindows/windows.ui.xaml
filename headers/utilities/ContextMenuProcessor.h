#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace ContentRootInput {
class ContextMenuProcessor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessContextRequestOnHoldingGesture@ContextMenuProcessor@ContentRootInput@@QEAAJPEAVCDependencyObject@@@Z
    long ProcessContextRequestOnHoldingGesture(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessContextRequestOnKeyboardInput@ContextMenuProcessor@ContentRootInput@@QEAAJPEAVCDependencyObject@@W4VirtualKey@System@Windows@@I@Z
    long ProcessContextRequestOnKeyboardInput(CDependencyObject *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseContextRequestedEvent@ContextMenuProcessor@ContentRootInput@@QEAAJPEAVCDependencyObject@@UPoint@Foundation@Windows@@_N@Z
    long RaiseContextRequestedEvent(CDependencyObject *, WindissectOpaque, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextRequestOnHoldingTimeout@ContextMenuProcessor@ContentRootInput@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnContextRequestOnHoldingTimeout(CDependencyObject *, CEventArgs *);
};
} // namespace ContentRootInput

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CInputManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInputManager@@QEAA@AEAVCCoreServices@@AEAVCContentRoot@@@Z
    CInputManager(CCoreServices &, CContentRoot &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseContextRequestedEvent@CInputManager@@QEAAJPEAVCDependencyObject@@UPoint@Foundation@Windows@@_N@Z
    long RaiseContextRequestedEvent(CDependencyObject *, WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterInputPaneHandler@CInputManager@@QEAAJPEAX@Z
    long RegisterInputPaneHandler(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPrimaryPointerLastPosition@CInputManager@@QEAAJPEAUXPOINTF@@PEA_N@Z
    long TryGetPrimaryPointerLastPosition(XPOINTF *, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInputManager@@QEAA@XZ
    ~CInputManager();
};

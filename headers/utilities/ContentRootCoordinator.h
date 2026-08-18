#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
class ContentRootCoordinator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateContentRoot@ContentRootCoordinator@@QEAA?AV?$xref_ptr@VCContentRoot@@@@W4Type@CContentRoot@@IPEAVCUIElement@@@Z
    WindissectOpaque CreateContentRoot(int, unsigned int, CUIElement *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveContentRoot@ContentRootCoordinator@@AEAAXPEAVCContentRoot@@@Z
    void RemoveContentRoot(CContentRoot *);
};

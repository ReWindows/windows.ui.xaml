#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class ListViewBaseItemAnimationCommand_MultiSelect {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Accept@ListViewBaseItemAnimationCommand_MultiSelect@@UEAAJPEAVListViewBaseItemAnimationCommandVisitor@@@Z
    virtual long Accept(ListViewBaseItemAnimationCommandVisitor *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPriority@ListViewBaseItemAnimationCommand_MultiSelect@@UEBAHXZ
    virtual int GetPriority() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ListViewBaseItemAnimationCommand_MultiSelect@@QEAA@_N0NNW4ListViewItemPresenterCheckMode@DirectUI@@V?$weakref_ptr@VCUIElement@@@xref@@200@Z
    ListViewBaseItemAnimationCommand_MultiSelect(bool, bool, double, double, int, WindissectOpaque, WindissectOpaque, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ListViewBaseItemAnimationCommand_MultiSelect@@UEAA@XZ
    virtual ~ListViewBaseItemAnimationCommand_MultiSelect();
};

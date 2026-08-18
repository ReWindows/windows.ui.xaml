#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class ListViewBaseItemAnimationCommand_SelectionIndicatorVisibility {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Accept@ListViewBaseItemAnimationCommand_SelectionIndicatorVisibility@@UEAAJPEAVListViewBaseItemAnimationCommandVisitor@@@Z
    virtual long Accept(ListViewBaseItemAnimationCommandVisitor *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPriority@ListViewBaseItemAnimationCommand_SelectionIndicatorVisibility@@UEBAHXZ
    virtual int GetPriority() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ListViewBaseItemAnimationCommand_SelectionIndicatorVisibility@@QEAA@_NNV?$weakref_ptr@VCUIElement@@@xref@@00@Z
    ListViewBaseItemAnimationCommand_SelectionIndicatorVisibility(bool, double, WindissectOpaque, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ListViewBaseItemAnimationCommand_SelectionIndicatorVisibility@@UEAA@XZ
    virtual ~ListViewBaseItemAnimationCommand_SelectionIndicatorVisibility();
};

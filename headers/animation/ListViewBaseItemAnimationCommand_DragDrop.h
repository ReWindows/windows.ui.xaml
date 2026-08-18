#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class ListViewBaseItemAnimationCommand_DragDrop {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Accept@ListViewBaseItemAnimationCommand_DragDrop@@UEAAJPEAVListViewBaseItemAnimationCommandVisitor@@@Z
    virtual long Accept(ListViewBaseItemAnimationCommandVisitor *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPriority@ListViewBaseItemAnimationCommand_DragDrop@@UEBAHXZ
    virtual int GetPriority() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ListViewBaseItemAnimationCommand_DragDrop@@QEAA@W4DragDropState@0@V?$weakref_ptr@VCListViewBaseItemChrome@@@xref@@V?$weakref_ptr@VCFrameworkElement@@@3@II@Z
    ListViewBaseItemAnimationCommand_DragDrop(int, WindissectOpaque, WindissectOpaque, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ListViewBaseItemAnimationCommand_DragDrop@@UEAA@XZ
    virtual ~ListViewBaseItemAnimationCommand_DragDrop();
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class ListViewBaseItemAnimationCommand_ReorderHint {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Accept@ListViewBaseItemAnimationCommand_ReorderHint@@UEAAJPEAVListViewBaseItemAnimationCommandVisitor@@@Z
    virtual long Accept(ListViewBaseItemAnimationCommandVisitor *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPriority@ListViewBaseItemAnimationCommand_ReorderHint@@UEBAHXZ
    virtual int GetPriority() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ListViewBaseItemAnimationCommand_ReorderHint@@QEAA@MMV?$weakref_ptr@VCListViewBaseItemChrome@@@xref@@II@Z
    ListViewBaseItemAnimationCommand_ReorderHint(float, float, WindissectOpaque, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ListViewBaseItemAnimationCommand_ReorderHint@@UEAA@XZ
    virtual ~ListViewBaseItemAnimationCommand_ReorderHint();
};

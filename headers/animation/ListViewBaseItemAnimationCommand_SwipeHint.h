#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class ListViewBaseItemAnimationCommand_SwipeHint {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Accept@ListViewBaseItemAnimationCommand_SwipeHint@@UEAAJPEAVListViewBaseItemAnimationCommandVisitor@@@Z
    virtual long Accept(ListViewBaseItemAnimationCommandVisitor *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPriority@ListViewBaseItemAnimationCommand_SwipeHint@@UEBAHXZ
    virtual int GetPriority() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ListViewBaseItemAnimationCommand_SwipeHint@@QEAA@MMV?$weakref_ptr@VCListViewBaseItemChrome@@@xref@@II@Z
    ListViewBaseItemAnimationCommand_SwipeHint(float, float, WindissectOpaque, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ListViewBaseItemAnimationCommand_SwipeHint@@UEAA@XZ
    virtual ~ListViewBaseItemAnimationCommand_SwipeHint();
};

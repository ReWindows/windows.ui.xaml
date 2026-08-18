#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class ListViewBaseItemAnimationCommand_IndicatorSelect {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Accept@ListViewBaseItemAnimationCommand_IndicatorSelect@@UEAAJPEAVListViewBaseItemAnimationCommandVisitor@@@Z
    virtual long Accept(ListViewBaseItemAnimationCommandVisitor *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPriority@ListViewBaseItemAnimationCommand_IndicatorSelect@@UEBAHXZ
    virtual int GetPriority() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ListViewBaseItemAnimationCommand_IndicatorSelect@@QEAA@_NNW4ListViewItemPresenterSelectionIndicatorMode@DirectUI@@V?$weakref_ptr@VCUIElement@@@xref@@200@Z
    ListViewBaseItemAnimationCommand_IndicatorSelect(bool, double, int, WindissectOpaque, WindissectOpaque, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ListViewBaseItemAnimationCommand_IndicatorSelect@@UEAA@XZ
    virtual ~ListViewBaseItemAnimationCommand_IndicatorSelect();
};

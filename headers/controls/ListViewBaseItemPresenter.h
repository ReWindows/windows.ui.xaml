#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
namespace DirectUI {
class ListViewBaseItemPresenter {
public:
    class AnimationState;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ListViewBaseItemPresenter@DirectUI@@QEAA@XZ
    ListViewBaseItemPresenter();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ListViewBaseItemPresenter@DirectUI@@UEAA@XZ
    virtual ~ListViewBaseItemPresenter();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAnimationCommands@ListViewBaseItemPresenter@DirectUI@@IEAAJXZ
    long ProcessAnimationCommands();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAnimation@ListViewBaseItemPresenter@DirectUI@@AEAAJPEAUAnimationState@12@@Z
    long ClearAnimation(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueFromThemeResources@ListViewBaseItemPresenter@DirectUI@@AEAAJAEBVStringReference@Internal@Windows@@PEAN@Z
    long GetValueFromThemeResources(::Windows::Internal::StringReference const &, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIndicatorSelectCompleted@ListViewBaseItemPresenter@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnIndicatorSelectCompleted(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMultiSelectCompleted@ListViewBaseItemPresenter@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnMultiSelectCompleted(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReorderHintReturnCompleted@ListViewBaseItemPresenter@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnReorderHintReturnCompleted(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionIndicatorCompleted@ListViewBaseItemPresenter@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnSelectionIndicatorCompleted(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSwipeHintCompleted@ListViewBaseItemPresenter@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnSwipeHintCompleted(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisitAnimationCommand@ListViewBaseItemPresenter@DirectUI@@EEAAJPEAVListViewBaseItemAnimationCommand_SelectionIndicatorVisibility@@@Z
    virtual long VisitAnimationCommand(ListViewBaseItemAnimationCommand_SelectionIndicatorVisibility *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisitAnimationCommand@ListViewBaseItemPresenter@DirectUI@@EEAAJPEAVListViewBaseItemAnimationCommand_IndicatorSelect@@@Z
    virtual long VisitAnimationCommand(ListViewBaseItemAnimationCommand_IndicatorSelect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisitAnimationCommand@ListViewBaseItemPresenter@DirectUI@@EEAAJPEAVListViewBaseItemAnimationCommand_MultiSelect@@@Z
    virtual long VisitAnimationCommand(ListViewBaseItemAnimationCommand_MultiSelect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisitAnimationCommand@ListViewBaseItemPresenter@DirectUI@@EEAAJPEAVListViewBaseItemAnimationCommand_DragDrop@@@Z
    virtual long VisitAnimationCommand(ListViewBaseItemAnimationCommand_DragDrop *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisitAnimationCommand@ListViewBaseItemPresenter@DirectUI@@EEAAJPEAVListViewBaseItemAnimationCommand_Pressed@@@Z
    virtual long VisitAnimationCommand(ListViewBaseItemAnimationCommand_Pressed *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisitAnimationCommand@ListViewBaseItemPresenter@DirectUI@@EEAAJPEAVListViewBaseItemAnimationCommand_ReorderHint@@@Z
    virtual long VisitAnimationCommand(ListViewBaseItemAnimationCommand_ReorderHint *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisitAnimationCommand@ListViewBaseItemPresenter@DirectUI@@EEAAJPEAVListViewBaseItemAnimationCommand_SwipeHint@@@Z
    virtual long VisitAnimationCommand(ListViewBaseItemAnimationCommand_SwipeHint *);
};
} // namespace DirectUI

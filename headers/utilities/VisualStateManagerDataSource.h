#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
class VisualStateManagerDataSource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddActiveStoryboard@VisualStateManagerDataSource@@QEAAXHV?$xref_ptr@VCStoryboard@@@@W4StoryboardType@VisualStateGroupContext@@@Z
    void AddActiveStoryboard(int, WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginTransitionToState@VisualStateManagerDataSource@@QEAAJHH@Z
    long BeginTransitionToState(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteTransitionToState@VisualStateManagerDataSource@@QEAAJH@Z
    long CompleteTransitionToState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualStateCount@VisualStateManagerDataSource@@QEAAHXZ
    int GetVisualStateCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParentDeferredStateTrigger@VisualStateManagerDataSource@@QEAAJV?$xref_ptr@VCStateTriggerBase@@@@@Z
    long ParentDeferredStateTrigger(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveActiveStoryboard@VisualStateManagerDataSource@@QEAAXHPEAVCStoryboard@@@Z
    void RemoveActiveStoryboard(int, CStoryboard *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveActiveTransition@VisualStateManagerDataSource@@QEAAXHPEAVCVisualTransition@@@Z
    void RemoveActiveTransition(int, CVisualTransition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionToNullState@VisualStateManagerDataSource@@QEAAJH@Z
    long TransitionToNullState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetVisualState@VisualStateManagerDataSource@@QEAA_NVVisualStateToken@@PEAH1@Z
    bool TryGetVisualState(VisualStateToken, int *, int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddActiveStoryboardImpl@VisualStateManagerDataSource@@MEAAXHV?$xref_ptr@VCStoryboard@@@@W4StoryboardType@VisualStateGroupContext@@@Z
    virtual void AddActiveStoryboardImpl(int, WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearActiveStoryboardsImpl@VisualStateManagerDataSource@@MEAAXH@Z
    virtual void ClearActiveStoryboardsImpl(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeginTransitionToState@VisualStateManagerDataSource@@MEAAJHH@Z
    virtual long OnBeginTransitionToState(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompleteTransitionToState@VisualStateManagerDataSource@@MEAAJH@Z
    virtual long OnCompleteTransitionToState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveActiveStoryboardImpl@VisualStateManagerDataSource@@MEAAXHPEAVCStoryboard@@@Z
    virtual void RemoveActiveStoryboardImpl(int, CStoryboard *);
};

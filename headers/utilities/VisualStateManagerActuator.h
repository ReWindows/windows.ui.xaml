#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class VisualStateManagerActuator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@VisualStateManagerActuator@@QEAAJHHH_N@Z
    long ChangeVisualState(int, int, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishVisualTransition@VisualStateManagerActuator@@QEAAJPEAVCStoryboard@@PEAVVisualTransitionCompletedData@@@Z
    long FinishVisualTransition(CStoryboard *, VisualTransitionCompletedData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeStateTriggers@VisualStateManagerActuator@@QEAAJPEAVCControl@@@Z
    long InitializeStateTriggers(CControl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReevaluateAppliedPropertySetters@VisualStateManagerActuator@@QEAAJHH@Z
    long ReevaluateAppliedPropertySetters(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshAllAppliedPropertySetters@VisualStateManagerActuator@@QEAAJXZ
    long RefreshAllAppliedPropertySetters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SnapToEnd@VisualStateManagerActuator@@QEAAJH_N@Z
    long SnapToEnd(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAndRemoveStoryboard@VisualStateManagerActuator@@QEAAJHAEBV?$xref_ptr@VCStoryboard@@@@@Z
    long StopAndRemoveStoryboard(int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SynchronouslyResetToNullState@VisualStateManagerActuator@@QEAAJH@Z
    long SynchronouslyResetToNullState(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttemptStartStoryboard@VisualStateManagerActuator@@AEAAJPEAVCStoryboard@@W4StoryboardType@VisualStateGroupContext@@@Z
    long AttemptStartStoryboard(CStoryboard *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryProcessCompletedDataIfExists@VisualStateManagerActuator@@AEAA_NPEAVCStoryboard@@H@Z
    bool TryProcessCompletedDataIfExists(CStoryboard *, int);
};

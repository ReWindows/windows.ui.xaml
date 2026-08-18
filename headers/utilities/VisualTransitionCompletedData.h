#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class VisualTransitionCompletedData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@VisualTransitionCompletedData@@SAJHHPEAVCVisualTransition@@PEAPEAV1@@Z
    static long Create(int, int, CVisualTransition *, VisualTransitionCompletedData * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@VisualTransitionCompletedData@@SAJPEAVCVisualTransition@@PEAVCControl@@PEAVCFrameworkElement@@PEAVCVisualState@@3PEAVCVisualStateGroup@@PEAPEAV1@@Z
    static long Create(CVisualTransition *, CControl *, CFrameworkElement *, CVisualState *, CVisualState *, CVisualStateGroup *, VisualTransitionCompletedData * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplRoot@VisualTransitionCompletedData@@QEBAPEAVCFrameworkElement@@XZ
    CFrameworkElement * GetImplRoot() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNewVisualState@VisualTransitionCompletedData@@QEBAPEAVCVisualState@@XZ
    CVisualState * GetNewVisualState() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOldVisualState@VisualTransitionCompletedData@@QEBAPEAVCVisualState@@XZ
    CVisualState * GetOldVisualState() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRoot@VisualTransitionCompletedData@@QEBAPEAVCControl@@XZ
    CControl * GetRoot() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualStateGroup@VisualTransitionCompletedData@@QEBAPEAVCVisualStateGroup@@XZ
    CVisualStateGroup * GetVisualStateGroup() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualTransition@VisualTransitionCompletedData@@QEBAPEAVCVisualTransition@@XZ
    CVisualTransition * GetVisualTransition() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VisualTransitionCompletedData@@QEAA@XZ
    ~VisualTransitionCompletedData();
};

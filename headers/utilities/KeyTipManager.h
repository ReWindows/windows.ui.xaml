#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
class KeyTipManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@KeyTipManager@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@KeyTipManager@@UEAAJXZ
    virtual long Execute();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideAutoKeyTipForElement@KeyTipManager@@QEAAXQEBVCDependencyObject@@@Z
    void HideAutoKeyTipForElement(CDependencyObject const * const);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0KeyTipManager@@QEAA@XZ
    KeyTipManager();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@KeyTipManager@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@KeyTipManager@@QEAAXXZ
    void Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAutoKeyTipForElement@KeyTipManager@@QEAAXPEAVCDependencyObject@@PEBG@Z
    void ShowAutoKeyTipForElement(CDependencyObject *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1KeyTipManager@@QEAA@XZ
    ~KeyTipManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePopup@KeyTipManager@@AEAAJAEAUKeyTip@@AEAUVisualProperties@KeyTipHelper@@I@Z
    long CreatePopup(KeyTip &, WindissectOpaque &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToState@KeyTipManager@@AEAAXPEAVCCoreServices@@W4State@1@@Z
    void GoToState(CCoreServices *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStateTimerFired@KeyTipManager@@AEAAXPEAVCCoreServices@@@Z
    void OnStateTimerFired(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStateTimerFiredStatic@KeyTipManager@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnStateTimerFiredStatic(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveNullKeyTips@KeyTipManager@@AEAAXXZ
    void RemoveNullKeyTips();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartStateTimer@KeyTipManager@@AEAAXPEAVCCoreServices@@H@Z
    void StartStateTimer(CCoreServices *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopStateTimer@KeyTipManager@@AEAAXXZ
    void StopStateTimer();
};

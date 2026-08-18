#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
class CLayoutManager {
public:
    class SizeChangedQueueItem;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLayoutManager@@QEAA@PEAVCCoreServices@@PEAVVisualTree@@@Z
    CLayoutManager(CCoreServices *, VisualTree *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueForSizeChanged@CLayoutManager@@QEAAXPEAVCUIElement@@AEBUXSIZEF@@@Z
    void EnqueueForSizeChanged(CUIElement *, XSIZEF const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextLayoutCounter@CLayoutManager@@QEAAGXZ
    unsigned short GetNextLayoutCounter();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequiresMeasure@CLayoutManager@@QEBA_NXZ
    bool GetRequiresMeasure() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopCurrentLayoutElement@CLayoutManager@@QEAAPEAVCUIElement@@XZ
    CUIElement * PopCurrentLayoutElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagateAncestorDirtyFromCurrentLayoutElement@CLayoutManager@@QEAAXPEAVCUIElement@@@Z
    void PropagateAncestorDirtyFromCurrentLayoutElement(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealizeRegisteredLayoutTransitions@CLayoutManager@@QEAAJXZ
    long RealizeRegisteredLayoutTransitions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLastExceptionElement@CLayoutManager@@QEAAXPEAVCUIElement@@@Z
    void SetLastExceptionElement(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLayout@CLayoutManager@@QEAAJII@Z
    long UpdateLayout(unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLayoutManager@@QEAA@XZ
    ~CLayoutManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessElementInsertions@CLayoutManager@@AEAAJXZ
    long ProcessElementInsertions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseEffectiveViewportChangedEvents@CLayoutManager@@AEAAXXZ
    void RaiseEffectiveViewportChangedEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseSizeChangedEvents@CLayoutManager@@AEAAXXZ
    void RaiseSizeChangedEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterElementForDeferrredTransition@CLayoutManager@@AEAAXPEAVCUIElement@@PEAVLayoutTransitionStorage@@@Z
    void RegisterElementForDeferrredTransition(CUIElement *, LayoutTransitionStorage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterElementForDeferredTransition@CLayoutManager@@AEAAXPEAVCUIElement@@PEAVLayoutTransitionStorage@@@Z
    void UnregisterElementForDeferredTransition(CUIElement *, LayoutTransitionStorage *);
};

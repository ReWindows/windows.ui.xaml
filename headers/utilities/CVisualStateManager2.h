#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
class CVisualStateManager2 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssignStateTriggerChangedCallback@CVisualStateManager2@@SAXPEAVCControl@@AEAV?$VariantMap@VVisualStateToken@@V?$xref_ptr@VCDependencyObject@@@@@@@Z
    static void AssignStateTriggerChangedCallback(CControl *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FaultInChildren@CVisualStateManager2@@SAJPEAVCVisualStateGroupCollection@@@Z
    static long FaultInChildren(CVisualStateGroupCollection *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomVisualStateManager@CVisualStateManager2@@SA?AV?$xref_ptr@VCDependencyObject@@@@PEAVCControl@@@Z
    static WindissectOpaque GetCustomVisualStateManager(CControl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupIndexFromVisualState@CVisualStateManager2@@SAHPEAVCControl@@VVisualStateToken@@@Z
    static int GetGroupIndexFromVisualState(CControl *, VisualStateToken);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualState@CVisualStateManager2@@SA?AV?$xref_ptr@VCDependencyObject@@@@PEAVCControl@@VVisualStateToken@@@Z
    static WindissectOpaque GetVisualState(CControl *, VisualStateToken);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualStateName@CVisualStateManager2@@SA?AVxstring_ptr@@PEAVCControl@@VVisualStateToken@@@Z
    static xstring_ptr GetVisualStateName(CControl *, VisualStateToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeStateTriggers@CVisualStateManager2@@SAJPEAVCDependencyObject@@_N@Z
    static long InitializeStateTriggers(CDependencyObject *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsActiveVisualState@CVisualStateManager2@@SA_NPEAVCVisualState@@@Z
    static bool IsActiveVisualState(CVisualState *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStoryboardCompleted@CVisualStateManager2@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnStoryboardCompleted(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisualStateGroupCollectionLeave@CVisualStateManager2@@SAJPEAVCVisualStateGroupCollection@@@Z
    static long OnVisualStateGroupCollectionLeave(CVisualStateGroupCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisualStateGroupCollectionNotifyThemeChanged@CVisualStateManager2@@SAJPEAVCVisualStateGroupCollection@@@Z
    static long OnVisualStateGroupCollectionNotifyThemeChanged(CVisualStateGroupCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetVisualStateGroupToNullState@CVisualStateManager2@@SAJPEAVCControl@@H@Z
    static long ResetVisualStateGroupToNullState(CControl *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryAddStoryboardToState@CVisualStateManager2@@SAJPEAVCVisualState@@AEBV?$xref_ptr@VCStoryboard@@@@@Z
    static long TryAddStoryboardToState(CVisualState *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRemoveStoryboardFromState@CVisualStateManager2@@SAJPEAVCVisualState@@AEBV?$xref_ptr@VCStoryboard@@@@@Z
    static long TryRemoveStoryboardFromState(CVisualState *, WindissectOpaque const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FaultInStateTriggers@CVisualStateManager2@@CAJPEAVCVisualStateGroupCollection@@AEAVCustomWriterRuntimeObjectCreator@@@Z
    static long FaultInStateTriggers(CVisualStateGroupCollection *, CustomWriterRuntimeObjectCreator &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupCollectionFromControl@CVisualStateManager2@@CA?AV?$xref_ptr@VCVisualStateGroupCollection@@@@PEAVCControl@@@Z
    static WindissectOpaque GetGroupCollectionFromControl(CControl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupCollectionFromVisualState@CVisualStateManager2@@CA?AV?$xref_ptr@VCVisualStateGroupCollection@@@@PEBVCVisualState@@@Z
    static WindissectOpaque GetGroupCollectionFromVisualState(CVisualState const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToStateOptimizedImpl@CVisualStateManager2@@CAJPEAVCControl@@PEBGVVisualStateToken@@_NPEA_N@Z
    static long GoToStateOptimizedImpl(CControl *, unsigned short const *, VisualStateToken, bool, bool *);
};

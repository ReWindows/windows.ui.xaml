#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 25 member(s).
class CTransition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendAllTransitionsNoAddRefs@CTransition@@SAJPEAVCUIElement@@W4TransitionTrigger@DirectUI@@AEAV?$xvector@PEAVCTransition@@@@@Z
    static long AppendAllTransitionsNoAddRefs(CUIElement *, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelTransitions@CTransition@@SAJPEAVCUIElement@@@Z
    static long CancelTransitions(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTransition@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStoryboards@CTransition@@UEAAJPEAVCUIElement@@MPEAHPEAPEAPEAVCStoryboard@@PEAW4TransitionParent@DirectUI@@@Z
    virtual long CreateStoryboards(CUIElement *, float, int *, CStoryboard * * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutSlotDuringTransition@CTransition@@SAJPEAVCUIElement@@PEAUXRECTF_WH@@@Z
    static long GetLayoutSlotDuringTransition(CUIElement *, XRECTF_WH *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTransition@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasActiveTransition@CTransition@@SAIPEAVCUIElement@@@Z
    static unsigned int HasActiveTransition(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasActiveTransition@CTransition@@SAIPEAVCUIElement@@W4TransitionTrigger@DirectUI@@@Z
    static unsigned int HasActiveTransition(CUIElement *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasPossibleTransition@CTransition@@SAIPEAVCUIElement@@@Z
    static unsigned int HasPossibleTransition(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasTransitionAnimations@CTransition@@SAIPEAVCUIElement@@@Z
    static unsigned int HasTransitionAnimations(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutChanged@CTransition@@SAJPEAVCUIElement@@@Z
    static long OnLayoutChanged(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipateInTransitions@CTransition@@UEAAJPEAVCUIElement@@W4TransitionTrigger@DirectUI@@PEAI@Z
    virtual long ParticipateInTransitions(CUIElement *, int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessLayoutTrigger@CTransition@@SAJPEAVCUIElement@@PEAVLayoutTransitionStorage@@@Z
    static long ProcessLayoutTrigger(CUIElement *, LayoutTransitionStorage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessLoadTrigger@CTransition@@SAJPEAVCUIElement@@PEAVLayoutTransitionStorage@@@Z
    static long ProcessLoadTrigger(CUIElement *, LayoutTransitionStorage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUnloadTrigger@CTransition@@SAJPEAVCUIElement@@PEAVLayoutTransitionStorage@@AEAV?$xvector@PEAVCTransition@@@@@Z
    static long ProcessUnloadTrigger(CUIElement *, LayoutTransitionStorage *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInformationFromAnimation@CTransition@@SAXPEAVCUIElement@@PEAVLayoutTransitionStorage@@I@Z
    static void SetInformationFromAnimation(CUIElement *, LayoutTransitionStorage *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNextGenerationInformationFromLayout@CTransition@@SAXPEAVCUIElement@@PEAVLayoutTransitionStorage@@I@Z
    static void SetNextGenerationInformationFromLayout(CUIElement *, LayoutTransitionStorage *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupTransition@CTransition@@SAJPEAVCUIElement@@PEAV1@M@Z
    static long SetupTransition(CUIElement *, CTransition *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateTransitionWasSetup@CTransition@@SAJPEAVCUIElement@@@Z
    static long ValidateTransitionWasSetup(CUIElement *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTransition@@IEAA@PEAVCCoreServices@@@Z
    CTransition(CCoreServices *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTransition@@MEAA@XZ
    virtual ~CTransition();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRunningTransitionAnimations@CTransition@@CAIPEAVCUIElement@@@Z
    static unsigned int HasRunningTransitionAnimations(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransitionCompleted@CTransition@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnTransitionCompleted(CDependencyObject *, CEventArgs *);
};

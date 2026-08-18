#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 61 member(s).
class CFocusManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFocusManager@@QEAA@PEAVCCoreServices@@AEAVCContentRoot@@@Z
    CFocusManager(CCoreServices *, CContentRoot &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanProcessTabStop@CFocusManager@@QEAA_N_N@Z
    bool CanProcessTabStop(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelCurrentAsyncOperation@CFocusManager@@QEAAXAEBVFocusMovementResult@Focus@@@Z
    void CancelCurrentAsyncOperation(::Focus::FocusMovementResult const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearFocus@CFocusManager@@QEAAXXZ
    void ClearFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAndSetNextFocus@CFocusManager@@QEAA?AVFocusMovementResult@Focus@@AEBVFocusMovement@3@@Z
    ::Focus::FocusMovementResult FindAndSetNextFocus(::Focus::FocusMovement const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAndSetNextFocus@CFocusManager@@QEAA_NW4FocusNavigationDirection@DirectUI@@@Z
    bool FindAndSetNextFocus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextFocus@CFocusManager@@QEAAPEAVCDependencyObject@@AEBUFindFocusOptions@@AEAUXYFocusOptions@Focus@@PEAV2@_N@Z
    CDependencyObject * FindNextFocus(FindFocusOptions const &, ::Focus::XYFocusOptions &, CDependencyObject *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireAutomationFocusChanged@CFocusManager@@QEAAXXZ
    void FireAutomationFocusChanged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstFocusableElement@CFocusManager@@QEAAPEAVCUIElement@@XZ
    CUIElement * GetFirstFocusableElement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstFocusableElementFromRoot@CFocusManager@@QEAAPEAVCDependencyObject@@_N@Z
    CDependencyObject * GetFirstFocusableElementFromRoot(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusStateFromInputDeviceType@CFocusManager@@SA?AW4FocusState@DirectUI@@W4InputDeviceType@3@@Z
    static int GetFocusStateFromInputDeviceType(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusTarget@CFocusManager@@QEAAPEAVCDependencyObject@@XZ
    CDependencyObject * GetFocusTarget();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusTargetDescendant@CFocusManager@@SAPEAVCUIElement@@PEAV2@@Z
    static CUIElement * GetFocusTargetDescendant(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedAutomationPeer@CFocusManager@@QEAA?AV?$xref_ptr@VCAutomationPeer@@@@XZ
    WindissectOpaque GetFocusedAutomationPeer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextTabStop@CFocusManager@@QEAAPEAVCDependencyObject@@PEAV2@I@Z
    CDependencyObject * GetNextTabStop(CDependencyObject *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviousTabStop@CFocusManager@@QEAAPEAVCDependencyObject@@PEAV2@@Z
    CDependencyObject * GetPreviousTabStop(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTabStopCandidateElement@CFocusManager@@QEAAPEAVCDependencyObject@@_N0AEA_N@Z
    CDependencyObject * GetTabStopCandidateElement(bool, bool, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextElementForFocusRectCandidate@CFocusManager@@QEBAPEAVCTextElement@@XZ
    CTextElement * GetTextElementForFocusRectCandidate() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPluginFocused@CFocusManager@@QEBA_NXZ
    bool IsPluginFocused() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigatedToByEngagingControl@CFocusManager@@QEAA_NPEAVCDependencyObject@@@Z
    bool NavigatedToByEngagingControl(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyFocusChanged@CFocusManager@@QEAAJ_N0@Z
    long NotifyFocusChanged(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTabStop@CFocusManager@@QEAAJIPEAI@Z
    long ProcessTabStop(unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseAndProcessGettingAndLosingFocusEvents@CFocusManager@@QEAA_NQEAVCDependencyObject@@PEAPEAV2@W4FocusState@DirectUI@@W4FocusNavigationDirection@4@_NU_GUID@@@Z
    bool RaiseAndProcessGettingAndLosingFocusEvents(CDependencyObject * const, CDependencyObject * *, int, int, bool, _GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseNoFocusCandidateFoundEvent@CFocusManager@@QEAAXW4FocusNavigationDirection@DirectUI@@@Z
    void RaiseNoFocusCandidateFoundEvent(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusOnNextFocusableElement@CFocusManager@@QEAAJW4FocusState@DirectUI@@_N@Z
    long SetFocusOnNextFocusableElement(int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusRectangleUIElement@CFocusManager@@QEAAXPEAVCUIElement@@@Z
    void SetFocusRectangleUIElement(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusedAutomationPeer@CFocusManager@@QEAAXPEAVCAutomationPeer@@@Z
    void SetFocusedAutomationPeer(CAutomationPeer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusedElement@CFocusManager@@QEAA?BVFocusMovementResult@Focus@@AEBVFocusMovement@3@@Z
    ::Focus::FocusMovementResult SetFocusedElement(::Focus::FocusMovement const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowFocus@CFocusManager@@QEAAJ_N0PEAH@Z
    long SetWindowFocus(bool, bool, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMoveFocus@CFocusManager@@QEAAJW4FocusNavigationDirection@DirectUI@@PEAI@Z
    long TryMoveFocus(int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetAsyncOperation@CFocusManager@@QEAA_NPEAVICoreAsyncFocusOperation@@@Z
    bool TrySetAsyncOperation(ICoreAsyncFocusOperation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFocusRect@CFocusManager@@QEAAXW4FocusNavigationDirection@DirectUI@@_N@Z
    void UpdateFocusRect(int, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFocusManager@@QEAA@XZ
    ~CFocusManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanHaveChildren@CFocusManager@@AEAAIPEAVCDependencyObject@@@Z
    unsigned int CanHaveChildren(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanRaiseFocusEventChange@CFocusManager@@AEAAIXZ
    unsigned int CanRaiseFocusEventChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoerceFocusState@CFocusManager@@AEBA?AW4FocusState@DirectUI@@W423@@Z
    int CoerceFocusState(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareTabIndex@CFocusManager@@AEAAHPEAVCDependencyObject@@0@Z
    int CompareTabIndex(CDependencyObject *, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusedElementIsBehindFullWindowMediaRoot@CFocusManager@@AEBA_NXZ
    bool FocusedElementIsBehindFullWindowMediaRoot() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstFocusableElement@CFocusManager@@AEAAPEAVCDependencyObject@@PEAV2@0@Z
    CDependencyObject * GetFirstFocusableElement(CDependencyObject *, CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstFocusableElementInternal@CFocusManager@@AEAAPEAVCDependencyObject@@PEAV2@0@Z
    CDependencyObject * GetFirstFocusableElementInternal(CDependencyObject *, CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusParent@CFocusManager@@AEAAPEAVCDependencyObject@@PEAV2@@Z
    CDependencyObject * GetFocusParent(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastFocusableElement@CFocusManager@@AEAAPEAVCDependencyObject@@PEAV2@0@Z
    CDependencyObject * GetLastFocusableElement(CDependencyObject *, CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastFocusableElementInternal@CFocusManager@@AEAAPEAVCDependencyObject@@PEAV2@0@Z
    CDependencyObject * GetLastFocusableElementInternal(CDependencyObject *, CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextTabStopInternal@CFocusManager@@AEAAPEAVCDependencyObject@@PEAV2@00PEAIPEAPEAV2@@Z
    CDependencyObject * GetNextTabStopInternal(CDependencyObject *, CDependencyObject *, CDependencyObject *, unsigned int *, CDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentElement@CFocusManager@@AEAAPEAVCUIElement@@PEAVCDependencyObject@@@Z
    CUIElement * GetParentElement(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviousTabStopInternal@CFocusManager@@AEAAPEAVCDependencyObject@@PEAV2@00PEAIPEAPEAV2@@Z
    CDependencyObject * GetPreviousTabStopInternal(CDependencyObject *, CDependencyObject *, CDependencyObject *, unsigned int *, CDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootOfPopupSubTree@CFocusManager@@AEAAPEAVCDependencyObject@@PEAV2@@Z
    CDependencyObject * GetRootOfPopupSubTree(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTabIndex@CFocusManager@@AEAAHPEAVCDependencyObject@@@Z
    int GetTabIndex(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTabNavigation@CFocusManager@@AEBA?AW4KeyboardNavigationMode@DirectUI@@PEAVCDependencyObject@@@Z
    int GetTabNavigation(CDependencyObject *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocusOnFirstTabStop@CFocusManager@@AEAAIXZ
    unsigned int IsFocusOnFirstTabStop();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocusOnLastTabStop@CFocusManager@@AEAAIXZ
    unsigned int IsFocusOnLastTabStop();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidTabStopSearchCandidate@CFocusManager@@AEBA_NQEAVCDependencyObject@@@Z
    bool IsValidTabStopSearchCandidate(CDependencyObject * const) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTabStopInternal@CFocusManager@@AEAAJI_NPEAPEAVCDependencyObject@@@Z
    long ProcessTabStopInternal(unsigned int, bool, CDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseFocusElementRemovedEvent@CFocusManager@@AEAAPEAVCDependencyObject@@PEAV2@@Z
    CDependencyObject * RaiseFocusElementRemovedEvent(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseGotFocusEvent@CFocusManager@@AEAAJPEAVCDependencyObject@@U_GUID@@@Z
    long RaiseGotFocusEvent(CDependencyObject *, _GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseLostFocusEvent@CFocusManager@@AEAAJPEAVCDependencyObject@@U_GUID@@@Z
    long RaiseLostFocusEvent(CDependencyObject *, _GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUpdateFocus@CFocusManager@@AEBA_NPEAVCDependencyObject@@W4FocusState@DirectUI@@@Z
    bool ShouldUpdateFocus(CDependencyObject *, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMoveFocusToHostedComponent@CFocusManager@@AEAAJPEAVCDependencyObject@@W4FocusNavigationDirection@DirectUI@@PEAUXRECTF_RB@@0@Z
    long TryMoveFocusToHostedComponent(CDependencyObject *, int, XRECTF_RB *, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFocus@CFocusManager@@AEAA?AVFocusMovementResult@Focus@@AEBVFocusMovement@3@@Z
    ::Focus::FocusMovementResult UpdateFocus(::Focus::FocusMovement const &);
};

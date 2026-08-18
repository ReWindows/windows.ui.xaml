#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 19 member(s).
class FocusRect {
public:
    class RevealFocusAnimator;
    class RevealFocusSource;
    class RevealMotion;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreNearEnoughToNudge@FocusRect@@YA_NMMW4NudgeMode@1@@Z
    bool AreNearEnoughToNudge(float, float, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFocusRectBorderAtPosition@FocusRect@@YA?AV?$xref_ptr@VCBorder@@@@PEAVCCoreServices@@PEAVCUIElement@@I_N@Z
    WindissectOpaque EnsureFocusRectBorderAtPosition(CCoreServices *, CUIElement *, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTranslateTransform@FocusRect@@YAXPEAVCUIElement@@MM@Z
    void EnsureTranslateTransform(CUIElement *, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAncestorClipsInClientSpace@FocusRect@@YAJPEAVCDependencyObject@@AEBUFocusRectHost@@_NAEAUXRECTF_WH@@@Z
    long GetAncestorClipsInClientSpace(CDependencyObject *, FocusRectHost const &, bool, XRECTF_WH &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAncestorScrollViewer@FocusRect@@YAPEAVCScrollViewer@@PEAVCDependencyObject@@@Z
    CScrollViewer * GetAncestorScrollViewer(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementLayoutBoundsWithMargins@FocusRect@@YA?AUXRECTF_WH@@PEAVCUIElement@@@Z
    XRECTF_WH GetElementLayoutBoundsWithMargins(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusRectWithNudging@FocusRect@@YAJPEAVCUIElement@@UXRECTF_WH@@AEBUFocusRectHost@@AEBUXRECTF_RB@@_NAEAU3@@Z
    long GetFocusRectWithNudging(CUIElement *, XRECTF_WH, FocusRectHost const &, XRECTF_RB const &, bool, XRECTF_WH &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollDirection@FocusRect@@YA?AUScrollDirection@1@PEAVCDependencyObject@@@Z
    WindissectOpaque GetScrollDirection(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NudgeFocusRectInsideHorizontalClip@FocusRect@@YA_NQEAVCUIElement@@@Z
    bool NudgeFocusRectInsideHorizontalClip(CUIElement * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NudgeFocusRectInsideVerticalClip@FocusRect@@YA_NQEAVCUIElement@@@Z
    bool NudgeFocusRectInsideVerticalClip(CUIElement * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NudgeInsideContainer@FocusRect@@YAXAEAUXRECTF_WH@@AEBU2@1W4NudgeMode@1@_N3@Z
    void NudgeInsideContainer(XRECTF_WH &, XRECTF_WH const &, XRECTF_WH const &, int, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBrush@FocusRect@@YA_NPEAPEAVCBrush@@PEAV2@@Z
    bool SetBrush(CBrush * *, CBrush *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElementPosition@FocusRect@@YAXPEAVCUIElement@@MM@Z
    void SetElementPosition(CUIElement *, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElementSize@FocusRect@@YAXPEAVCFrameworkElement@@MMPEA_N@Z
    void SetElementSize(CFrameworkElement *, float, float, bool *);
};

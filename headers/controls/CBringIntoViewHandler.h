#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
class CBringIntoViewHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustBringIntoViewRecHeight@CBringIntoViewHandler@@SAXQEAVCUIElement@@MMMAEAM@Z
    static void AdjustBringIntoViewRecHeight(CUIElement * const, float, float, float, float &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DipsToPhysicalPixels@CBringIntoViewHandler@@SAXPEAVCDependencyObject@@AEBUXRECTF_RB@@PEAU3@@Z
    static void DipsToPhysicalPixels(CDependencyObject *, XRECTF_RB const &, XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFocusedElementBringIntoView@CBringIntoViewHandler@@SAJPEAVCDependencyObject@@QEAVCUIElement@@MMM_N222@Z
    static long EnsureFocusedElementBringIntoView(CDependencyObject *, CUIElement * const, float, float, float, bool, bool, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleBoundsAdjustment@CBringIntoViewHandler@@SAJQEAVCUIElement@@UXRECTF_RB@@PEAU3@@Z
    static long GetVisibleBoundsAdjustment(CUIElement * const, XRECTF_RB, XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PhysicalPixelsToDips@CBringIntoViewHandler@@SAXPEAVCDependencyObject@@AEBUXRECTF_WH@@PEAU3@@Z
    static void PhysicalPixelsToDips(CDependencyObject *, XRECTF_WH const &, XRECTF_WH *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringFocusedElementIntoView@CBringIntoViewHandler@@CAJQEAVCUIElement@@MMM_N0011@Z
    static long BringFocusedElementIntoView(CUIElement * const, float, float, float, bool, CUIElement * const, CUIElement * const, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCaretPosition@CBringIntoViewHandler@@CAJPEAVCUIElement@@AEAUXPOINTF@@@Z
    static long GetCaretPosition(CUIElement *, XPOINTF &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedElementBoundingRectForCaret@CBringIntoViewHandler@@CAJPEAVCUIElement@@MMAEAUXRECTF_WH@@@Z
    static long GetFocusedElementBoundingRectForCaret(CUIElement *, float, float, XRECTF_WH &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedElementBoundingRectForPadding@CBringIntoViewHandler@@CAJQEAVCUIElement@@0MMMMUXRECTF_RB@@_N1QEAUXRECTF_WH@@@Z
    static long GetFocusedElementBoundingRectForPadding(CUIElement * const, CUIElement * const, float, float, float, float, XRECTF_RB, bool, XRECTF_RB, XRECTF_WH * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedElementBoundingRectForWebView@CBringIntoViewHandler@@CAJPEAVCUIElement@@IPEAUXRECTF_RB@@PEAUXRECTF_WH@@@Z
    static long GetFocusedElementBoundingRectForWebView(CUIElement *, unsigned int, XRECTF_RB *, XRECTF_WH *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInnerScroller@CBringIntoViewHandler@@CAQEAVCUIElement@@QEBV2@@Z
    static CUIElement * const GetInnerScroller(CUIElement const * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInnermostScrollableScrollerWidthAndHeight@CBringIntoViewHandler@@CAJQEAVCUIElement@@00MAEAM1@Z
    static long GetInnermostScrollableScrollerWidthAndHeight(CUIElement * const, CUIElement * const, CUIElement * const, float, float &, float &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpenedPopup@CBringIntoViewHandler@@CAJPEAVCUIElement@@PEAPEAVCPopup@@@Z
    static long GetOpenedPopup(CUIElement *, CPopup * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollerGlobalBounds@CBringIntoViewHandler@@CAJPEAVCUIElement@@PEAUXRECTF_RB@@@Z
    static long GetScrollerGlobalBounds(CUIElement *, XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldDeferBringIntoView@CBringIntoViewHandler@@CAIIPEAVCUIElement@@@Z
    static unsigned int ShouldDeferBringIntoView(unsigned int, CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformGlobalToLocal@CBringIntoViewHandler@@CAJPEAVCUIElement@@AEBUXRECTF_WH@@PEAU3@@Z
    static long TransformGlobalToLocal(CUIElement *, XRECTF_WH const &, XRECTF_WH *);
};

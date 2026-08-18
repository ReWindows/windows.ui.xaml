#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
class CFocusRectManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreHighVisibilityFocusRectsEnabled@CFocusRectManager@@SA_NXZ
    static bool AreHighVisibilityFocusRectsEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreRevealFocusRectsEnabled@CFocusRectManager@@SA_NXZ
    static bool AreRevealFocusRectsEnabled();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFocusRectManager@@QEAA@XZ
    CFocusRectManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusVisualMargin@CFocusRectManager@@SA?AUXRECTF_RB@@PEAVCDependencyObject@@0@Z
    static XRECTF_RB GetFocusVisualMargin(CDependencyObject *, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseResources@CFocusRectManager@@QEAAX_N00@Z
    void ReleaseResources(bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderFocusRectForElement@CFocusRectManager@@SAXPEAVCUIElement@@PEAVIContentRenderer@@@Z
    static void RenderFocusRectForElement(CUIElement *, IContentRenderer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFocusRect@CFocusRectManager@@QEAAXPEAVCCoreServices@@PEAVCDependencyObject@@1W4FocusNavigationDirection@DirectUI@@_N@Z
    void UpdateFocusRect(CCoreServices *, CDependencyObject *, CDependencyObject *, int, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFocusRectManager@@QEAA@XZ
    ~CFocusRectManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRevealFocusOptions@CFocusRectManager@@CAXAEAUFocusRectangleOptions@@AEBUFocusable@@@Z
    static void AddRevealFocusOptions(FocusRectangleOptions &, Focusable const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyRevealFocusToBorder@CFocusRectManager@@AEAAXPEAVCBorder@@AEBUFocusable@@AEAUFocusRectangleOptions@@UXRECTF_WH@@W4FocusNavigationDirection@DirectUI@@@Z
    void ApplyRevealFocusToBorder(CBorder *, Focusable const &, FocusRectangleOptions &, XRECTF_WH, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallCustomizationFunction@CFocusRectManager@@CAXPEAVCDependencyObject@@AEAUFocusRectangleOptions@@PEA_N@Z
    static void CallCustomizationFunction(CDependencyObject *, FocusRectangleOptions &, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureFocusElement@CFocusRectManager@@CA_NPEAVCBorder@@W4FocusElementType@1@AEAUFocusRectangleOptions@@UXRECTF_WH@@@Z
    static bool ConfigureFocusElement(CBorder *, int, FocusRectangleOptions &, XRECTF_WH);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFocusRectHost@CFocusRectManager@@CA?AUFocusRectHost@@AEBUFocusable@@AEBUXRECTF_WH@@@Z
    static FocusRectHost FindFocusRectHost(Focusable const &, XRECTF_WH const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultFocusOptions@CFocusRectManager@@CAXPEAVCCoreServices@@PEAUFocusRectangleOptions@@@Z
    static void GetDefaultFocusOptions(CCoreServices *, FocusRectangleOptions *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultFocusOptionsForLink@CFocusRectManager@@CAXPEAVCCoreServices@@PEAUFocusRectangleOptions@@@Z
    static void GetDefaultFocusOptionsForLink(CCoreServices *, FocusRectangleOptions *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusOptionsForElement@CFocusRectManager@@CAXAEBUFocusable@@0_N1PEAUFocusRectangleOptions@@PEAUXRECTF_RB@@@Z
    static void GetFocusOptionsForElement(Focusable const &, Focusable const &, bool, bool, FocusRectangleOptions *, XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLegacyRenderOptions@CFocusRectManager@@CA_NAEBUFocusable@@PEAUFocusRectangleOptions@@@Z
    static bool SetLegacyRenderOptions(Focusable const &, FocusRectangleOptions *);
};

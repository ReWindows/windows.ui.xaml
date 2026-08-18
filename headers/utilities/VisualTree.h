#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 52 member(s).
class VisualTree {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTestLTE@VisualTree@@QEAA?AV?$xref_ptr@VCLayoutTransitionElement@@@@PEAVCUIElement@@0_N11@Z
    WindissectOpaque AddTestLTE(CUIElement *, CUIElement *, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachElement@VisualTree@@QEAAJPEAVCDependencyObject@@@Z
    long AttachElement(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearTestLTEs@VisualTree@@QEAAXXZ
    void ClearTestLTEs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientLogicalToScreenPhysical@VisualTree@@QEBA?AUtagPOINT@@AEBUPoint@Foundation@Windows@@@Z
    tagPOINT ClientLogicalToScreenPhysical(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveRootVisual@VisualTree@@QEBAPEAVCDependencyObject@@XZ
    CDependencyObject * GetActiveRootVisual() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentRootForElement@VisualTree@@SAPEAVCContentRoot@@PEAVCDependencyObject@@W4LookupOptions@@@Z
    static CContentRoot * GetContentRootForElement(CDependencyObject *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusManagerForElement@VisualTree@@SAPEAVCFocusManager@@PEAVCDependencyObject@@W4LookupOptions@@@Z
    static CFocusManager * GetFocusManagerForElement(CDependencyObject *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForElementNoRef@VisualTree@@SAPEAV1@PEAVCDependencyObject@@W4LookupOptions@@@Z
    static VisualTree * GetForElementNoRef(CDependencyObject *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullWindowMediaRoot@VisualTree@@QEAAPEAVCFullWindowMediaRoot@@XZ
    CFullWindowMediaRoot * GetFullWindowMediaRoot();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullWindowMediaRootForElement@VisualTree@@SAPEAVCFullWindowMediaRoot@@PEAVCDependencyObject@@@Z
    static CFullWindowMediaRoot * GetFullWindowMediaRootForElement(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsVisible@VisualTree@@QEBA_NXZ
    bool GetIsVisible() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutManagerForElement@VisualTree@@SAPEAVCLayoutManager@@PEAVCDependencyObject@@@Z
    static CLayoutManager * GetLayoutManagerForElement(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateXamlRootNoRef@VisualTree@@QEAAPEAUIInspectable@@XZ
    IInspectable * GetOrCreateXamlRootNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPopupRoot@VisualTree@@QEAAPEAVCPopupRoot@@XZ
    CPopupRoot * GetPopupRoot();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPopupRootForElementNoRef@VisualTree@@SAJPEAVCDependencyObject@@PEAPEAVCPopupRoot@@@Z
    static long GetPopupRootForElementNoRef(CDependencyObject *, CPopupRoot * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRasterizationScale@VisualTree@@QEBANXZ
    double GetRasterizationScale() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootForElement@VisualTree@@SAPEAVCRootVisual@@PEBVCDependencyObject@@@Z
    static CRootVisual * GetRootForElement(CDependencyObject const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootOrIslandForElement@VisualTree@@SAPEAVCUIElement@@PEAVCDependencyObject@@@Z
    static CUIElement * GetRootOrIslandForElement(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScreenOffset@VisualTree@@QEBA?AUtagPOINT@@XZ
    tagPOINT GetScreenOffset() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@VisualTree@@QEBA?AUSize@Foundation@Windows@@XZ
    WindissectOpaque GetSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionRoot@VisualTree@@QEAAPEAVCTransitionRoot@@XZ
    CTransitionRoot * GetTransitionRoot();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionRootForElement@VisualTree@@SAPEAVCTransitionRoot@@PEAVCDependencyObject@@@Z
    static CTransitionRoot * GetTransitionRootForElement(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUniqueVisualTreeNoRef@VisualTree@@SAJPEAVCDependencyObject@@0PEAV1@PEAPEAV1@@Z
    static long GetUniqueVisualTreeNoRef(CDependencyObject *, CDependencyObject *, VisualTree *, VisualTree * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXamlIslandRootCollection@VisualTree@@QEAAPEAVCXamlIslandRootCollection@@XZ
    CXamlIslandRootCollection * GetXamlIslandRootCollection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXamlIslandRootForElement@VisualTree@@SAPEAVCXamlIslandRoot@@PEAVCDependencyObject@@@Z
    static CXamlIslandRoot * GetXamlIslandRootForElement(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXamlRootMaterialProperties@VisualTree@@QEAA?AV?$xref_ptr@UIInspectable@@@@XZ
    WindissectOpaque GetXamlRootMaterialProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsElementInWindowedPopup@VisualTree@@SA_NPEAVCUIElement@@@Z
    static bool IsElementInWindowedPopup(CUIElement *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VisualTree@@QEAAIXZ
    unsigned int Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTestLTE@VisualTree@@QEAAXPEAVCUIElement@@@Z
    void RemoveTestLTE(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetRoots@VisualTree@@QEAAJPEAI@Z
    long ResetRoots(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScreenPhysicalToClientLogical@VisualTree@@QEBA?AUPoint@Foundation@Windows@@AEBUtagPOINT@@@Z
    WindissectOpaque ScreenPhysicalToClientLogical(tagPOINT const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPublicRootVisual@VisualTree@@QEAAJPEAVCUIElement@@PEAVCScrollContentControl@@PEAVCContentPresenter@@@Z
    long SetPublicRootVisual(CUIElement *, CScrollContentControl *, CContentPresenter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@VisualTree@@QEAAJXZ
    long Shutdown();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VisualTree@@QEAA@PEAVCCoreServices@@IPEAVCUIElement@@AEAVCContentRoot@@@Z
    VisualTree(CCoreServices *, unsigned int, CUIElement *, CContentRoot &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VisualTree@@UEAA@XZ
    virtual ~VisualTree();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRoot@VisualTree@@AEAAJPEAVCUIElement@@@Z
    long AddRoot(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddVisualRootToRootScrollViewer@VisualTree@@AEAAJPEAVCUIElement@@@Z
    long AddVisualRootToRootScrollViewer(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureConnectedAnimationRoot@VisualTree@@AEAAJXZ
    long EnsureConnectedAnimationRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFullWindowMediaRoot@VisualTree@@AEAAJXZ
    long EnsureFullWindowMediaRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePopupRoot@VisualTree@@AEAAJXZ
    long EnsurePopupRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePrintRoot@VisualTree@@AEAAJXZ
    long EnsurePrintRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRenderTargetBitmapRoot@VisualTree@@AEAAJXZ
    long EnsureRenderTargetBitmapRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTransitionRoot@VisualTree@@AEAAJXZ
    long EnsureTransitionRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureVisualDiagnosticsRoot@VisualTree@@AEAAJXZ
    long EnsureVisualDiagnosticsRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureXamlIslandRootCollection@VisualTree@@AEAAXXZ
    void EnsureXamlIslandRootCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalShutdown@VisualTree@@AEAAXXZ
    void FinalShutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveRoot@VisualTree@@AEAAJPEAVCUIElement@@@Z
    long RemoveRoot(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveRootScrollViewer@VisualTree@@AEAAJPEAVCScrollContentControl@@@Z
    long RemoveRootScrollViewer(CScrollContentControl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveVisualRootFromRootScrollViewer@VisualTree@@AEAAJPEAVCUIElement@@@Z
    long RemoveVisualRootFromRootScrollViewer(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldFinalShutdown@VisualTree@@AEBA_NXZ
    bool ShouldFinalShutdown() const;
};

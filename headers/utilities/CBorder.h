#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 49 member(s).
class CBorder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddChild@CBorder@@UEAAJPEAVCUIElement@@@Z
    virtual long AddChild(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreChildrenInLogicalTree@CBorder@@UEAA_NXZ
    virtual bool AreChildrenInLogicalTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanHaveChildren@CBorder@@UEBA_NXZ
    virtual bool CanHaveChildren() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Child@CBorder@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long Child(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CBorder@@UEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CBorder@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForFocusRendering@CBorder@@SAJPEAVCCoreServices@@PEAPEAV1@@Z
    static long CreateForFocusRendering(CCoreServices *, CBorder * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundBrush@CBorder@@UEBA?AV?$xref_ptr@VCBrush@@@@XZ
    virtual WindissectOpaque GetBackgroundBrush() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundSizing@CBorder@@UEBA?AW4BackgroundSizing@DirectUI@@XZ
    virtual int GetBackgroundSizing() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderBrush@CBorder@@UEBA?AV?$xref_ptr@VCBrush@@@@XZ
    virtual WindissectOpaque GetBorderBrush() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderThickness@CBorder@@UEBA?AUXRECTF_RB@@XZ
    virtual XRECTF_RB GetBorderThickness() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChild@CBorder@@QEAAJPEAPEAVCUIElement@@@Z
    long GetChild(CUIElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCornerRadius@CBorder@@UEBA?AUXRECTF_CR@@XZ
    virtual XRECTF_CR GetCornerRadius() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsLayoutElement@CBorder@@UEBA_NXZ
    virtual bool GetIsLayoutElement() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutRoundedThickness@CBorder@@SA?AUXRECTF_RB@@PEAVCFrameworkElement@@@Z
    static XRECTF_RB GetLayoutRoundedThickness(CFrameworkElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPadding@CBorder@@UEBA?AUXRECTF_RB@@XZ
    virtual XRECTF_RB GetPadding() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionsForChildElementNoAddRef@CBorder@@UEAAPEAVCTransitionCollection@@PEAVCUIElement@@@Z
    virtual CTransitionCollection * GetTransitionsForChildElementNoAddRef(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CBorder@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HelperDeflateRect@CBorder@@SAXAEBUXRECTF_WH@@AEBUXRECTF_RB@@AEAU2@@Z
    static void HelperDeflateRect(XRECTF_WH const &, XRECTF_RB const &, XRECTF_WH &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HelperGetCombinedThickness@CBorder@@SA?AUXSIZEF@@PEAVCFrameworkElement@@@Z
    static XSIZEF HelperGetCombinedThickness(CFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HelperGetInnerRect@CBorder@@SA?AUXRECTF_WH@@PEAVCFrameworkElement@@AEBUXSIZEF@@@Z
    static XRECTF_WH HelperGetInnerRect(CFrameworkElement *, XSIZEF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWIsContentDirty@CBorder@@UEAAIXZ
    virtual unsigned int NWIsContentDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetBackgroundBrushDirty@CBorder@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetBackgroundBrushDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetBorderBrushDirty@CBorder@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetBorderBrushDirty(CDependencyObject *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetChild@CBorder@@QEAAJPEAVCUIElement@@@Z
    long SetChild(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHWRealizationCache@CBorder@@UEAAXPEAVHWRealization@@@Z
    virtual void SetHWRealizationCache(HWRealization *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CBorder@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CBorder@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureContentRenderDataVirtual@CBorder@@MEAAXW4RenderWalkType@@0@Z
    virtual void EnsureContentRenderDataVirtual(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateContentBounds@CBorder@@MEAAJPEAUXRECTF_RB@@@Z
    virtual long GenerateContentBounds(XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundsForImageBrushVirtual@CBorder@@MEAAJPEBVCImageBrush@@PEAUXRECTF_WH@@@Z
    virtual long GetBoundsForImageBrushVirtual(CImageBrush const *, XRECTF_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CBorder@@MEAAJAEBUXPOINTF@@PEAI@Z
    virtual long HitTestLocalInternal(XPOINTF const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CBorder@@MEAAJAEBVHitTestPolygon@@PEAI@Z
    virtual long HitTestLocalInternal(HitTestPolygon const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CBorder@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWCleanDirtyFlags@CBorder@@MEAAXXZ
    virtual void NWCleanDirtyFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRenderPreChildrenEdgesVirtual@CBorder@@MEAAJAEBUSharedRenderParams@@AEBUNWRenderParams@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@@Z
    virtual long NWRenderPreChildrenEdgesVirtual(SharedRenderParams const &, NWRenderParams const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentDirty@CBorder@@MEAAXXZ
    virtual void OnContentDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreChildrenPrintVirtual@CBorder@@MEAAJAEBUSharedRenderParams@@AEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@@Z
    virtual long PreChildrenPrintVirtual(SharedRenderParams const &, D2DPrecomputeParams const &, D2DRenderParams const &);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBorder@@AEAA@PEAVCCoreServices@@@Z
    CBorder(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseWalkSpecificResources@CBorder@@AEAAXW4RenderWalkType@@@Z
    void ReleaseWalkSpecificResources(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBorder@@EEAA@XZ
    virtual ~CBorder();
};

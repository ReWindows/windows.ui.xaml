#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 130 member(s).
class CListViewBaseItemChrome {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBorder@CListViewBaseItemChrome@@SAJPEAVIContentRenderer@@AEBUXRECTF_WH@@AEBUXRECTF_RB@@PEAVCBrush@@PEAV1@@Z
    static long AddBorder(IContentRenderer *, XRECTF_WH const &, XRECTF_RB const &, CBrush *, CListViewBaseItemChrome *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddChromeAssociatedPath@CListViewBaseItemChrome@@QEAAJPEAVIContentRenderer@@AEBUXRECTF_WH@@AEBVCMILMatrix@@PEAVCBrush@@MI@Z
    long AddChromeAssociatedPath(IContentRenderer *, XRECTF_WH const &, CMILMatrix const &, CBrush *, float, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLineSegmentToSegmentCollection@CListViewBaseItemChrome@@SAJPEAVCCoreServices@@PEAVCPathSegmentCollection@@UXPOINTF@@@Z
    static long AddLineSegmentToSegmentCollection(CCoreServices *, CPathSegmentCollection *, XPOINTF);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRectangle@CListViewBaseItemChrome@@SAJPEAVIContentRenderer@@AEBUXRECTF_WH@@PEAVCBrush@@PEAVCUIElement@@@Z
    static long AddRectangle(IContentRenderer *, XRECTF_WH const &, CBrush *, CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTemplateChild@CListViewBaseItemChrome@@UEAAJPEAVCUIElement@@@Z
    virtual long AddTemplateChild(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CustomizeFocusRectangle@CListViewBaseItemChrome@@QEAAJAEAUFocusRectangleOptions@@PEA_N@Z
    long CustomizeFocusRectangle(FocusRectangleOptions &, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDragOpacity@CListViewBaseItemChrome@@QEBAMXZ
    float GetDragOpacity() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextPendingAnimation@CListViewBaseItemChrome@@QEAAJPEAPEAVListViewBaseItemAnimationCommand@@@Z
    long GetNextPendingAnimation(ListViewBaseItemAnimationCommand * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTemplateChildIfExists@CListViewBaseItemChrome@@QEAAPEAVCUIElement@@XZ
    CUIElement * GetTemplateChildIfExists();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTemplateChildNoRef@CListViewBaseItemChrome@@UEAAPEAVCUIElement@@XZ
    virtual CUIElement * GetTemplateChildNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CListViewBaseItemChrome@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CListViewBaseItemChrome@@UEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    virtual long GetValue(CDependencyProperty const *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToChromedState@CListViewBaseItemChrome@@QEAAJPEBGIPEAI@Z
    long GoToChromedState(unsigned short const *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasTemplateChild@CListViewBaseItemChrome@@UEAA_NXZ
    virtual bool HasTemplateChild();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateRender@CListViewBaseItemChrome@@QEAAXXZ
    void InvalidateRender();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRoundedListViewBaseItemChromeEnabled@CListViewBaseItemChrome@@SA_NPEAVCCoreServices@@@Z
    static bool IsRoundedListViewBaseItemChromeEnabled(CCoreServices *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRoundedListViewBaseItemChromeForced@CListViewBaseItemChrome@@SA_NXZ
    static bool IsRoundedListViewBaseItemChromeForced();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutRoundHelper@CListViewBaseItemChrome@@QEAAXPEAUXRECTF_RB@@@Z
    void LayoutRoundHelper(XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutRoundHelper@CListViewBaseItemChrome@@QEAAXPEAUXSIZEF@@@Z
    void LayoutRoundHelper(XSIZEF *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockLayersForAnimation@CListViewBaseItemChrome@@QEAAJPEAVListViewBaseItemAnimationCommand@@PEAI@Z
    long LockLayersForAnimation(ListViewBaseItemAnimationCommand *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWCleanDirtyFlags@CListViewBaseItemChrome@@UEAAXXZ
    virtual void NWCleanDirtyFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRenderPreChildrenEdgesVirtual@CListViewBaseItemChrome@@UEAAJAEBUSharedRenderParams@@AEBUNWRenderParams@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@@Z
    virtual long NWRenderPreChildrenEdgesVirtual(SharedRenderParams const &, NWRenderParams const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetContentDirty@CListViewBaseItemChrome@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetContentDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveInnerSelectionBorder@CListViewBaseItemChrome@@QEAAJXZ
    long RemoveInnerSelectionBorder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveMultiSelectCheckBox@CListViewBaseItemChrome@@QEAAJXZ
    long RemoveMultiSelectCheckBox();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveOuterBorder@CListViewBaseItemChrome@@QEAAJXZ
    long RemoveOuterBorder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTemplateChild@CListViewBaseItemChrome@@UEAAJXZ
    virtual long RemoveTemplateChild();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderLayer@CListViewBaseItemChrome@@QEAAJPEAVIContentRenderer@@W4ListViewBaseItemChromeLayerPosition@@@Z
    long RenderLayer(IContentRenderer *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetChromedListViewBaseItem@CListViewBaseItemChrome@@QEAAJPEAVCUIElement@@@Z
    long SetChromedListViewBaseItem(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDragItemsCount@CListViewBaseItemChrome@@QEAAJI@Z
    long SetDragItemsCount(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSwipeHintCheckOpacity@CListViewBaseItemChrome@@QEAAJM@Z
    long SetSwipeHintCheckOpacity(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CListViewBaseItemChrome@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldDrawDottedLinesFocusVisual@CListViewBaseItemChrome@@QEAAJPEA_N@Z
    long ShouldDrawDottedLinesFocusVisual(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseLayoutRounding@CListViewBaseItemChrome@@QEAAIXZ
    unsigned int ShouldUseLayoutRounding();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockLayersForAnimationAndDisposeCommand@CListViewBaseItemChrome@@QEAAXPEAVListViewBaseItemAnimationCommand@@@Z
    void UnlockLayersForAnimationAndDisposeCommand(ListViewBaseItemAnimationCommand *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CListViewBaseItemChrome@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CListViewBaseItemChrome@@IEAA@PEAVCCoreServices@@@Z
    CListViewBaseItemChrome(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateContentBounds@CListViewBaseItemChrome@@MEAAJPEAUXRECTF_RB@@@Z
    virtual long GenerateContentBounds(XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CListViewBaseItemChrome@@MEAAJAEBUXPOINTF@@PEAI@Z
    virtual long HitTestLocalInternal(XPOINTF const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CListViewBaseItemChrome@@MEAAJAEBVHitTestPolygon@@PEAI@Z
    virtual long HitTestLocalInternal(HitTestPolygon const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CListViewBaseItemChrome@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CListViewBaseItemChrome@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged(PropertyChangedParams const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CListViewBaseItemChrome@@MEAA@XZ
    virtual ~CListViewBaseItemChrome();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSecondaryChrome@CListViewBaseItemChrome@@AEAAJXZ
    long AddSecondaryChrome();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendCheckmarkTransform@CListViewBaseItemChrome@@AEAAXUXRECTF_WH@@PEAVCMILMatrix@@@Z
    void AppendCheckmarkTransform(XRECTF_WH, CMILMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendEarmarkTransform@CListViewBaseItemChrome@@AEAAXUXRECTF_WH@@PEAVCMILMatrix@@@Z
    void AppendEarmarkTransform(XRECTF_WH, CMILMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeNewStyle@CListViewBaseItemChrome@@AEAAJUXSIZEF@@AEAU2@@Z
    long ArrangeNewStyle(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeTemplateChild@CListViewBaseItemChrome@@AEAAJAEAUXRECTF_WH@@@Z
    long ArrangeTemplateChild(XRECTF_WH &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeReorderHintOffset@CListViewBaseItemChrome@@AEAAJW4ReorderHintStates@1@PEAUXPOINTF@@@Z
    long ComputeReorderHintOffset(int, XPOINTF *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeSwipeHintOffset@CListViewBaseItemChrome@@AEAAJW4SelectionHintStates@1@PEAUXPOINTF@@@Z
    long ComputeSwipeHintOffset(int, XPOINTF *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawBaseLayer@CListViewBaseItemChrome@@AEAAJPEAVIContentRenderer@@UXRECTF_WH@@@Z
    long DrawBaseLayer(IContentRenderer *, XRECTF_WH);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawDragOverlayLayer@CListViewBaseItemChrome@@AEAAJPEAVIContentRenderer@@UXRECTF_WH@@@Z
    long DrawDragOverlayLayer(IContentRenderer *, XRECTF_WH);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawDragOverlayLayerNewStyle@CListViewBaseItemChrome@@AEAAJPEAVIContentRenderer@@UXRECTF_WH@@@Z
    long DrawDragOverlayLayerNewStyle(IContentRenderer *, XRECTF_WH);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawOverContentLayer@CListViewBaseItemChrome@@AEAAJPEAVIContentRenderer@@UXRECTF_WH@@@Z
    long DrawOverContentLayer(IContentRenderer *, XRECTF_WH);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawOverContentLayerNewStyle@CListViewBaseItemChrome@@AEAAJPEAVIContentRenderer@@UXRECTF_WH@@@Z
    long DrawOverContentLayerNewStyle(IContentRenderer *, XRECTF_WH);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawRevealBackground@CListViewBaseItemChrome@@AEAAJPEAVIContentRenderer@@UXRECTF_WH@@@Z
    long DrawRevealBackground(IContentRenderer *, XRECTF_WH);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawUnderContentLayer@CListViewBaseItemChrome@@AEAAJPEAVIContentRenderer@@UXRECTF_WH@@@Z
    long DrawUnderContentLayer(IContentRenderer *, XRECTF_WH);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawUnderContentLayerNewStyle@CListViewBaseItemChrome@@AEAAJPEAVIContentRenderer@@UXRECTF_WH@@@Z
    long DrawUnderContentLayerNewStyle(IContentRenderer *, XRECTF_WH);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBackplate@CListViewBaseItemChrome@@AEAAJXZ
    long EnsureBackplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDragOverlayTextBlock@CListViewBaseItemChrome@@AEAAJXZ
    long EnsureDragOverlayTextBlock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInnerSelectionBorder@CListViewBaseItemChrome@@AEAAJXZ
    long EnsureInnerSelectionBorder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureMultiSelectCheckBox@CListViewBaseItemChrome@@AEAAJXZ
    long EnsureMultiSelectCheckBox();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureOuterBorder@CListViewBaseItemChrome@@AEAAJXZ
    long EnsureOuterBorder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSelectionIndicator@CListViewBaseItemChrome@@AEAAJXZ
    long EnsureSelectionIndicator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTransitionTarget@CListViewBaseItemChrome@@AEAAJXZ
    long EnsureTransitionTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateEdgesCommon@CListViewBaseItemChrome@@AEAAJPEAVCFrameVectorBuffer@@PEBVCMILMatrix@@IIIMPEAVCLayer@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@@Z
    long GenerateEdgesCommon(CFrameVectorBuffer *, CMILMatrix const *, unsigned int, unsigned int, unsigned int, float, CLayer *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCheckBoxCornerRadius@CListViewBaseItemChrome@@AEBA?AUXRECTF_CR@@XZ
    XRECTF_CR GetCheckBoxCornerRadius() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisabledOpacity@CListViewBaseItemChrome@@AEBAMXZ
    float GetDisabledOpacity() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGeneralCornerRadius@CListViewBaseItemChrome@@AEBA?AUXRECTF_CR@@XZ
    XRECTF_CR GetGeneralCornerRadius() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentListViewBaseItemNoRef@CListViewBaseItemChrome@@AEAAJPEAPEAVCContentControl@@@Z
    long GetParentListViewBaseItemNoRef(CContentControl * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerOverBackgroundMargin@CListViewBaseItemChrome@@AEBA?AUXRECTF_RB@@XZ
    XRECTF_RB GetPointerOverBackgroundMargin() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReorderHintOffset@CListViewBaseItemChrome@@AEBAMXZ
    float GetReorderHintOffset() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRevealBackgroundBrushNoRef@CListViewBaseItemChrome@@AEBAPEAVCBrush@@XZ
    CBrush * GetRevealBackgroundBrushNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRevealBackgroundShowsAboveContent@CListViewBaseItemChrome@@AEBA_NXZ
    bool GetRevealBackgroundShowsAboveContent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRevealBorderBrushNoRef@CListViewBaseItemChrome@@AEBAPEAVCBrush@@XZ
    CBrush * GetRevealBorderBrushNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRevealBorderThickness@CListViewBaseItemChrome@@AEBA?AUXRECTF_RB@@XZ
    XRECTF_RB GetRevealBorderThickness() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedBorderThickness@CListViewBaseItemChrome@@AEBA?AUXRECTF_RB@@XZ
    XRECTF_RB GetSelectedBorderThickness() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionCheckMarkVisualEnabled@CListViewBaseItemChrome@@AEBA_NXZ
    bool GetSelectionCheckMarkVisualEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionIndicatorCornerRadius@CListViewBaseItemChrome@@AEBA?AUXRECTF_CR@@XZ
    XRECTF_CR GetSelectionIndicatorCornerRadius() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionIndicatorHeightFromAvailableHeight@CListViewBaseItemChrome@@AEBAMM@Z
    float GetSelectionIndicatorHeightFromAvailableHeight(float) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionIndicatorMode@CListViewBaseItemChrome@@AEBA?AW4ListViewItemPresenterSelectionIndicatorMode@DirectUI@@XZ
    int GetSelectionIndicatorMode() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToChromedStateNewStyle@CListViewBaseItemChrome@@AEAAJPEBGIPEAI@Z
    long GoToChromedStateNewStyle(unsigned short const *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsChromeForGridViewItem@CListViewBaseItemChrome@@AEBA_NXZ
    bool IsChromeForGridViewItem() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsChromeForListViewItem@CListViewBaseItemChrome@@AEBA_NXZ
    bool IsChromeForListViewItem() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInSelectionIndicatorMode@CListViewBaseItemChrome@@AEBA_NXZ
    bool IsInSelectionIndicatorMode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNullCompositionBrush@CListViewBaseItemChrome@@CA_NPEAVCBrush@@@Z
    static bool IsNullCompositionBrush(CBrush *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaqueBrush@CListViewBaseItemChrome@@CA_NPEAVCBrush@@@Z
    static bool IsOpaqueBrush(CBrush *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOuterBorderBrushOpaque@CListViewBaseItemChrome@@AEBA_NXZ
    bool IsOuterBorderBrushOpaque() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRoundedListViewBaseItemChromeEnabled@CListViewBaseItemChrome@@AEBA_NXZ
    bool IsRoundedListViewBaseItemChromeEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelectionIndicatorVisualEnabled@CListViewBaseItemChrome@@AEBA_NXZ
    bool IsSelectionIndicatorVisualEnabled() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureNewStyle@CListViewBaseItemChrome@@AEAAJUXSIZEF@@AEAU2@@Z
    long MeasureNewStyle(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChangedNewStyle@CListViewBaseItemChrome@@AEAAJAEBUPropertyChangedParams@@@Z
    long OnPropertyChangedNewStyle(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareCheckPath@CListViewBaseItemChrome@@AEAAJXZ
    long PrepareCheckPath();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackplateBackground@CListViewBaseItemChrome@@AEAAJXZ
    long SetBackplateBackground();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackplateCornerRadius@CListViewBaseItemChrome@@AEAAJXZ
    long SetBackplateCornerRadius();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackplateMargin@CListViewBaseItemChrome@@AEAAJXZ
    long SetBackplateMargin();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDragOverlayTextBlockProperties@CListViewBaseItemChrome@@AEAAJXZ
    long SetDragOverlayTextBlockProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDragOverlayTextBlockVisible@CListViewBaseItemChrome@@AEAAJI@Z
    long SetDragOverlayTextBlockVisible(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForegroundBrush@CListViewBaseItemChrome@@AEAAJXZ
    long SetForegroundBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGeneralCornerRadius@CListViewBaseItemChrome@@AEAAJV?$xref_ptr@VCBorder@@@@@Z
    long SetGeneralCornerRadius(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInnerSelectionBorderBrush@CListViewBaseItemChrome@@AEAAJXZ
    long SetInnerSelectionBorderBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInnerSelectionBorderCornerRadius@CListViewBaseItemChrome@@AEAAJXZ
    long SetInnerSelectionBorderCornerRadius();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInnerSelectionBorderProperties@CListViewBaseItemChrome@@AEAAJXZ
    long SetInnerSelectionBorderProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInnerSelectionBorderThickness@CListViewBaseItemChrome@@AEAAJXZ
    long SetInnerSelectionBorderThickness();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMultiSelectCheckBoxBackground@CListViewBaseItemChrome@@AEAAJXZ
    long SetMultiSelectCheckBoxBackground();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMultiSelectCheckBoxBorder@CListViewBaseItemChrome@@AEAAJXZ
    long SetMultiSelectCheckBoxBorder();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMultiSelectCheckBoxForeground@CListViewBaseItemChrome@@AEAAJXZ
    long SetMultiSelectCheckBoxForeground();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMultiSelectCheckBoxProperties@CListViewBaseItemChrome@@AEAAJXZ
    long SetMultiSelectCheckBoxProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOuterBorderBrush@CListViewBaseItemChrome@@AEAAJXZ
    long SetOuterBorderBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOuterBorderCornerRadius@CListViewBaseItemChrome@@AEAAJXZ
    long SetOuterBorderCornerRadius();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOuterBorderThickness@CListViewBaseItemChrome@@AEAAJXZ
    long SetOuterBorderThickness();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelectedForegroundBrush@CListViewBaseItemChrome@@AEAAJXZ
    long SetSelectedForegroundBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelectionIndicatorBackground@CListViewBaseItemChrome@@AEAAJXZ
    long SetSelectionIndicatorBackground();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelectionIndicatorCornerRadius@CListViewBaseItemChrome@@AEAAJXZ
    long SetSelectionIndicatorCornerRadius();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWrongParentError@CListViewBaseItemChrome@@AEAAJXZ
    long SetWrongParentError();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldDrawDragOverlayLayerHere@CListViewBaseItemChrome@@AEAAIW4ListViewBaseItemChromeLayerPosition@@@Z
    unsigned int ShouldDrawDragOverlayLayerHere(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldDrawOverContentLayerHere@CListViewBaseItemChrome@@AEAAIW4ListViewBaseItemChromeLayerPosition@@@Z
    unsigned int ShouldDrawOverContentLayerHere(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBordersParenting@CListViewBaseItemChrome@@AEAAJXZ
    long UpdateBordersParenting();
};

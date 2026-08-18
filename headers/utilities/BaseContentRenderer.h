#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 46 member(s).
class BaseContentRenderer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BorderLikeElementPostChildrenRender@BaseContentRenderer@@UEAAJPEAVCFrameworkElement@@@Z
    virtual long BorderLikeElementPostChildrenRender(CFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BorderRenderContent@BaseContentRenderer@@UEAAJPEAVCBorder@@@Z
    virtual long BorderRenderContent(CBorder *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheRender@BaseContentRenderer@@UEAAJPEAVCUIElement@@@Z
    virtual long CacheRender(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalendarViewBaseItemChromeRenderLayer@BaseContentRenderer@@UEAAJPEAVCCalendarViewBaseItemChrome@@W4CalendarViewBaseItemChromeLayerPosition@@@Z
    virtual long CalendarViewBaseItemChromeRenderLayer(CCalendarViewBaseItemChrome *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContentControlItemRender@BaseContentRenderer@@UEAAJPEAVCContentControl@@@Z
    virtual long ContentControlItemRender(CContentControl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContentControlPostChildrenRender@BaseContentRenderer@@UEAAJPEAVCContentControl@@@Z
    virtual long ContentControlPostChildrenRender(CContentControl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContentPresenterRenderContent@BaseContentRenderer@@UEAAJPEAVCContentPresenter@@@Z
    virtual long ContentPresenterRenderContent(CContentPresenter *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementRenderParams@BaseContentRenderer@@UEBAPEAUHWElementRenderParams@@XZ
    virtual HWElementRenderParams * GetElementRenderParams() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderParams@BaseContentRenderer@@UEBAPEBUHWRenderParams@@XZ
    virtual HWRenderParams const * GetRenderParams() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformToRoot@BaseContentRenderer@@UEBAPEBVCTransformToRoot@@XZ
    virtual CTransformToRoot const * GetTransformToRoot() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIElement@BaseContentRenderer@@UEAAPEAVCUIElement@@XZ
    virtual CUIElement * GetUIElement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUpdatedShapeRealization@BaseContentRenderer@@UEBA_NXZ
    virtual bool GetUpdatedShapeRealization() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlyphsRenderContent@BaseContentRenderer@@UEAAJPEAVCGlyphs@@@Z
    virtual long GlyphsRenderContent(CGlyphs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImageRenderContent@BaseContentRenderer@@UEAAJPEAVCImage@@@Z
    virtual long ImageRenderContent(CImage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ListViewBaseItemChromeRenderLayer@BaseContentRenderer@@UEAAJPEAVCListViewBaseItemChrome@@W4ListViewBaseItemChromeLayerPosition@@@Z
    virtual long ListViewBaseItemChromeRenderLayer(CListViewBaseItemChrome *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaskCombinedRenderHelper@BaseContentRenderer@@UEAAJPEAVCUIElement@@PEAVIMaskPartRenderParams@@1_N@Z
    virtual long MaskCombinedRenderHelper(CUIElement *, IMaskPartRenderParams *, IMaskPartRenderParams *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PanelRenderContent@BaseContentRenderer@@UEAAJPEAVCPanel@@_N@Z
    virtual long PanelRenderContent(CPanel *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopupRootRenderContent@BaseContentRenderer@@UEAAJPEAVCPopupRoot@@@Z
    virtual long PopupRootRenderContent(CPopupRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RectangleRenderContent@BaseContentRenderer@@UEAAJPEAVCRectangle@@@Z
    virtual long RectangleRenderContent(CRectangle *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderFocusRectangle@BaseContentRenderer@@UEAAJPEAVCCoreServices@@UXRECTF_WH@@_NMMPEAVCBrush@@@Z
    virtual long RenderFocusRectangle(CCoreServices *, XRECTF_WH, bool, float, float, CBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderFocusRectangle@BaseContentRenderer@@UEAAJPEAVCUIElement@@AEAUFocusRectangleOptions@@@Z
    virtual long RenderFocusRectangle(CUIElement *, FocusRectangleOptions &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RichTextBlockOverflowPostChildrenRender@BaseContentRenderer@@UEAAJPEAVCRichTextBlockOverflow@@@Z
    virtual long RichTextBlockOverflowPostChildrenRender(CRichTextBlockOverflow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RichTextBlockOverflowRenderContent@BaseContentRenderer@@UEAAJPEAVCRichTextBlockOverflow@@@Z
    virtual long RichTextBlockOverflowRenderContent(CRichTextBlockOverflow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RichTextBlockPostChildrenRender@BaseContentRenderer@@UEAAJPEAVCRichTextBlock@@@Z
    virtual long RichTextBlockPostChildrenRender(CRichTextBlock *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RichTextBlockRenderContent@BaseContentRenderer@@UEAAJPEAVCRichTextBlock@@@Z
    virtual long RichTextBlockRenderContent(CRichTextBlock *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElementRenderParams@BaseContentRenderer@@UEAAXPEAUHWElementRenderParams@@@Z
    virtual void SetElementRenderParams(HWElementRenderParams *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRenderParams@BaseContentRenderer@@UEAAXPEBUHWRenderParams@@@Z
    virtual void SetRenderParams(HWRenderParams const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformToRoot@BaseContentRenderer@@UEAAXPEBVCTransformToRoot@@@Z
    virtual void SetTransformToRoot(CTransformToRoot const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUIElement@BaseContentRenderer@@UEAAXPEAVCUIElement@@@Z
    virtual void SetUIElement(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUpdatedShapeRealization@BaseContentRenderer@@UEAAX_N@Z
    virtual void SetUpdatedShapeRealization(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextBlockPostChildrenRender@BaseContentRenderer@@UEAAJPEAVCTextBlock@@@Z
    virtual long TextBlockPostChildrenRender(CTextBlock *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextBlockRenderContent@BaseContentRenderer@@UEAAJPEAVCTextBlock@@@Z
    virtual long TextBlockRenderContent(CTextBlock *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextBoxViewRenderContent@BaseContentRenderer@@UEAAJPEAVCTextBoxView@@@Z
    virtual long TextBoxViewRenderContent(CTextBoxView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UserControlRenderBackground@BaseContentRenderer@@UEAAJPEAVCUserControl@@@Z
    virtual long UserControlRenderBackground(CUserControl *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BorderHWRenderHelper@BaseContentRenderer@@IEAAJPEAVCFrameworkElement@@@Z
    long BorderHWRenderHelper(CFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BorderRenderHelper@BaseContentRenderer@@IEAAJPEAVCFrameworkElement@@@Z
    long BorderRenderHelper(CFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheRasterizeSoftware@BaseContentRenderer@@KAJPEAVCCompositeVectorBuffer@@PEAUIPALSurface@@@Z
    static long CacheRasterizeSoftware(CCompositeVectorBuffer *, IPALSurface *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheRenderSoftware@BaseContentRenderer@@KAJI_NPEAVCUIElement@@PEBVCMILMatrix@@IPEAPEAVCCompositeVectorBuffer@@@Z
    static long CacheRenderSoftware(unsigned int, bool, CUIElement *, CMILMatrix const *, unsigned int, CCompositeVectorBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushParameters@BaseContentRenderer@@IEAAJPEAVHWTextureManager@@PEAVSurfaceCache@@PEAVCBrush@@_NPEAVCUIElement@@PEBUXRECTF_RB@@PEBUXRECTF_WH@@6PEAMPEAIPEA_NPEAVCTileIterator@@PEAVCMILMatrix@@@Z
    long GetBrushParameters(HWTextureManager *, SurfaceCache *, CBrush *, bool, CUIElement *, XRECTF_RB const *, XRECTF_WH const *, XRECTF_WH const *, float *, unsigned int *, bool *, CTileIterator *, CMILMatrix *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeFromVectorBuffer@BaseContentRenderer@@KAXPEAVCCompositeVectorBuffer@@PEAI1@Z
    static void GetSizeFromVectorBuffer(CCompositeVectorBuffer *, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaskPartEnsureRealizationTexture@BaseContentRenderer@@KAJAEBUHWRenderParamsBase@@PEAVIMaskPartRenderParams@@IIPEAVHWShapeRealization@@_NPEA_N@Z
    static long MaskPartEnsureRealizationTexture(HWRenderParamsBase const &, IMaskPartRenderParams *, unsigned int, unsigned int, HWShapeRealization *, bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaskRasterizeSoftware@BaseContentRenderer@@KAJPEAVCCompositeVectorBuffer@@PEAUIPALSurface@@1@Z
    static long MaskRasterizeSoftware(CCompositeVectorBuffer *, IPALSurface *, IPALSurface *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderAlphaMask@BaseContentRenderer@@KAJPEAVCUIElement@@AEBUHWRenderParamsBase@@PEBVCMILMatrix@@PEAVHWShapeRealization@@II_NPEAPEAVCCompositeVectorBuffer@@PEAI@Z
    static long RenderAlphaMask(CUIElement *, HWRenderParamsBase const &, CMILMatrix const *, HWShapeRealization *, unsigned int, unsigned int, bool, CCompositeVectorBuffer * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderFocusRectangleWithThickness@BaseContentRenderer@@IEAAJPEAVCCoreServices@@AEBUXRECTF_WH@@PEAVCBrush@@AEBUXRECTF_RB@@@Z
    long RenderFocusRectangleWithThickness(CCoreServices *, XRECTF_WH const &, CBrush *, XRECTF_RB const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SoftwareEnsureRealizationTexture@BaseContentRenderer@@KAJPEAVCUIElement@@PEAVCMILMatrix@@AEBUHWRenderParams@@PEAVHWCacheRealization@@I@Z
    static long SoftwareEnsureRealizationTexture(CUIElement *, CMILMatrix *, HWRenderParams const &, HWCacheRealization *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwapChainPanelRenderContent@BaseContentRenderer@@IEAAJPEAVCSwapChainPanel@@@Z
    long SwapChainPanelRenderContent(CSwapChainPanel *);
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
class VisualContentRenderer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionBrush@VisualContentRenderer@@QEAA?AV?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@PEAVCBrush@@PEAVCShape@@@Z
    WindissectOpaque GetCompositionBrush(CBrush *, CShape *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositor5@VisualContentRenderer@@QEBA?AV?$ComPtr@UICompositor5@Composition@UI@Windows@@@WRL@Microsoft@@XZ
    WindissectOpaque GetCompositor5() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedD2DFactoryNoRef@VisualContentRenderer@@QEBAPEAVCD2DFactory@@XZ
    CD2DFactory * GetSharedD2DFactoryNoRef() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopRenderDataList@VisualContentRenderer@@UEAAXXZ
    virtual void PopRenderDataList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateVisual@VisualContentRenderer@@QEBAJAEBUXRECTF_WH@@PEAUIVisual@Composition@UI@Windows@@@Z
    long PopulateVisual(XRECTF_WH const &, ::Windows::UI::Composition::IVisual *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushRenderDataList@VisualContentRenderer@@UEAAXPEAV?$xvector@PEAUIUnknown@@@@_N@Z
    virtual void PushRenderDataList(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderShape@VisualContentRenderer@@UEAAJPEAVCShape@@@Z
    virtual long RenderShape(CShape *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheRenderOverride@VisualContentRenderer@@MEAAJPEAVHWCacheRealization@@@Z
    virtual long CacheRenderOverride(HWCacheRealization *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateTileBrushTransform@VisualContentRenderer@@MEBAJPEAVCTileBrush@@PEBUXRECTF_WH@@PEAVCMILMatrix@@2@Z
    virtual long CalculateTileBrushTransform(CTileBrush *, XRECTF_WH const *, CMILMatrix *, CMILMatrix *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?GeneralImageRenderContent@VisualContentRenderer@@MEAAJAEBUXRECTF_WH@@0PEAVCBrush@@AEBUBrushParams@@PEAVCUIElement@@PEBUXRECTF_RB@@PEAVHWTexture@@_N@Z
    virtual long GeneralImageRenderContent(XRECTF_WH const &, XRECTF_WH const &, CBrush *, BrushParams const &, CUIElement *, XRECTF_RB const *, HWTexture *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionBrush@VisualContentRenderer@@IEAA?AV?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@AEBUXRECTF_WH@@0W4AAEdge@@PEAVCBrush@@AEBUBrushParams@@PEAVHWTexture@@4PEBVCMILMatrix@@PEBUXRECTF_RB@@_NPEAUICompositionBrush@Composition@UI@Windows@@PEBVCUIElement@@@Z
    WindissectOpaque GetCompositionBrush(XRECTF_WH const &, XRECTF_WH const &, int, CBrush *, BrushParams const &, HWTexture *, HWTexture *, CMILMatrix const *, XRECTF_RB const *, bool, ::Windows::UI::Composition::ICompositionBrush *, CUIElement const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MediaElementRenderContent@VisualContentRenderer@@MEAAJPEAVCMediaBase@@@Z
    virtual long MediaElementRenderContent(CMediaBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderSolidColorRectangle@VisualContentRenderer@@MEAAJAEBUXRECTF_WH@@PEAVCSolidColorBrush@@@Z
    virtual long RenderSolidColorRectangle(XRECTF_WH const &, CSolidColorBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderTextRealization@VisualContentRenderer@@MEAAJAEBUXRECTF_WH@@PEAVHWTextRealization@@_N@Z
    virtual long RenderTextRealization(XRECTF_WH const &, HWTextRealization *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldCreateTextureForLinearGradient@VisualContentRenderer@@MEAA_NPEAVCLinearGradientBrush@@@Z
    virtual bool ShouldCreateTextureForLinearGradient(CLinearGradientBrush *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureClip@VisualContentRenderer@@AEBAJPEAUICompositor@Composition@UI@Windows@@PEAUIVisual@345@AEBUXRECTF_WH@@AEBVHWClip@@@Z
    long EnsureClip(::Windows::UI::Composition::ICompositor *, ::Windows::UI::Composition::IVisual *, XRECTF_WH const &, HWClip const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureShapeVisual@VisualContentRenderer@@AEBAXPEAVCShape@@PEAPEAUIShapeVisual@Composition@UI@Windows@@PEAPEAUIVisual@456@@Z
    void EnsureShapeVisual(CShape *, ::Windows::UI::Composition::IShapeVisual * *, ::Windows::UI::Composition::IVisual * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSpriteVisual@VisualContentRenderer@@AEBAJPEAUICompositor@Composition@UI@Windows@@AEBUXRECTF_WH@@W4AAEdge@@PEAPEAUISpriteVisual@345@PEAPEAUIVisual@345@@Z
    long EnsureSpriteVisual(::Windows::UI::Composition::ICompositor *, XRECTF_WH const &, int, ::Windows::UI::Composition::ISpriteVisual * *, ::Windows::UI::Composition::IVisual * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LinkVisual@VisualContentRenderer@@AEAAJPEAVCBrush@@0PEAUIVisual@Composition@UI@Windows@@@Z
    long LinkVisual(CBrush *, CBrush *, ::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderPrimitive@VisualContentRenderer@@AEAAJPEBVCUIElement@@AEBUXRECTF_WH@@1W4AAEdge@@PEAVCBrush@@AEBUBrushParams@@PEAVHWTexture@@5PEBVCMILMatrix@@PEBUXRECTF_RB@@_N@Z
    long RenderPrimitive(CUIElement const *, XRECTF_WH const &, XRECTF_WH const &, int, CBrush *, BrushParams const &, HWTexture *, HWTexture *, CMILMatrix const *, XRECTF_RB const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSpriteVisualBeTransparentForInput@VisualContentRenderer@@AEBA_NXZ
    bool ShouldSpriteVisualBeTransparentForInput() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnparentVisual@VisualContentRenderer@@AEAAXPEAUIVisual@Composition@UI@Windows@@@Z
    void UnparentVisual(::Windows::UI::Composition::IVisual *);
};

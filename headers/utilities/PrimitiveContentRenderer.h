#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class PrimitiveContentRenderer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopRenderDataList@PrimitiveContentRenderer@@UEAAXXZ
    virtual void PopRenderDataList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushRenderDataList@PrimitiveContentRenderer@@UEAAXPEAV?$xvector@PEAUIUnknown@@@@_N@Z
    virtual void PushRenderDataList(WindissectOpaque *, bool);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRectangleWithBrushParameters@PrimitiveContentRenderer@@IEAAJAEBUXRECTF_WH@@0PEAVCBrush@@PEAVCUIElement@@PEBUXRECTF_RB@@PEAVHWTexture@@_N@Z
    long AddRectangleWithBrushParameters(XRECTF_WH const &, XRECTF_WH const &, CBrush *, CUIElement *, XRECTF_RB const *, HWTexture *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheRenderOverride@PrimitiveContentRenderer@@MEAAJPEAVHWCacheRealization@@@Z
    virtual long CacheRenderOverride(HWCacheRealization *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateTileBrushTransform@PrimitiveContentRenderer@@MEBAJPEAVCTileBrush@@PEBUXRECTF_WH@@PEAVCMILMatrix@@2@Z
    virtual long CalculateTileBrushTransform(CTileBrush *, XRECTF_WH const *, CMILMatrix *, CMILMatrix *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?GeneralImageRenderContent@PrimitiveContentRenderer@@MEAAJAEBUXRECTF_WH@@0PEAVCBrush@@AEBUBrushParams@@PEAVCUIElement@@PEBUXRECTF_RB@@PEAVHWTexture@@_N@Z
    virtual long GeneralImageRenderContent(XRECTF_WH const &, XRECTF_WH const &, CBrush *, BrushParams const &, CUIElement *, XRECTF_RB const *, HWTexture *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MediaElementRenderContent@PrimitiveContentRenderer@@MEAAJPEAVCMediaBase@@@Z
    virtual long MediaElementRenderContent(CMediaBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderShape@PrimitiveContentRenderer@@MEAAJPEAVCShape@@@Z
    virtual long RenderShape(CShape *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderSolidColorRectangle@PrimitiveContentRenderer@@MEAAJAEBUXRECTF_WH@@PEAVCSolidColorBrush@@@Z
    virtual long RenderSolidColorRectangle(XRECTF_WH const &, CSolidColorBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderTextRealization@PrimitiveContentRenderer@@MEAAJAEBUXRECTF_WH@@PEAVHWTextRealization@@_N@Z
    virtual long RenderTextRealization(XRECTF_WH const &, HWTextRealization *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldCreateTextureForLinearGradient@PrimitiveContentRenderer@@MEAA_NPEAVCLinearGradientBrush@@@Z
    virtual bool ShouldCreateTextureForLinearGradient(CLinearGradientBrush *);
};

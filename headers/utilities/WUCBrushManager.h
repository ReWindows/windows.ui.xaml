#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
class WUCBrushManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanUpBrushTransition@WUCBrushManager@@QEAAXAEBVCUIElement@@W4ElementBrushProperty@@@Z
    void CleanUpBrushTransition(CUIElement const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDropShadowD2DFactory@WUCBrushManager@@QEAA?AV?$ComPtr@UID2D1Factory1@@@WRL@Microsoft@@XZ
    WindissectOpaque EnsureDropShadowD2DFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureResources@WUCBrushManager@@QEAAXPEAVSharedTransitionAnimations@@PEAUICompositor@Composition@UI@Windows@@PEAUICompositionGraphicsDevice@456@@Z
    void EnsureResources(SharedTransitionAnimations *, ::Windows::UI::Composition::ICompositor *, ::Windows::UI::Composition::ICompositionGraphicsDevice *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorBrush@WUCBrushManager@@QEAA?AV?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@PEAVCSolidColorBrush@@AEBUBrushParams@@@Z
    WindissectOpaque GetColorBrush(CSolidColorBrush *, BrushParams const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLinearGradientBrush@WUCBrushManager@@QEAA?AV?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@PEAVCLinearGradientBrush@@AEBUXRECTF_WH@@PEBVCMILMatrix@@@Z
    WindissectOpaque GetLinearGradientBrush(CLinearGradientBrush *, XRECTF_WH const &, CMILMatrix const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaskBrush@WUCBrushManager@@QEAA?AV?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@PEAUICompositionBrush@Composition@UI@Windows@@PEAVHWTexture@@PEAVCBrush@@AEBUBrushParams@@1PEBVCMILMatrix@@PEBUXRECTF_RB@@MM_NAEBUXRECTF_WH@@PEBVCUIElement@@PEAUICompositor@678@@Z
    WindissectOpaque GetMaskBrush(::Windows::UI::Composition::ICompositionBrush *, HWTexture *, CBrush *, BrushParams const &, HWTexture *, CMILMatrix const *, XRECTF_RB const *, float, float, bool, XRECTF_WH const &, CUIElement const *, ::Windows::UI::Composition::ICompositor *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaskBrush@WUCBrushManager@@QEAA?AV?$ComPtr@UICompositionMaskBrush@Composition@UI@Windows@@@WRL@Microsoft@@PEAUICompositionBrush@Composition@UI@Windows@@PEAVHWTexture@@PEBUXRECTF_RB@@MM_N@Z
    WindissectOpaque GetMaskBrush(::Windows::UI::Composition::ICompositionBrush *, HWTexture *, XRECTF_RB const *, float, float, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNineGridBrush@WUCBrushManager@@QEAA?AV?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@PEAUICompositionBrush@Composition@UI@Windows@@PEBUXRECTF_RB@@MM_NPEAVCBrush@@PEAVHWTexture@@PEBVCMILMatrix@@PEBUXRECTF_WH@@PEBVCUIElement@@PEAUICompositor@678@@Z
    WindissectOpaque GetNineGridBrush(::Windows::UI::Composition::ICompositionBrush *, XRECTF_RB const *, float, float, bool, CBrush *, HWTexture *, CMILMatrix const *, XRECTF_WH const *, CUIElement const *, ::Windows::UI::Composition::ICompositor *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNineGridBrush@WUCBrushManager@@QEAA?AV?$ComPtr@UICompositionNineGridBrush@Composition@UI@Windows@@@WRL@Microsoft@@PEAUICompositionBrush@Composition@UI@Windows@@PEBUXRECTF_RB@@MM_N@Z
    WindissectOpaque GetNineGridBrush(::Windows::UI::Composition::ICompositionBrush *, XRECTF_RB const *, float, float, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurfaceBrush@WUCBrushManager@@QEAA?AV?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@PEAUICompositionBrush@Composition@UI@Windows@@PEAVHWTexture@@PEBVCMILMatrix@@@Z
    WindissectOpaque GetSurfaceBrush(::Windows::UI::Composition::ICompositionBrush *, HWTexture *, CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutDropShadowBrushInCache@WUCBrushManager@@QEAAXAEBUDropShadowRecipe@@V?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Z
    void PutDropShadowBrushInCache(DropShadowRecipe const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCompResources@WUCBrushManager@@QEAAXXZ
    void ReleaseDCompResources();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUpBrushTransitionIfAllowed@WUCBrushManager@@QEAAXPEBVCBrush@@0AEBVCUIElement@@W4ElementBrushProperty@@AEBVCBrushTransition@@@Z
    void SetUpBrushTransitionIfAllowed(CBrush const *, CBrush const *, CUIElement const &, int, CBrushTransition const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WUCBrushManager@@QEAA@XZ
    WUCBrushManager();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WUCBrushManager@@UEAA@XZ
    virtual ~WUCBrushManager();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUpBrushTransitionIfAllowedHelper@WUCBrushManager@@AEAAXPEBVCBrush@@0AEBVCUIElement@@W4ElementBrushProperty@@UTimeSpan@Foundation@Windows@@@Z
    void SetUpBrushTransitionIfAllowedHelper(CBrush const *, CBrush const *, CUIElement const &, int, WindissectOpaque);
};

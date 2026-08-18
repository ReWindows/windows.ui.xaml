#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
namespace FocusRect {
class RevealFocusSource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildRevealFocusVisual@RevealFocusSource@FocusRect@@QEAA?AV?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@PEAUIVisual@Composition@UI@Windows@@PEAVCUIElement@@IAEBUXRECTF_RB@@_N@Z
    WindissectOpaque BuildRevealFocusVisual(::Windows::UI::Composition::IVisual *, CUIElement *, unsigned int, XRECTF_RB const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInsetsFromThickness@RevealFocusSource@FocusRect@@QEBA?AUXRECTF_RB@@AEBU3@@Z
    XRECTF_RB GetInsetsFromThickness(XRECTF_RB const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpotLightDuration@RevealFocusSource@FocusRect@@QEBA?AUTimeSpan@Foundation@Windows@@W4FocusNavigationDirection@DirectUI@@@Z
    WindissectOpaque GetSpotLightDuration(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpotLightSize@RevealFocusSource@FocusRect@@QEBAMXZ
    float GetSpotLightSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnimationEnabled@RevealFocusSource@FocusRect@@QEBA_NXZ
    bool IsAnimationEnabled() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@RevealFocusSource@FocusRect@@QEAAXW4ResetReason@12@@Z
    void Reset(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RevealFocusSource@FocusRect@@QEAA@XZ
    RevealFocusSource();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RevealFocusSource@FocusRect@@QEAA@XZ
    ~RevealFocusSource();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateColorEffect@RevealFocusSource@FocusRect@@CA?AV?$ComPtr@UIGraphicsEffect@Effects@Graphics@Windows@@@WRL@Microsoft@@IAEBVxstring_ptr_view@@@Z
    static WindissectOpaque CreateColorEffect(unsigned int, xstring_ptr_view const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEffectBrush@RevealFocusSource@FocusRect@@CA?AV?$ComPtr@UICompositionEffectBrush@Composition@UI@Windows@@@WRL@Microsoft@@PEAUICompositor@Composition@UI@Windows@@PEAUIGraphicsEffect@Effects@Graphics@9@@Z
    static WindissectOpaque CreateEffectBrush(::Windows::UI::Composition::ICompositor *, ::Windows::Graphics::Effects::IGraphicsEffect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEffectSourceBrush@RevealFocusSource@FocusRect@@CA?AV?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@PEAUICompositor@Composition@UI@Windows@@PEAUICompositionBrush@789@PEAUICompositionSurfaceBrush@789@AEBUXRECTF_RB@@MPEAVCLoadedImageSurface@@@Z
    static WindissectOpaque CreateEffectSourceBrush(::Windows::UI::Composition::ICompositor *, ::Windows::UI::Composition::ICompositionBrush *, ::Windows::UI::Composition::ICompositionSurfaceBrush *, XRECTF_RB const &, float, CLoadedImageSurface *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRevealFocusEffectBrush@RevealFocusSource@FocusRect@@CA?AV?$ComPtr@UICompositionEffectBrush@Composition@UI@Windows@@@WRL@Microsoft@@PEAUICompositor@Composition@UI@Windows@@PEAVCCoreServices@@I_NAEBUXRECTF_RB@@2PEAUICompositionEffectBrush@789@@Z
    static WindissectOpaque CreateRevealFocusEffectBrush(::Windows::UI::Composition::ICompositor *, CCoreServices *, unsigned int, bool, XRECTF_RB const &, bool, ::Windows::UI::Composition::ICompositionEffectBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRevealSurfaceBrush@RevealFocusSource@FocusRect@@CA?AV?$ComPtr@UICompositionSurfaceBrush@Composition@UI@Windows@@@WRL@Microsoft@@PEAUICompositor@Composition@UI@Windows@@PEAVCCoreServices@@AEBUXRECTF_RB@@@Z
    static WindissectOpaque CreateRevealSurfaceBrush(::Windows::UI::Composition::ICompositor *, CCoreServices *, XRECTF_RB const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTravelingDistance@RevealFocusSource@FocusRect@@AEBAMW4FocusNavigationDirection@DirectUI@@@Z
    float GetTravelingDistance(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeLightingEffects@RevealFocusSource@FocusRect@@AEAAXPEAUICompositor@Composition@UI@Windows@@PEAUIVisual@456@@Z
    void InitializeLightingEffects(::Windows::UI::Composition::ICompositor *, ::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupAmbientLight@RevealFocusSource@FocusRect@@CAXPEAUIAmbientLight@Composition@UI@Windows@@UColor@56@PEAUIVisual@456@M@Z
    static void SetupAmbientLight(::Windows::UI::Composition::IAmbientLight *, ::Windows::UI::Color, ::Windows::UI::Composition::IVisual *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupSpotLight@RevealFocusSource@FocusRect@@CAXPEAUISpotLight@Composition@UI@Windows@@UColor@56@PEAUIVisual@456@@Z
    static void SetupSpotLight(::Windows::UI::Composition::ISpotLight *, ::Windows::UI::Color, ::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseLightingEffect@RevealFocusSource@FocusRect@@CA_NXZ
    static bool UseLightingEffect();
};
} // namespace FocusRect

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 19 member(s).
namespace FocusRect {
class RevealFocusAnimator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimateLights@RevealFocusAnimator@FocusRect@@QEAAXPEAUISpriteVisual@Composition@UI@Windows@@AEBVRevealFocusSource@2@W4FocusNavigationDirection@DirectUI@@@Z
    void AnimateLights(::Windows::UI::Composition::ISpriteVisual *, WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPowerStatusChanged@RevealFocusAnimator@FocusRect@@QEAAJPEAUIInspectable@@0@Z
    long OnPowerStatusChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopLightAnimation@RevealFocusAnimator@FocusRect@@QEAAXAEBVRevealFocusSource@2@@Z
    void StopLightAnimation(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualOffset@RevealFocusAnimator@FocusRect@@QEBAXPEAUICompositionObject@Composition@UI@Windows@@PEAUISpriteVisual@456@AEBVRevealFocusSource@2@@Z
    void UpdateVisualOffset(::Windows::UI::Composition::ICompositionObject *, ::Windows::UI::Composition::ISpriteVisual *, WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualSize@RevealFocusAnimator@FocusRect@@QEBAXPEAUICompositionObject@Composition@UI@Windows@@PEAUISpriteVisual@456@AEBVRevealFocusSource@2@@Z
    void UpdateVisualSize(::Windows::UI::Composition::ICompositionObject *, ::Windows::UI::Composition::ISpriteVisual *, WindissectOpaque const &) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RevealFocusAnimator@FocusRect@@QEAA@XZ
    ~RevealFocusAnimator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimateDefaultLight@RevealFocusAnimator@FocusRect@@AEAAXPEAUICompositionObject@Composition@UI@Windows@@AEBVRevealFocusSource@2@_N@Z
    void AnimateDefaultLight(::Windows::UI::Composition::ICompositionObject *, WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimatePressLight@RevealFocusAnimator@FocusRect@@AEBAXAEBV?$ComPtr@UIAmbientLight@Composition@UI@Windows@@@WRL@Microsoft@@_N@Z
    void AnimatePressLight(WindissectOpaque const &, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimatePulsingLight@RevealFocusAnimator@FocusRect@@AEBAXAEBV?$ComPtr@UIAmbientLight@Composition@UI@Windows@@@WRL@Microsoft@@@Z
    void AnimatePulsingLight(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimateTravelingLight@RevealFocusAnimator@FocusRect@@AEBAXPEAUICompositionObject@Composition@UI@Windows@@AEBVRevealFocusSource@2@W4FocusNavigationDirection@DirectUI@@@Z
    void AnimateTravelingLight(::Windows::UI::Composition::ICompositionObject *, WindissectOpaque const &, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyAnimationBehavior@RevealFocusAnimator@FocusRect@@CAXPEAUIKeyFrameAnimation@Composition@UI@Windows@@UTimeSpan@Foundation@6@AEBUAnimationBehavior@12@@Z
    static void ApplyAnimationBehavior(::Windows::UI::Composition::IKeyFrameAnimation *, WindissectOpaque, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyScalarExpressionAnimation@RevealFocusAnimator@FocusRect@@CAXPEAUICompositor@Composition@UI@Windows@@PEAUICompositionObject@456@AEBVxstring_ptr_view@@12M222@Z
    static void ApplyScalarExpressionAnimation(::Windows::UI::Composition::ICompositor *, ::Windows::UI::Composition::ICompositionObject *, xstring_ptr_view const &, ::Windows::UI::Composition::ICompositionObject *, xstring_ptr_view const &, float, xstring_ptr_view const &, xstring_ptr_view const &, xstring_ptr_view const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreLongRunningAnimationsEnabled@RevealFocusAnimator@FocusRect@@CA_NPEAUIPowerManagerStatics@Power@System@Windows@@@Z
    static bool AreLongRunningAnimationsEnabled(::Windows::System::Power::IPowerManagerStatics *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScalarKeyFrameAnimationWithBehavior@RevealFocusAnimator@FocusRect@@CA?AV?$ComPtr@UIScalarKeyFrameAnimation@Composition@UI@Windows@@@WRL@Microsoft@@PEAUICompositor@Composition@UI@Windows@@UTimeSpan@Foundation@9@AEBUAnimationBehavior@12@@Z
    static WindissectOpaque CreateScalarKeyFrameAnimationWithBehavior(::Windows::UI::Composition::ICompositor *, WindissectOpaque, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVector3KeyFrameAnimationWithBehavior@RevealFocusAnimator@FocusRect@@CA?AV?$ComPtr@UIVector3KeyFrameAnimation@Composition@UI@Windows@@@WRL@Microsoft@@PEAUICompositor@Composition@UI@Windows@@UTimeSpan@Foundation@9@AEBUAnimationBehavior@12@@Z
    static WindissectOpaque CreateVector3KeyFrameAnimationWithBehavior(::Windows::UI::Composition::ICompositor *, WindissectOpaque, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultEasingFunction@RevealFocusAnimator@FocusRect@@CA?AV?$ComPtr@UICompositionEasingFunction@Composition@UI@Windows@@@WRL@Microsoft@@PEAUICompositor@Composition@UI@Windows@@@Z
    static WindissectOpaque GetDefaultEasingFunction(::Windows::UI::Composition::ICompositor *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIntensityDuration@RevealFocusAnimator@FocusRect@@CA?AUTimeSpan@Foundation@Windows@@AEBVRevealFocusSource@2@W4FocusNavigationDirection@DirectUI@@@Z
    static WindissectOpaque GetIntensityDuration(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertKeyFrame@RevealFocusAnimator@FocusRect@@CAXPEAUIScalarKeyFrameAnimation@Composition@UI@Windows@@AEBU?$KeyFrame@M@12@@Z
    static void InsertKeyFrame(::Windows::UI::Composition::IScalarKeyFrameAnimation *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldBreathe@RevealFocusAnimator@FocusRect@@AEAA_NAEBVRevealFocusSource@2@@Z
    bool ShouldBreathe(WindissectOpaque const &);
};
} // namespace FocusRect

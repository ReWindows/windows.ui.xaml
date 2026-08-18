#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class SharedTransitionAnimations {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushAnimationNoRef@SharedTransitionAnimations@@QEAAPEAUICompositionAnimation@Composition@UI@Windows@@PEAUICompositor@345@AEBV?$optional@UColor@UI@Windows@@@std_x17@@AEBUColor@45@AEBUTimeSpan@Foundation@5@@Z
    ::Windows::UI::Composition::ICompositionAnimation * GetBrushAnimationNoRef(::Windows::UI::Composition::ICompositor *, WindissectOpaque const &, ::Windows::UI::Color const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScalarAnimationNoRef@SharedTransitionAnimations@@QEAAPEAUICompositionAnimationBase@Composition@UI@Windows@@PEAUICompositor@345@AEBVHStringReference@Wrappers@WRL@Microsoft@@MAEBUTimeSpan@Foundation@5@@Z
    ::Windows::UI::Composition::ICompositionAnimationBase * GetScalarAnimationNoRef(::Windows::UI::Composition::ICompositor *, ::Microsoft::WRL::Wrappers::HStringReference const &, float, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVector3AnimationNoRef@SharedTransitionAnimations@@QEAAPEAUICompositionAnimationBase@Composition@UI@Windows@@PEAUICompositor@345@AEBVHStringReference@Wrappers@WRL@Microsoft@@AEBUVector3@Numerics@Foundation@5@1AEBUTimeSpan@Foundation@5@@Z
    ::Windows::UI::Composition::ICompositionAnimationBase * GetVector3AnimationNoRef(::Windows::UI::Composition::ICompositor *, ::Microsoft::WRL::Wrappers::HStringReference const &, WindissectOpaque &, ::Microsoft::WRL::Wrappers::HStringReference const &, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SharedTransitionAnimations@@QEAA@XZ
    ~SharedTransitionAnimations();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureEasingFunction@SharedTransitionAnimations@@AEAAXPEAUICompositor@Composition@UI@Windows@@@Z
    void EnsureEasingFunction(::Windows::UI::Composition::ICompositor *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnimationDuration@SharedTransitionAnimations@@AEAAXAEBV?$ComPtr@UIKeyFrameAnimation@Composition@UI@Windows@@@WRL@Microsoft@@AEBUTimeSpan@Foundation@Windows@@@Z
    void SetAnimationDuration(WindissectOpaque const &, WindissectOpaque const &);
};

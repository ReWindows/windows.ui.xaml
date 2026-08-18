#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class ConnectedAnimationConfiguration {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ConnectedAnimationConfiguration@DirectUI@@QEAA@XZ
    ConnectedAnimationConfiguration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultDuration@ConnectedAnimationConfiguration@DirectUI@@UEAA?BUTimeSpan@Foundation@Windows@@XZ
    virtual WindissectOpaque GetDefaultDuration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultEasingFunction@ConnectedAnimationConfiguration@DirectUI@@UEAAJPEAPEAUICompositionEasingFunction@Composition@UI@Windows@@@Z
    virtual long GetDefaultEasingFunction(::Windows::UI::Composition::ICompositionEasingFunction * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectPropertySet@ConnectedAnimationConfiguration@DirectUI@@UEAAJUVector3@Numerics@Foundation@Windows@@PEAPEAUICompositionPropertySet@Composition@UI@6@@Z
    virtual long GetEffectPropertySet(WindissectOpaque, ::Windows::UI::Composition::ICompositionPropertySet * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveDuration@ConnectedAnimationConfiguration@DirectUI@@UEAAJPEAUTimeSpan@Foundation@Windows@@@Z
    virtual long GetEffectiveDuration(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveEasingFunction@ConnectedAnimationConfiguration@DirectUI@@UEAAJPEAPEAUICompositionEasingFunction@Composition@UI@Windows@@@Z
    virtual long GetEffectiveEasingFunction(::Windows::UI::Composition::ICompositionEasingFunction * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ConnectedAnimationConfiguration@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShadowBeCast@ConnectedAnimationConfiguration@DirectUI@@UEAA_NXZ
    virtual bool ShouldShadowBeCast();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ConnectedAnimationConfiguration@DirectUI@@UEAA@XZ
    virtual ~ConnectedAnimationConfiguration();
};
} // namespace DirectUI

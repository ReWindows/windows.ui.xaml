#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class ConnectedAnimationServiceGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimation@ConnectedAnimationServiceGenerated@DirectUI@@UEAAJPEAUHSTRING__@@PEAPEAUIConnectedAnimation@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long GetAnimation(HSTRING__*, ::Windows::UI::Xaml::Media::Animation::IConnectedAnimation * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ConnectedAnimationServiceGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareToAnimate@ConnectedAnimationServiceGenerated@DirectUI@@UEAAJPEAUHSTRING__@@PEAUIUIElement@Xaml@UI@Windows@@PEAPEAUIConnectedAnimation@Animation@Media@567@@Z
    virtual long PrepareToAnimate(HSTRING__*, ::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::Media::Animation::IConnectedAnimation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultDuration@ConnectedAnimationServiceGenerated@DirectUI@@UEAAJPEAUTimeSpan@Foundation@Windows@@@Z
    virtual long get_DefaultDuration(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultEasingFunction@ConnectedAnimationServiceGenerated@DirectUI@@UEAAJPEAPEAUICompositionEasingFunction@Composition@UI@Windows@@@Z
    virtual long get_DefaultEasingFunction(::Windows::UI::Composition::ICompositionEasingFunction * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DefaultDuration@ConnectedAnimationServiceGenerated@DirectUI@@UEAAJUTimeSpan@Foundation@Windows@@@Z
    virtual long put_DefaultDuration(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DefaultEasingFunction@ConnectedAnimationServiceGenerated@DirectUI@@UEAAJPEAUICompositionEasingFunction@Composition@UI@Windows@@@Z
    virtual long put_DefaultEasingFunction(::Windows::UI::Composition::ICompositionEasingFunction *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ConnectedAnimationServiceGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ConnectedAnimationServiceGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ConnectedAnimationServiceGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ConnectedAnimationServiceGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

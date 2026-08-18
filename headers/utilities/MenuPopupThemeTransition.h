#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class MenuPopupThemeTransition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStoryboardImpl@MenuPopupThemeTransition@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@URect@Foundation@6@1W4TransitionTrigger@456@PEAU?$IVector@PEAVStoryboard@Animation@Media@Xaml@UI@Windows@@@Collections@86@PEAW4TransitionParent@456@@Z
    virtual long CreateStoryboardImpl(::Windows::UI::Xaml::IUIElement *, WindissectOpaque, WindissectOpaque, int, WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInTransitionImpl@MenuPopupThemeTransition@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@W4TransitionTrigger@456@PEAE@Z
    virtual long ParticipatesInTransitionImpl(::Windows::UI::Xaml::IUIElement *, int, unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MenuPopupThemeTransition@DirectUI@@UEAA@XZ
    virtual ~MenuPopupThemeTransition();
};
} // namespace DirectUI

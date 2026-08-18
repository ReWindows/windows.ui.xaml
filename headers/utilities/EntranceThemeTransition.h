#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class EntranceThemeTransition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStoryboardImpl@EntranceThemeTransition@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@URect@Foundation@6@1W4TransitionTrigger@456@PEAU?$IVector@PEAVStoryboard@Animation@Media@Xaml@UI@Windows@@@Collections@86@PEAW4TransitionParent@456@@Z
    virtual long CreateStoryboardImpl(::Windows::UI::Xaml::IUIElement *, WindissectOpaque, WindissectOpaque, int, WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInTransitionImpl@EntranceThemeTransition@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@W4TransitionTrigger@456@PEAE@Z
    virtual long ParticipatesInTransitionImpl(::Windows::UI::Xaml::IUIElement *, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@EntranceThemeTransition@DirectUI@@UEAAJXZ
    virtual long PrepareState();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@EntranceThemeTransition@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
};
} // namespace DirectUI

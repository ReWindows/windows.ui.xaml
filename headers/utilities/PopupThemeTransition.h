#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class PopupThemeTransition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStoryboardImpl@PopupThemeTransition@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@URect@Foundation@6@1W4TransitionTrigger@456@PEAU?$IVector@PEAVStoryboard@Animation@Media@Xaml@UI@Windows@@@Collections@86@PEAW4TransitionParent@456@@Z
    virtual long CreateStoryboardImpl(::Windows::UI::Xaml::IUIElement *, WindissectOpaque, WindissectOpaque, int, WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInTransitionImpl@PopupThemeTransition@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@W4TransitionTrigger@456@PEAE@Z
    virtual long ParticipatesInTransitionImpl(::Windows::UI::Xaml::IUIElement *, int, unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PopupThemeTransition@DirectUI@@UEAA@XZ
    virtual ~PopupThemeTransition();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateReaderboardStoryboards@PopupThemeTransition@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@W4TransitionTrigger@456@PEAU?$IVector@PEAVStoryboard@Animation@Media@Xaml@UI@Windows@@@Collections@Foundation@6@@Z
    long CreateReaderboardStoryboards(::Windows::UI::Xaml::IUIElement *, int, WindissectOpaque *);
};
} // namespace DirectUI

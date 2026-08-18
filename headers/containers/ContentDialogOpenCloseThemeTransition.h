#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class ContentDialogOpenCloseThemeTransition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStoryboardImpl@ContentDialogOpenCloseThemeTransition@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@URect@Foundation@6@1W4TransitionTrigger@456@PEAU?$IVector@PEAVStoryboard@Animation@Media@Xaml@UI@Windows@@@Collections@86@PEAW4TransitionParent@456@@Z
    virtual long CreateStoryboardImpl(::Windows::UI::Xaml::IUIElement *, WindissectOpaque, WindissectOpaque, int, WindissectOpaque *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSmokeLayer@ContentDialogOpenCloseThemeTransition@DirectUI@@QEAAXPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    void GetSmokeLayer(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInTransitionImpl@ContentDialogOpenCloseThemeTransition@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@W4TransitionTrigger@456@PEAE@Z
    virtual long ParticipatesInTransitionImpl(::Windows::UI::Xaml::IUIElement *, int, unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContentDialogOpenCloseThemeTransition@DirectUI@@UEAA@XZ
    virtual ~ContentDialogOpenCloseThemeTransition();
};
} // namespace DirectUI

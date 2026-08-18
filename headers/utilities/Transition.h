#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class Transition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStoryboardImpl@Transition@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@URect@Foundation@6@1W4TransitionTrigger@456@PEAU?$IVector@PEAVStoryboard@Animation@Media@Xaml@UI@Windows@@@Collections@86@PEAW4TransitionParent@456@@Z
    virtual long CreateStoryboardImpl(::Windows::UI::Xaml::IUIElement *, WindissectOpaque, WindissectOpaque, int, WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStoryboardsForTransition@Transition@DirectUI@@SAJPEAVCDependencyObject@@0UXRECTF_WH@@1HPEAHPEAPEAPEAVCStoryboard@@PEAW4TransitionParent@2@@Z
    static long CreateStoryboardsForTransition(CDependencyObject *, CDependencyObject *, XRECTF_WH, XRECTF_WH, int, int *, CStoryboard * * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyLayoutTransitionEnd@Transition@DirectUI@@SAJPEAVCDependencyObject@@@Z
    static long NotifyLayoutTransitionEnd(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyLayoutTransitionStart@Transition@DirectUI@@SAJPEAVCDependencyObject@@@Z
    static long NotifyLayoutTransitionStart(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipateInTransition@Transition@DirectUI@@SAJPEAVCDependencyObject@@0HPEAI@Z
    static long ParticipateInTransition(CDependencyObject *, CDependencyObject *, int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInTransitionImpl@Transition@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@W4TransitionTrigger@456@PEAE@Z
    virtual long ParticipatesInTransitionImpl(::Windows::UI::Xaml::IUIElement *, int, unsigned char *);
};
} // namespace DirectUI

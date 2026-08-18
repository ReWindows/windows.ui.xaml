#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class RepeatBehaviorFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@RepeatBehaviorFactory@DirectUI@@UEAAJURepeatBehavior@Animation@Media@Xaml@UI@Windows@@0PEAE@Z
    virtual long Equals(::Windows::UI::Xaml::Media::Animation::RepeatBehavior, ::Windows::UI::Xaml::Media::Animation::RepeatBehavior, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromCount@RepeatBehaviorFactory@DirectUI@@UEAAJNPEAURepeatBehavior@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long FromCount(double, ::Windows::UI::Xaml::Media::Animation::RepeatBehavior *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromDuration@RepeatBehaviorFactory@DirectUI@@UEAAJUTimeSpan@Foundation@Windows@@PEAURepeatBehavior@Animation@Media@Xaml@UI@5@@Z
    virtual long FromDuration(WindissectOpaque, ::Windows::UI::Xaml::Media::Animation::RepeatBehavior *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHasCount@RepeatBehaviorFactory@DirectUI@@UEAAJURepeatBehavior@Animation@Media@Xaml@UI@Windows@@PEAE@Z
    virtual long GetHasCount(::Windows::UI::Xaml::Media::Animation::RepeatBehavior, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHasDuration@RepeatBehaviorFactory@DirectUI@@UEAAJURepeatBehavior@Animation@Media@Xaml@UI@Windows@@PEAE@Z
    virtual long GetHasDuration(::Windows::UI::Xaml::Media::Animation::RepeatBehavior, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Forever@RepeatBehaviorFactory@DirectUI@@UEAAJPEAURepeatBehavior@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long get_Forever(::Windows::UI::Xaml::Media::Animation::RepeatBehavior *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@RepeatBehaviorFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@RepeatBehaviorFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@RepeatBehaviorFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

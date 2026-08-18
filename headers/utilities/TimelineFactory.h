#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class TimelineFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@TimelineFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAU3@PEAPEAUITimeline@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long CreateInstance(IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Media::Animation::ITimeline * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllowDependentAnimations@TimelineFactory@DirectUI@@UEAAJPEAE@Z
    virtual long get_AllowDependentAnimations(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AutoReverseProperty@TimelineFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_AutoReverseProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BeginTimeProperty@TimelineFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_BeginTimeProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DurationProperty@TimelineFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_DurationProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FillBehaviorProperty@TimelineFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_FillBehaviorProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RepeatBehaviorProperty@TimelineFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_RepeatBehaviorProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SpeedRatioProperty@TimelineFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_SpeedRatioProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AllowDependentAnimations@TimelineFactory@DirectUI@@UEAAJE@Z
    virtual long put_AllowDependentAnimations(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TimelineFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TimelineFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@TimelineFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TimelineFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

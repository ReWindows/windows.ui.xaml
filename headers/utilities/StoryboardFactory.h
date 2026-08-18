#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class StoryboardFactory {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetName@StoryboardFactory@DirectUI@@UEAAJPEAUITimeline@Animation@Media@Xaml@UI@Windows@@PEAPEAUHSTRING__@@@Z
    virtual long GetTargetName(::Windows::UI::Xaml::Media::Animation::ITimeline *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetProperty@StoryboardFactory@DirectUI@@UEAAJPEAUITimeline@Animation@Media@Xaml@UI@Windows@@PEAPEAUHSTRING__@@@Z
    virtual long GetTargetProperty(::Windows::UI::Xaml::Media::Animation::ITimeline *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTarget@StoryboardFactory@DirectUI@@UEAAJPEAUITimeline@Animation@Media@Xaml@UI@Windows@@PEAUIDependencyObject@678@@Z
    virtual long SetTarget(::Windows::UI::Xaml::Media::Animation::ITimeline *, ::Windows::UI::Xaml::IDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetName@StoryboardFactory@DirectUI@@UEAAJPEAUITimeline@Animation@Media@Xaml@UI@Windows@@PEAUHSTRING__@@@Z
    virtual long SetTargetName(::Windows::UI::Xaml::Media::Animation::ITimeline *, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetProperty@StoryboardFactory@DirectUI@@UEAAJPEAUITimeline@Animation@Media@Xaml@UI@Windows@@PEAUHSTRING__@@@Z
    virtual long SetTargetProperty(::Windows::UI::Xaml::Media::Animation::ITimeline *, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetPropertyStatic@StoryboardFactory@DirectUI@@SAJPEAUITimeline@Animation@Media@Xaml@UI@Windows@@PEAUHSTRING__@@@Z
    static long SetTargetPropertyStatic(::Windows::UI::Xaml::Media::Animation::ITimeline *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetNameProperty@StoryboardFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_TargetNameProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetPropertyProperty@StoryboardFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_TargetPropertyProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@StoryboardFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@StoryboardFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@StoryboardFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@StoryboardFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetImpl@StoryboardFactory@DirectUI@@AEAAJPEAUITimeline@Animation@Media@Xaml@UI@Windows@@PEAUIDependencyObject@678@@Z
    long SetTargetImpl(::Windows::UI::Xaml::Media::Animation::ITimeline *, ::Windows::UI::Xaml::IDependencyObject *);
};
} // namespace DirectUI

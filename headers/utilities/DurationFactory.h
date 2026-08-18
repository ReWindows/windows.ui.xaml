#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class DurationFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@DurationFactory@DirectUI@@UEAAJUDuration@Xaml@UI@Windows@@0PEAU3456@@Z
    virtual long Add(::Windows::UI::Xaml::Duration, ::Windows::UI::Xaml::Duration, ::Windows::UI::Xaml::Duration *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@DurationFactory@DirectUI@@UEAAJUDuration@Xaml@UI@Windows@@0PEAH@Z
    virtual long Compare(::Windows::UI::Xaml::Duration, ::Windows::UI::Xaml::Duration, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@DurationFactory@DirectUI@@UEAAJUDuration@Xaml@UI@Windows@@0PEAE@Z
    virtual long Equals(::Windows::UI::Xaml::Duration, ::Windows::UI::Xaml::Duration, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromTimeSpan@DurationFactory@DirectUI@@UEAAJUTimeSpan@Foundation@Windows@@PEAUDuration@Xaml@UI@5@@Z
    virtual long FromTimeSpan(WindissectOpaque, ::Windows::UI::Xaml::Duration *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHasTimeSpan@DurationFactory@DirectUI@@UEAAJUDuration@Xaml@UI@Windows@@PEAE@Z
    virtual long GetHasTimeSpan(::Windows::UI::Xaml::Duration, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Subtract@DurationFactory@DirectUI@@UEAAJUDuration@Xaml@UI@Windows@@0PEAU3456@@Z
    virtual long Subtract(::Windows::UI::Xaml::Duration, ::Windows::UI::Xaml::Duration, ::Windows::UI::Xaml::Duration *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Automatic@DurationFactory@DirectUI@@UEAAJPEAUDuration@Xaml@UI@Windows@@@Z
    virtual long get_Automatic(::Windows::UI::Xaml::Duration *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Forever@DurationFactory@DirectUI@@UEAAJPEAUDuration@Xaml@UI@Windows@@@Z
    virtual long get_Forever(::Windows::UI::Xaml::Duration *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DurationFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DurationFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DurationFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

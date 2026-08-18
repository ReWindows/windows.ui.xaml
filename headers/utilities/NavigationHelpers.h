#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class NavigationHelpers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateINavigatingCancelEventArgs@NavigationHelpers@DirectUI@@SAJPEAUIInspectable@@PEAUINavigationTransitionInfo@Animation@Media@Xaml@UI@Windows@@PEAUHSTRING__@@W4NavigationMode@Navigation@789@PEAPEAUINavigatingCancelEventArgs@Navigation@789@@Z
    static long CreateINavigatingCancelEventArgs(IInspectable *, ::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo *, HSTRING__*, int, ::Windows::UI::Xaml::Navigation::INavigatingCancelEventArgs * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateINavigationEventArgs@NavigationHelpers@DirectUI@@SAJPEAUIInspectable@@0PEAUINavigationTransitionInfo@Animation@Media@Xaml@UI@Windows@@PEAUHSTRING__@@W4NavigationMode@Navigation@789@PEAPEAUINavigationEventArgs@Navigation@789@@Z
    static long CreateINavigationEventArgs(IInspectable *, IInspectable *, ::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo *, HSTRING__*, int, ::Windows::UI::Xaml::Navigation::INavigationEventArgs * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertHSTRINGToNavigationParameter@NavigationHelpers@DirectUI@@CAJPEAUHSTRING__@@W4PropertyType@Foundation@Windows@@PEAPEAUIInspectable@@PEAE@Z
    static long ConvertHSTRINGToNavigationParameter(HSTRING__*, int, IInspectable * *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertNavigationParameterToHSTRING@NavigationHelpers@DirectUI@@CAJPEAUIInspectable@@PEAPEAUHSTRING__@@PEAW4PropertyType@Foundation@Windows@@PEAE@Z
    static long ConvertNavigationParameterToHSTRING(IInspectable *, HSTRING__* *, int *, unsigned char *);
};
} // namespace DirectUI

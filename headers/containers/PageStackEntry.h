#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class PageStackEntry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@PageStackEntry@DirectUI@@SAJPEAUIFrame@Controls@Xaml@UI@Windows@@PEAUHSTRING__@@PEAUIInspectable@@PEAUINavigationTransitionInfo@Animation@Media@567@PEAPEAV12@@Z
    static long Create(::Windows::UI::Xaml::Controls::IFrame *, HSTRING__*, IInspectable *, ::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo *, PageStackEntry * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescriptor@PageStackEntry@DirectUI@@QEAAJPEAPEAUHSTRING__@@@Z
    long GetDescriptor(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareContent@PageStackEntry@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long PrepareContent(IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDescriptor@PageStackEntry@DirectUI@@QEAAJPEAUHSTRING__@@@Z
    long SetDescriptor(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFrame@PageStackEntry@DirectUI@@QEAAJPEAUIFrame@Controls@Xaml@UI@Windows@@@Z
    long SetFrame(::Windows::UI::Xaml::Controls::IFrame *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PageStackEntry@DirectUI@@UEAA@XZ
    virtual ~PageStackEntry();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrame@PageStackEntry@DirectUI@@AEAAJPEAPEAUIFrame@Controls@Xaml@UI@Windows@@@Z
    long GetFrame(::Windows::UI::Xaml::Controls::IFrame * *);
};
} // namespace DirectUI

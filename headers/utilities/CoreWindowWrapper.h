#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class CoreWindowWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddActivatedHandler@CoreWindowWrapper@DirectUI@@QEAAJPEAUIWindowActivatedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    long AddActivatedHandler(::Windows::UI::Xaml::IWindowActivatedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddClosedHandler@CoreWindowWrapper@DirectUI@@QEAAJPEAUIWindowClosedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    long AddClosedHandler(::Windows::UI::Xaml::IWindowClosedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSizeChangedHandler@CoreWindowWrapper@DirectUI@@QEAAJPEAUIWindowSizeChangedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    long AddSizeChangedHandler(::Windows::UI::Xaml::IWindowSizeChangedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddVisibilityChangedHandler@CoreWindowWrapper@DirectUI@@QEAAJPEAUIWindowVisibilityChangedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    long AddVisibilityChangedHandler(::Windows::UI::Xaml::IWindowVisibilityChangedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureForCoreWindowHostingMode@CoreWindowWrapper@DirectUI@@SAJPEAUICoreWindow@Core@UI@Windows@@PEBUWindowCreationParameters@Xaml@56@@Z
    static long ConfigureForCoreWindowHostingMode(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Xaml::WindowCreationParameters const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CoreWindowWrapper@DirectUI@@SAJPEAUICoreWindow@Core@UI@Windows@@PEAPEAV12@@Z
    static long Create(::Windows::UI::Core::ICoreWindow *, CoreWindowWrapper * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHWND@CoreWindowWrapper@DirectUI@@QEAAPEAUHWND__@@XZ
    HWND__* GetHWND();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibility@CoreWindowWrapper@DirectUI@@QEAAJ_N@Z
    long SetVisibility(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreWindowWrapper@DirectUI@@QEAA@XZ
    ~CoreWindowWrapper();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPositionImpl@CoreWindowWrapper@DirectUI@@CAJPEAUHWND__@@HHHH@Z
    static long SetPositionImpl(HWND__*, int, int, int, int);
};
} // namespace DirectUI

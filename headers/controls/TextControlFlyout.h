#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class TextControlFlyout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseIfOpen@TextControlFlyout@DirectUI@@QEAAJXZ
    long CloseIfOpen();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveOwnerNoRef@TextControlFlyout@DirectUI@@QEAAPEAVCFrameworkElement@@XZ
    CFrameworkElement * GetActiveOwnerNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlyoutNoRef@TextControlFlyout@DirectUI@@QEAAPEAVCFlyoutBase@@XZ
    CFlyoutBase * GetFlyoutNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpen@TextControlFlyout@DirectUI@@QEAA_NXZ
    bool IsOpen();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActiveOwnerLosingFocus@TextControlFlyout@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUILosingFocusEventArgs@Input@456@@Z
    long OnActiveOwnerLosingFocus(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::Input::ILosingFocusEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClosed@TextControlFlyout@DirectUI@@QEAAJPEAUIInspectable@@0@Z
    long OnClosed(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClosing@TextControlFlyout@DirectUI@@QEAAJPEAUIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@@PEAUIFlyoutBaseClosingEventArgs@45678@@Z
    long OnClosing(::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase *, ::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOpened@TextControlFlyout@DirectUI@@QEAAJPEAUIInspectable@@0@Z
    long OnOpened(IInspectable *, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveOwner@TextControlFlyout@DirectUI@@QEAAXPEAVCFrameworkElement@@@Z
    void SetActiveOwner(CFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAt@TextControlFlyout@DirectUI@@QEAAJUPoint@Foundation@Windows@@URect@45@W4FlyoutShowMode@Primitives@Controls@Xaml@UI@5@@Z
    long ShowAt(WindissectOpaque, WindissectOpaque, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextControlFlyout@DirectUI@@QEAA@PEAVCFlyoutBase@@_N@Z
    TextControlFlyout(CFlyoutBase *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextControlFlyout@DirectUI@@QEAA@XZ
    ~TextControlFlyout();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearActiveOwnerEventHandlers@TextControlFlyout@DirectUI@@AEAAJXZ
    long ClearActiveOwnerEventHandlers();
};
} // namespace DirectUI

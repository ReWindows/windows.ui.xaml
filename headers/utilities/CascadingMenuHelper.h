#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 26 member(s).
namespace DirectUI {
class CascadingMenuHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelCloseSubMenu@CascadingMenuHelper@DirectUI@@QEAAJXZ
    long CancelCloseSubMenu();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CascadingMenuHelper@DirectUI@@QEAA@XZ
    CascadingMenuHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearStateFlags@CascadingMenuHelper@DirectUI@@QEAAJXZ
    long ClearStateFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseChildSubMenus@CascadingMenuHelper@DirectUI@@QEAAJXZ
    long CloseChildSubMenus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSubMenu@CascadingMenuHelper@DirectUI@@QEAAJXZ
    long CloseSubMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DelayCloseSubMenu@CascadingMenuHelper@DirectUI@@QEAAJXZ
    long DelayCloseSubMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CascadingMenuHelper@DirectUI@@QEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@@Z
    long Initialize(::Windows::UI::Xaml::IFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@CascadingMenuHelper@DirectUI@@QEAAJPEAVIsEnabledChangedEventArgs@2@@Z
    long OnIsEnabledChanged(::DirectUI::IsEnabledChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@CascadingMenuHelper@DirectUI@@QEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@CascadingMenuHelper@DirectUI@@QEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnKeyUp(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@CascadingMenuHelper@DirectUI@@QEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnPointerEntered(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@CascadingMenuHelper@DirectUI@@QEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@_N@Z
    long OnPointerExited(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@CascadingMenuHelper@DirectUI@@QEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnPointerReleased(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresenterSizeChanged@CascadingMenuHelper@DirectUI@@QEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@PEAVPopup@2@@Z
    long OnPresenterSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *, ::DirectUI::Popup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@CascadingMenuHelper@DirectUI@@QEAAJXZ
    long OnVisibilityChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSubMenu@CascadingMenuHelper@DirectUI@@QEAAJXZ
    long OpenSubMenu();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSubMenuPresenter@CascadingMenuHelper@DirectUI@@QEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@@Z
    long SetSubMenuPresenter(::Windows::UI::Xaml::IFrameworkElement *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CascadingMenuHelper@DirectUI@@UEAA@XZ
    virtual ~CascadingMenuHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DelayCloseMenuTimerTickHandler@CascadingMenuHelper@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long DelayCloseMenuTimerTickHandler(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DelayOpenMenuTimerTickHandler@CascadingMenuHelper@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long DelayOpenMenuTimerTickHandler(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCloseExistingSubItems@CascadingMenuHelper@DirectUI@@AEAAJXZ
    long EnsureCloseExistingSubItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDelayCloseMenuTimer@CascadingMenuHelper@DirectUI@@AEAAJXZ
    long EnsureDelayCloseMenuTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDelayOpenMenuTimer@CascadingMenuHelper@DirectUI@@AEAAJXZ
    long EnsureDelayOpenMenuTimer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionAndDirection@CascadingMenuHelper@DirectUI@@AEAAJMMAEBURect@Foundation@Windows@@AEBUPoint@45@AEAU645@PEA_N3@Z
    long GetPositionAndDirection(float, float, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque &, bool *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionAndDirection@CascadingMenuHelper@DirectUI@@AEAAJMMPEAVPopup@2@AEAUPoint@Foundation@Windows@@PEA_N2@Z
    long GetPositionAndDirection(float, float, ::DirectUI::Popup *, WindissectOpaque &, bool *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOwnerVisualState@CascadingMenuHelper@DirectUI@@AEAAJXZ
    long UpdateOwnerVisualState();
};
} // namespace DirectUI

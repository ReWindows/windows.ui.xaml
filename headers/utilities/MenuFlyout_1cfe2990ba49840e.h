#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
namespace DirectUI {
class MenuFlyout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProcessKeyboardAcceleratorsImpl@MenuFlyout@DirectUI@@UEAAJPEAUIProcessKeyboardAcceleratorEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnProcessKeyboardAcceleratorsImpl(::Windows::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreparePopupThemeTransitionsAndShadows@MenuFlyout@DirectUI@@SAJPEAVPopup@2@NIPEAPEAUITransition@Animation@Media@Xaml@UI@Windows@@@Z
    static long PreparePopupThemeTransitionsAndShadows(::DirectUI::Popup *, double, unsigned int, ::Windows::UI::Xaml::Media::Animation::ITransition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAt@MenuFlyout@DirectUI@@UEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@@Z
    virtual long ShowAt(::Windows::UI::Xaml::IFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAtImpl@MenuFlyout@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@UPoint@Foundation@6@@Z
    long ShowAtImpl(::Windows::UI::Xaml::IUIElement *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAtStatic@MenuFlyout@DirectUI@@SAJPEAVCMenuFlyout@@PEAVCUIElement@@UPoint@Foundation@Windows@@@Z
    static long ShowAtStatic(CMenuFlyout *, CUIElement *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ParentMenuImpl@MenuFlyout@DirectUI@@QEAAJPEAPEAUIMenu@Controls@Xaml@UI@Windows@@@Z
    long get_ParentMenuImpl(::Windows::UI::Xaml::Controls::IMenu * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ParentMenuImpl@MenuFlyout@DirectUI@@QEAAJPEAUIMenu@Controls@Xaml@UI@Windows@@@Z
    long put_ParentMenuImpl(::Windows::UI::Xaml::Controls::IMenu *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MenuFlyout@DirectUI@@UEAA@XZ
    virtual ~MenuFlyout();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoAdjustPlacement@MenuFlyout@DirectUI@@MEAAJPEAW4MajorPlacementMode@CFlyoutBase@@@Z
    virtual long AutoAdjustPlacement(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePresenter@MenuFlyout@DirectUI@@MEAAJPEAPEAUIControl@Controls@Xaml@UI@Windows@@@Z
    virtual long CreatePresenter(::Windows::UI::Xaml::Controls::IControl * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectFrameworkPeerCore@MenuFlyout@DirectUI@@MEAAJXZ
    virtual long DisconnectFrameworkPeerCore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPlacementSupported@MenuFlyout@DirectUI@@MEAAEW4FlyoutPlacementMode@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual unsigned char IsPlacementSupported(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClosed@MenuFlyout@DirectUI@@MEAAJXZ
    virtual long OnClosed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClosing@MenuFlyout@DirectUI@@MEAAJPEA_N@Z
    virtual long OnClosing(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOpening@MenuFlyout@DirectUI@@MEAAJXZ
    virtual long OnOpening();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@MenuFlyout@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreparePopupTheme@MenuFlyout@DirectUI@@MEAAJPEAVPopup@2@W4MajorPlacementMode@CFlyoutBase@@PEAUIFrameworkElement@Xaml@UI@Windows@@@Z
    virtual long PreparePopupTheme(::DirectUI::Popup *, int, ::Windows::UI::Xaml::IFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@MenuFlyout@DirectUI@@MEAAJXZ
    virtual long PrepareState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAtCore@MenuFlyout@DirectUI@@MEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@AEA_N@Z
    virtual long ShowAtCore(::Windows::UI::Xaml::IFrameworkElement *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePresenterVisualState@MenuFlyout@DirectUI@@MEAAJW4MajorPlacementMode@CFlyoutBase@@@Z
    virtual long UpdatePresenterVisualState(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSubMenu@MenuFlyout@DirectUI@@AEAAJXZ
    long CloseSubMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePresenterVisualState@MenuFlyout@DirectUI@@AEAAJW4MajorPlacementMode@CFlyoutBase@@E@Z
    long UpdatePresenterVisualState(int, unsigned char);
};
} // namespace DirectUI

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
namespace DirectUI {
class MenuFlyoutElevatorHelper {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MenuFlyoutElevatorHelper@DirectUI@@QEAA@XZ
    MenuFlyoutElevatorHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayStoryboardForElevatorEffect@MenuFlyoutElevatorHelper@DirectUI@@QEAAJW4ElementTheme@Xaml@UI@Windows@@PEAUIFrameworkElement@456@@Z
    long PlayStoryboardForElevatorEffect(int, ::Windows::UI::Xaml::IFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayStoryboardForReversedElevatorEffect@MenuFlyoutElevatorHelper@DirectUI@@QEAAJXZ
    long PlayStoryboardForReversedElevatorEffect();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MenuFlyoutElevatorHelper@DirectUI@@UEAA@XZ
    virtual ~MenuFlyoutElevatorHelper();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@MenuFlyoutElevatorHelper@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanUpComponentsForElevatorEffect@MenuFlyoutElevatorHelper@DirectUI@@AEAAJXZ
    long CleanUpComponentsForElevatorEffect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLTE@MenuFlyoutElevatorHelper@DirectUI@@AEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUIUIElement@456@@Z
    long CreateLTE(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyLTE@MenuFlyoutElevatorHelper@DirectUI@@AEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIUIElement@456@@Z
    long DestroyLTE(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareBackgroundLTE@MenuFlyoutElevatorHelper@DirectUI@@AEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@NN@Z
    long PrepareBackgroundLTE(::Windows::UI::Xaml::IFrameworkElement *, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareComponentsForElevatorEffect@MenuFlyoutElevatorHelper@DirectUI@@AEAAJW4ElementTheme@Xaml@UI@Windows@@PEAUIFrameworkElement@456@@Z
    long PrepareComponentsForElevatorEffect(int, ::Windows::UI::Xaml::IFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForegroundLTE@MenuFlyoutElevatorHelper@DirectUI@@AEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@NN@Z
    long PrepareForegroundLTE(::Windows::UI::Xaml::IFrameworkElement *, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareOverlayLTE@MenuFlyoutElevatorHelper@DirectUI@@AEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@@Z
    long PrepareOverlayLTE(::Windows::UI::Xaml::IFrameworkElement *);
};
} // namespace DirectUI

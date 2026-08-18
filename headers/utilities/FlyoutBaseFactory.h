#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 23 member(s).
namespace DirectUI {
class FlyoutBaseFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@FlyoutBaseFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAU3@PEAPEAUIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long CreateInstance(IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttachedFlyout@FlyoutBaseFactory@DirectUI@@UEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@PEAPEAUIFlyoutBase@Primitives@Controls@456@@Z
    virtual long GetAttachedFlyout(::Windows::UI::Xaml::IFrameworkElement *, ::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttachedFlyoutStatic@FlyoutBaseFactory@DirectUI@@SAJPEAUIFrameworkElement@Xaml@UI@Windows@@PEAPEAUIFlyoutBase@Primitives@Controls@456@@Z
    static long GetAttachedFlyoutStatic(::Windows::UI::Xaml::IFrameworkElement *, ::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAttachedFlyout@FlyoutBaseFactory@DirectUI@@UEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@PEAUIFlyoutBase@Primitives@Controls@456@@Z
    virtual long SetAttachedFlyout(::Windows::UI::Xaml::IFrameworkElement *, ::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAttachedFlyout@FlyoutBaseFactory@DirectUI@@UEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@@Z
    virtual long ShowAttachedFlyout(::Windows::UI::Xaml::IFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllowFocusOnInteractionProperty@FlyoutBaseFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_AllowFocusOnInteractionProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllowFocusWhenDisabledProperty@FlyoutBaseFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_AllowFocusWhenDisabledProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AreOpenCloseAnimationsEnabledProperty@FlyoutBaseFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_AreOpenCloseAnimationsEnabledProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AttachedFlyoutProperty@FlyoutBaseFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_AttachedFlyoutProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ElementSoundModeProperty@FlyoutBaseFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_ElementSoundModeProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputDevicePrefersPrimaryCommandsProperty@FlyoutBaseFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_InputDevicePrefersPrimaryCommandsProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsOpenProperty@FlyoutBaseFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_IsOpenProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LightDismissOverlayModeProperty@FlyoutBaseFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_LightDismissOverlayModeProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OverlayInputPassThroughElementProperty@FlyoutBaseFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_OverlayInputPassThroughElementProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PlacementProperty@FlyoutBaseFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_PlacementProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShouldConstrainToRootBoundsProperty@FlyoutBaseFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_ShouldConstrainToRootBoundsProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowModeProperty@FlyoutBaseFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_ShowModeProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetProperty@FlyoutBaseFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_TargetProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@FlyoutBaseFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@FlyoutBaseFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@FlyoutBaseFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@FlyoutBaseFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAttachedFlyoutImpl@FlyoutBaseFactory@DirectUI@@AEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@@Z
    long ShowAttachedFlyoutImpl(::Windows::UI::Xaml::IFrameworkElement *);
};
} // namespace DirectUI

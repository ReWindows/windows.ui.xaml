#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class CommandBarFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CommandBarFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAU3@PEAPEAUICommandBar@Controls@Xaml@UI@Windows@@@Z
    virtual long CreateInstance(IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Controls::ICommandBar * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentBottomCommandBar@CommandBarFactory@DirectUI@@UEAAJPEAPEAUICommandBar@Controls@Xaml@UI@Windows@@@Z
    virtual long GetCurrentBottomCommandBar(::Windows::UI::Xaml::Controls::ICommandBar * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CommandBarOverflowPresenterStyleProperty@CommandBarFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_CommandBarOverflowPresenterStyleProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultLabelPositionProperty@CommandBarFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_DefaultLabelPositionProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDynamicOverflowEnabledProperty@CommandBarFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_IsDynamicOverflowEnabledProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OverflowButtonVisibilityProperty@CommandBarFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_OverflowButtonVisibilityProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrimaryCommandsProperty@CommandBarFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_PrimaryCommandsProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SecondaryCommandsProperty@CommandBarFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_SecondaryCommandsProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CommandBarFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CommandBarFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CommandBarFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CommandBarFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentBottomCommandBarImpl@CommandBarFactory@DirectUI@@AEAAJPEAPEAUICommandBar@Controls@Xaml@UI@Windows@@@Z
    long GetCurrentBottomCommandBarImpl(::Windows::UI::Xaml::Controls::ICommandBar * *);
};
} // namespace DirectUI

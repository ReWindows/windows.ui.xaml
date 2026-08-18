#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class CommandingContainerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CommandingContainerFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAU3@PEAPEAUICommandingContainer@Controls@Xaml@UI@Windows@@@Z
    virtual long CreateInstance(IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Controls::ICommandingContainer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandingContainer@CommandingContainerFactory@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUICommandingContainer@Controls@456@@Z
    virtual long GetCommandingContainer(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::Controls::ICommandingContainer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyContextChanged@CommandingContainerFactory@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long NotifyContextChanged(::Windows::UI::Xaml::IDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCommandingContainer@CommandingContainerFactory@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUICommandingContainer@Controls@456@@Z
    virtual long SetCommandingContainer(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::Controls::ICommandingContainer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CommandingContainerProperty@CommandingContainerFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_CommandingContainerProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CommandingTargetProperty@CommandingContainerFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_CommandingTargetProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CommandingContainerFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CommandingContainerFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CommandingContainerFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CommandingContainerFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

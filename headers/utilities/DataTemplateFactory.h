#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class DataTemplateFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DataTemplateFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAU3@PEAPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long CreateInstance(IInspectable *, IInspectable * *, ::Windows::UI::Xaml::IDataTemplate * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtensionInstance@DataTemplateFactory@DirectUI@@UEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@PEAPEAUIDataTemplateExtension@456@@Z
    virtual long GetExtensionInstance(::Windows::UI::Xaml::IFrameworkElement *, ::Windows::UI::Xaml::IDataTemplateExtension * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtensionInstanceStatic@DataTemplateFactory@DirectUI@@SAJPEAUIFrameworkElement@Xaml@UI@Windows@@PEAPEAUIDataTemplateExtension@456@@Z
    static long GetExtensionInstanceStatic(::Windows::UI::Xaml::IFrameworkElement *, ::Windows::UI::Xaml::IDataTemplateExtension * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExtensionInstance@DataTemplateFactory@DirectUI@@UEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@PEAUIDataTemplateExtension@456@@Z
    virtual long SetExtensionInstance(::Windows::UI::Xaml::IFrameworkElement *, ::Windows::UI::Xaml::IDataTemplateExtension *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtensionInstanceProperty@DataTemplateFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_ExtensionInstanceProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DataTemplateFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DataTemplateFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@DataTemplateFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DataTemplateFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

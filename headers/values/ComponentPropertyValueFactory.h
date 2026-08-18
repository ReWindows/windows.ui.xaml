#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class ComponentPropertyValueFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ComponentPropertyValueFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUHSTRING__@@PEAPEAUIComponentPropertyValue@Automation@456@@Z
    virtual long CreateInstance(::Windows::UI::Xaml::IUIElement *, HSTRING__*, ::Windows::UI::Xaml::Automation::IComponentPropertyValue * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ElementIdProperty@ComponentPropertyValueFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_ElementIdProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SiteProperty@ComponentPropertyValueFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_SiteProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ComponentPropertyValueFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ComponentPropertyValueFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ComponentPropertyValueFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ComponentPropertyValueFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceImpl@ComponentPropertyValueFactory@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUHSTRING__@@PEAPEAUIComponentPropertyValue@Automation@456@@Z
    long CreateInstanceImpl(::Windows::UI::Xaml::IUIElement *, HSTRING__*, ::Windows::UI::Xaml::Automation::IComponentPropertyValue * *);
};
} // namespace DirectUI

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class DataTemplateGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElement@DataTemplateGenerated@DirectUI@@UEAAJPEAUIElementFactoryGetArgs@Xaml@UI@Windows@@PEAPEAUIUIElement@456@@Z
    virtual long GetElement(::Windows::UI::Xaml::IElementFactoryGetArgs *, ::Windows::UI::Xaml::IUIElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@DataTemplateGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadContent@DataTemplateGenerated@DirectUI@@UEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long LoadContent(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleElement@DataTemplateGenerated@DirectUI@@UEAAJPEAUIElementFactoryRecycleArgs@Xaml@UI@Windows@@@Z
    virtual long RecycleElement(::Windows::UI::Xaml::IElementFactoryRecycleArgs *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DataTemplateGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DataTemplateGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@DataTemplateGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DataTemplateGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class DataTemplateSelectorGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElement@DataTemplateSelectorGenerated@DirectUI@@UEAAJPEAUIElementFactoryGetArgs@Xaml@UI@Windows@@PEAPEAUIUIElement@456@@Z
    virtual long GetElement(::Windows::UI::Xaml::IElementFactoryGetArgs *, ::Windows::UI::Xaml::IUIElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@DataTemplateSelectorGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleElement@DataTemplateSelectorGenerated@DirectUI@@UEAAJPEAUIElementFactoryRecycleArgs@Xaml@UI@Windows@@@Z
    virtual long RecycleElement(::Windows::UI::Xaml::IElementFactoryRecycleArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectTemplate@DataTemplateSelectorGenerated@DirectUI@@UEAAJPEAUIInspectable@@PEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUIDataTemplate@567@@Z
    virtual long SelectTemplate(IInspectable *, ::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IDataTemplate * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectTemplateCore@DataTemplateSelectorGenerated@DirectUI@@UEAAJPEAUIInspectable@@PEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUIDataTemplate@567@@Z
    virtual long SelectTemplateCore(IInspectable *, ::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IDataTemplate * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectTemplateForItem@DataTemplateSelectorGenerated@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long SelectTemplateForItem(IInspectable *, ::Windows::UI::Xaml::IDataTemplate * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectTemplateForItemCore@DataTemplateSelectorGenerated@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAUIDataTemplate@Xaml@UI@Windows@@@Z
    virtual long SelectTemplateForItemCore(IInspectable *, ::Windows::UI::Xaml::IDataTemplate * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DataTemplateSelectorGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DataTemplateSelectorGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@DataTemplateSelectorGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DataTemplateSelectorGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

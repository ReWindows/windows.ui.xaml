#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 21 member(s).
namespace DirectUI {
class ItemContainerGeneratorGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainerFromIndex@ItemContainerGeneratorGenerated@DirectUI@@UEAAJHPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long ContainerFromIndex(int, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainerFromItem@ItemContainerGeneratorGenerated@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long ContainerFromItem(IInspectable *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateNext@ItemContainerGeneratorGenerated@DirectUI@@UEAAJPEAEPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long GenerateNext(unsigned char *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GeneratorPositionFromIndex@ItemContainerGeneratorGenerated@DirectUI@@UEAAJHPEAUGeneratorPosition@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long GeneratorPositionFromIndex(int, ::Windows::UI::Xaml::Controls::Primitives::GeneratorPosition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemContainerGeneratorForPanel@ItemContainerGeneratorGenerated@DirectUI@@UEAAJPEAUIPanel@Controls@Xaml@UI@Windows@@PEAPEAUIItemContainerGenerator@4567@@Z
    virtual long GetItemContainerGeneratorForPanel(::Windows::UI::Xaml::Controls::IPanel *, ::Windows::UI::Xaml::Controls::IItemContainerGenerator * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ItemContainerGeneratorGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexFromContainer@ItemContainerGeneratorGenerated@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAH@Z
    virtual long IndexFromContainer(::Windows::UI::Xaml::IDependencyObject *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexFromGeneratorPosition@ItemContainerGeneratorGenerated@DirectUI@@UEAAJUGeneratorPosition@Primitives@Controls@Xaml@UI@Windows@@PEAH@Z
    virtual long IndexFromGeneratorPosition(::Windows::UI::Xaml::Controls::Primitives::GeneratorPosition, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemFromContainer@ItemContainerGeneratorGenerated@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long ItemFromContainer(::Windows::UI::Xaml::IDependencyObject *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareItemContainer@ItemContainerGeneratorGenerated@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long PrepareItemContainer(::Windows::UI::Xaml::IDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Recycle@ItemContainerGeneratorGenerated@DirectUI@@UEAAJUGeneratorPosition@Primitives@Controls@Xaml@UI@Windows@@H@Z
    virtual long Recycle(::Windows::UI::Xaml::Controls::Primitives::GeneratorPosition, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@ItemContainerGeneratorGenerated@DirectUI@@UEAAJUGeneratorPosition@Primitives@Controls@Xaml@UI@Windows@@H@Z
    virtual long Remove(::Windows::UI::Xaml::Controls::Primitives::GeneratorPosition, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAll@ItemContainerGeneratorGenerated@DirectUI@@UEAAJXZ
    virtual long RemoveAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAt@ItemContainerGeneratorGenerated@DirectUI@@UEAAJUGeneratorPosition@Primitives@Controls@Xaml@UI@Windows@@W4GeneratorDirection@45678@E@Z
    virtual long StartAt(::Windows::UI::Xaml::Controls::Primitives::GeneratorPosition, int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@ItemContainerGeneratorGenerated@DirectUI@@UEAAJXZ
    virtual long Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ItemsChanged@ItemContainerGeneratorGenerated@DirectUI@@UEAAJPEAUIItemsChangedEventHandler@Primitives@Controls@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ItemsChanged(::Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ItemsChanged@ItemContainerGeneratorGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ItemsChanged(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ItemContainerGeneratorGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ItemContainerGeneratorGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ItemContainerGeneratorGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventAddPreValidation@ItemContainerGeneratorGenerated@DirectUI@@AEBAJQEAXQEAUEventRegistrationToken@@@Z
    long EventAddPreValidation(void * const, EventRegistrationToken * const) const;
};
} // namespace DirectUI

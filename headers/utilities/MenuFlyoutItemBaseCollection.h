#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 29 member(s).
namespace DirectUI {
class MenuFlyoutItemBaseCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@MenuFlyoutItemBaseCollection@DirectUI@@UEAAJPEAUIMenuFlyoutItemBase@Controls@Xaml@UI@Windows@@@Z
    virtual long Append(::Windows::UI::Xaml::Controls::IMenuFlyoutItemBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@MenuFlyoutItemBaseCollection@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long Append(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@MenuFlyoutItemBaseCollection@DirectUI@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@MenuFlyoutItemBaseCollection@DirectUI@@UEAAJPEAPEAU?$IIterator@PEAVMenuFlyoutItemBase@Controls@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@MenuFlyoutItemBaseCollection@DirectUI@@UEAAJIPEAPEAUIInspectable@@@Z
    virtual long GetAt(unsigned int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@MenuFlyoutItemBaseCollection@DirectUI@@UEAAJPEAPEAU?$IVectorView@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long GetView(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@MenuFlyoutItemBaseCollection@DirectUI@@UEAAJPEAUIInspectable@@PEAIPEAE@Z
    virtual long IndexOf(IInspectable *, unsigned int *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@MenuFlyoutItemBaseCollection@DirectUI@@UEAAJIPEAUIMenuFlyoutItemBase@Controls@Xaml@UI@Windows@@@Z
    virtual long InsertAt(unsigned int, ::Windows::UI::Xaml::Controls::IMenuFlyoutItemBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@MenuFlyoutItemBaseCollection@DirectUI@@UEAAJIPEAUIInspectable@@@Z
    virtual long InsertAt(unsigned int, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@MenuFlyoutItemBaseCollection@DirectUI@@UEAAJI@Z
    virtual long RemoveAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAtEnd@MenuFlyoutItemBaseCollection@DirectUI@@UEAAJXZ
    virtual long RemoveAtEnd();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAt@MenuFlyoutItemBaseCollection@DirectUI@@UEAAJIPEAUIInspectable@@@Z
    virtual long SetAt(unsigned int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAt@MenuFlyoutItemBaseCollection@DirectUI@@UEAAJIPEAUIMenuFlyoutItemBase@Controls@Xaml@UI@Windows@@@Z
    virtual long SetAt(unsigned int, ::Windows::UI::Xaml::Controls::IMenuFlyoutItemBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateItem@MenuFlyoutItemBaseCollection@DirectUI@@SAJPEAVCDependencyObject@@@Z
    static long ValidateItem(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VectorChanged@MenuFlyoutItemBaseCollection@DirectUI@@UEAAJPEAU?$VectorChangedEventHandler@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_VectorChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@MenuFlyoutItemBaseCollection@DirectUI@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VectorChanged@MenuFlyoutItemBaseCollection@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VectorChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MenuFlyoutItemBaseCollection@DirectUI@@UEAA@XZ
    virtual ~MenuFlyoutItemBaseCollection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@MenuFlyoutItemBaseCollection@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@MenuFlyoutItemBaseCollection@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@MenuFlyoutItemBaseCollection@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseVectorChanged@MenuFlyoutItemBaseCollection@DirectUI@@AEAAJW4CollectionChange@Collections@Foundation@Windows@@I@Z
    long RaiseVectorChanged(int, unsigned int);
};
} // namespace DirectUI

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class ItemsChangedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Action@ItemsChangedEventArgs@DirectUI@@UEAAJPEAH@Z
    virtual long get_Action(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ItemCount@ItemsChangedEventArgs@DirectUI@@UEAAJPEAH@Z
    virtual long get_ItemCount(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ItemUICount@ItemsChangedEventArgs@DirectUI@@UEAAJPEAH@Z
    virtual long get_ItemUICount(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OldPosition@ItemsChangedEventArgs@DirectUI@@UEAAJPEAUGeneratorPosition@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long get_OldPosition(::Windows::UI::Xaml::Controls::Primitives::GeneratorPosition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@ItemsChangedEventArgs@DirectUI@@UEAAJPEAUGeneratorPosition@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long get_Position(::Windows::UI::Xaml::Controls::Primitives::GeneratorPosition *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ItemsChangedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ItemsChangedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ItemsChangedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ItemsChangedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

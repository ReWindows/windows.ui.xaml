#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class ExecuteRequestedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CommandTarget@ExecuteRequestedEventArgs@DirectUI@@UEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long get_CommandTarget(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ListCommandTarget@ExecuteRequestedEventArgs@DirectUI@@UEAAJPEAPEAUIItemsControl@Controls@Xaml@UI@Windows@@@Z
    virtual long get_ListCommandTarget(::Windows::UI::Xaml::Controls::IItemsControl * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Parameter@ExecuteRequestedEventArgs@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Parameter(IInspectable * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExecuteRequestedEventArgs@DirectUI@@UEAA@XZ
    virtual ~ExecuteRequestedEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ExecuteRequestedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ExecuteRequestedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ExecuteRequestedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ExecuteRequestedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

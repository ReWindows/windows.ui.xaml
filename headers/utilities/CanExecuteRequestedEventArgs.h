#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class CanExecuteRequestedEventArgs {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CanExecuteRequestedEventArgs@DirectUI@@QEAA@XZ
    CanExecuteRequestedEventArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanExecute@CanExecuteRequestedEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_CanExecute(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CommandTarget@CanExecuteRequestedEventArgs@DirectUI@@UEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long get_CommandTarget(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ListCommandTarget@CanExecuteRequestedEventArgs@DirectUI@@UEAAJPEAPEAUIItemsControl@Controls@Xaml@UI@Windows@@@Z
    virtual long get_ListCommandTarget(::Windows::UI::Xaml::Controls::IItemsControl * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Parameter@CanExecuteRequestedEventArgs@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Parameter(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CanExecute@CanExecuteRequestedEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_CanExecute(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Parameter@CanExecuteRequestedEventArgs@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long put_Parameter(IInspectable *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CanExecuteRequestedEventArgs@DirectUI@@UEAA@XZ
    virtual ~CanExecuteRequestedEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CanExecuteRequestedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CanExecuteRequestedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@CanExecuteRequestedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CanExecuteRequestedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

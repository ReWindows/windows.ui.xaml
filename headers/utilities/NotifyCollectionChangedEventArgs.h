#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class NotifyCollectionChangedEventArgs {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NotifyCollectionChangedEventArgs@DirectUI@@QEAA@XZ
    NotifyCollectionChangedEventArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Action@NotifyCollectionChangedEventArgs@DirectUI@@UEAAJPEAW4NotifyCollectionChangedAction@Interop@Xaml@UI@Windows@@@Z
    virtual long get_Action(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NewItems@NotifyCollectionChangedEventArgs@DirectUI@@UEAAJPEAPEAUIBindableVector@Interop@Xaml@UI@Windows@@@Z
    virtual long get_NewItems(::Windows::UI::Xaml::Interop::IBindableVector * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NewStartingIndex@NotifyCollectionChangedEventArgs@DirectUI@@UEAAJPEAH@Z
    virtual long get_NewStartingIndex(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OldItems@NotifyCollectionChangedEventArgs@DirectUI@@UEAAJPEAPEAUIBindableVector@Interop@Xaml@UI@Windows@@@Z
    virtual long get_OldItems(::Windows::UI::Xaml::Interop::IBindableVector * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OldStartingIndex@NotifyCollectionChangedEventArgs@DirectUI@@UEAAJPEAH@Z
    virtual long get_OldStartingIndex(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NewItems@NotifyCollectionChangedEventArgs@DirectUI@@QEAAJPEAUIBindableVector@Interop@Xaml@UI@Windows@@@Z
    long put_NewItems(::Windows::UI::Xaml::Interop::IBindableVector *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OldItems@NotifyCollectionChangedEventArgs@DirectUI@@QEAAJPEAUIBindableVector@Interop@Xaml@UI@Windows@@@Z
    long put_OldItems(::Windows::UI::Xaml::Interop::IBindableVector *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NotifyCollectionChangedEventArgs@DirectUI@@UEAA@XZ
    virtual ~NotifyCollectionChangedEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@NotifyCollectionChangedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@NotifyCollectionChangedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@NotifyCollectionChangedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@NotifyCollectionChangedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

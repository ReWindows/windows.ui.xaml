#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class NotifyCollectionChangedEventArgsFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithAllParameters@NotifyCollectionChangedEventArgsFactory@DirectUI@@UEAAJW4NotifyCollectionChangedAction@Interop@Xaml@UI@Windows@@PEAUIBindableVector@4567@1HHPEAUIInspectable@@PEAPEAU9@PEAPEAUINotifyCollectionChangedEventArgs@4567@@Z
    virtual long CreateInstanceWithAllParameters(int, ::Windows::UI::Xaml::Interop::IBindableVector *, ::Windows::UI::Xaml::Interop::IBindableVector *, int, int, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@NotifyCollectionChangedEventArgsFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@NotifyCollectionChangedEventArgsFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@NotifyCollectionChangedEventArgsFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithAllParametersImpl@NotifyCollectionChangedEventArgsFactory@DirectUI@@AEAAJW4NotifyCollectionChangedAction@Interop@Xaml@UI@Windows@@PEAUIBindableVector@4567@1HHPEAUIInspectable@@PEAPEAU9@PEAPEAUINotifyCollectionChangedEventArgs@4567@@Z
    long CreateInstanceWithAllParametersImpl(int, ::Windows::UI::Xaml::Interop::IBindableVector *, ::Windows::UI::Xaml::Interop::IBindableVector *, int, int, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs * *);
};
} // namespace DirectUI

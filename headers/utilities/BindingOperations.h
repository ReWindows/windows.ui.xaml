#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class BindingOperations {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBinding@BindingOperations@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIDependencyProperty@456@PEAUIBindingBase@Data@456@@Z
    virtual long SetBinding(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IDependencyProperty *, ::Windows::UI::Xaml::Data::IBindingBase *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBinding@BindingOperations@DirectUI@@QEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEBVCDependencyProperty@@PEAUIBindingBase@Data@456@@Z
    long SetBinding(::Windows::UI::Xaml::IDependencyObject *, CDependencyProperty const *, ::Windows::UI::Xaml::Data::IBindingBase *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBindingImpl@BindingOperations@DirectUI@@SAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIDependencyProperty@456@PEAUIBindingBase@Data@456@@Z
    static long SetBindingImpl(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IDependencyProperty *, ::Windows::UI::Xaml::Data::IBindingBase *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@BindingOperations@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@BindingOperations@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@BindingOperations@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

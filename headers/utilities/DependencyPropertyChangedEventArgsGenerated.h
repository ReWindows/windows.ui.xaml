#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class DependencyPropertyChangedEventArgsGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NewValue@DependencyPropertyChangedEventArgsGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_NewValue(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OldValue@DependencyPropertyChangedEventArgsGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_OldValue(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Property@DependencyPropertyChangedEventArgsGenerated@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_Property(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NewValue@DependencyPropertyChangedEventArgsGenerated@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long put_NewValue(IInspectable *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DependencyPropertyChangedEventArgsGenerated@DirectUI@@UEAA@XZ
    virtual ~DependencyPropertyChangedEventArgsGenerated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DependencyPropertyChangedEventArgsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DependencyPropertyChangedEventArgsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@DependencyPropertyChangedEventArgsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DependencyPropertyChangedEventArgsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

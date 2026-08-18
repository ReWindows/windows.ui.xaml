#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class FocusManagerLostFocusEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CorrelationId@FocusManagerLostFocusEventArgs@DirectUI@@UEAAJPEAU_GUID@@@Z
    virtual long get_CorrelationId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OldFocusedElement@FocusManagerLostFocusEventArgs@DirectUI@@UEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long get_OldFocusedElement(::Windows::UI::Xaml::IDependencyObject * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@FocusManagerLostFocusEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@FocusManagerLostFocusEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@FocusManagerLostFocusEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@FocusManagerLostFocusEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

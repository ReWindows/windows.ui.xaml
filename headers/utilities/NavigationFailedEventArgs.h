#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class NavigationFailedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Exception@NavigationFailedEventArgs@DirectUI@@UEAAJPEAJ@Z
    virtual long get_Exception(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@NavigationFailedEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourcePageType@NavigationFailedEventArgs@DirectUI@@UEAAJPEAUTypeName@Interop@Xaml@UI@Windows@@@Z
    virtual long get_SourcePageType(::Windows::UI::Xaml::Interop::TypeName *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@NavigationFailedEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationFailedEventArgs@DirectUI@@UEAA@XZ
    virtual ~NavigationFailedEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@NavigationFailedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@NavigationFailedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@NavigationFailedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@NavigationFailedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

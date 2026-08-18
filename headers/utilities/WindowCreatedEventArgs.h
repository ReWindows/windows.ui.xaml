#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class WindowCreatedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Window@WindowCreatedEventArgs@DirectUI@@UEAAJPEAPEAUIWindow@Xaml@UI@Windows@@@Z
    virtual long get_Window(::Windows::UI::Xaml::IWindow * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowCreatedEventArgs@DirectUI@@UEAA@XZ
    virtual ~WindowCreatedEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@WindowCreatedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@WindowCreatedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@WindowCreatedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@WindowCreatedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

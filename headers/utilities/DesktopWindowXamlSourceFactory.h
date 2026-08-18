#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class DesktopWindowXamlSourceFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DesktopWindowXamlSourceFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAU3@PEAPEAUIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@@@Z
    virtual long CreateInstance(IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckActivationAllowed@DesktopWindowXamlSourceFactory@DirectUI@@MEAAJXZ
    virtual long CheckActivationAllowed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DesktopWindowXamlSourceFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DesktopWindowXamlSourceFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DesktopWindowXamlSourceFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

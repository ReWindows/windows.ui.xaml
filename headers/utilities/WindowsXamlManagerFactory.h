#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class WindowsXamlManagerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForCurrentThread@WindowsXamlManagerFactory@DirectUI@@UEAAJPEAPEAUIWindowsXamlManager@Hosting@Xaml@UI@Windows@@@Z
    virtual long InitializeForCurrentThread(::Windows::UI::Xaml::Hosting::IWindowsXamlManager * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckActivationAllowed@WindowsXamlManagerFactory@DirectUI@@MEAAJXZ
    virtual long CheckActivationAllowed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@WindowsXamlManagerFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@WindowsXamlManagerFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@WindowsXamlManagerFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForCurrentThreadImpl@WindowsXamlManagerFactory@DirectUI@@AEAAJPEAPEAUIWindowsXamlManager@Hosting@Xaml@UI@Windows@@@Z
    long InitializeForCurrentThreadImpl(::Windows::UI::Xaml::Hosting::IWindowsXamlManager * *);
};
} // namespace DirectUI

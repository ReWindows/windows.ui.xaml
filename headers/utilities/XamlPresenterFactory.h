#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class XamlPresenterFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromCoreWindow@XamlPresenterFactory@DirectUI@@UEAAJPEAUICoreWindow@Core@UI@Windows@@PEAPEAUIXamlPresenter@Hosting@Xaml@56@@Z
    virtual long CreateFromCoreWindow(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Xaml::Hosting::IXamlPresenter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromHwnd@XamlPresenterFactory@DirectUI@@UEAAJHPEAPEAUIXamlPresenter@Hosting@Xaml@UI@Windows@@@Z
    virtual long CreateFromHwnd(int, ::Windows::UI::Xaml::Hosting::IXamlPresenter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@XamlPresenterFactory@DirectUI@@UEAAJPEAPEAUIXamlPresenter@Hosting@Xaml@UI@Windows@@@Z
    virtual long get_Current(::Windows::UI::Xaml::Hosting::IXamlPresenter * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckActivationAllowed@XamlPresenterFactory@DirectUI@@MEAAJXZ
    virtual long CheckActivationAllowed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@XamlPresenterFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@XamlPresenterFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@XamlPresenterFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromCoreWindowImpl@XamlPresenterFactory@DirectUI@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAPEAUIXamlPresenter@Hosting@Xaml@56@@Z
    long CreateFromCoreWindowImpl(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Xaml::Hosting::IXamlPresenter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromHwndImpl@XamlPresenterFactory@DirectUI@@AEAAJHPEAPEAUIXamlPresenter@Hosting@Xaml@UI@Windows@@@Z
    long CreateFromHwndImpl(int, ::Windows::UI::Xaml::Hosting::IXamlPresenter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentImpl@XamlPresenterFactory@DirectUI@@AEAAJPEAPEAUIXamlPresenter@Hosting@Xaml@UI@Windows@@@Z
    long get_CurrentImpl(::Windows::UI::Xaml::Hosting::IXamlPresenter * *);
};
} // namespace DirectUI

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class XamlRuntimeFactory {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@XamlRuntimeFactory@DirectUI@@UEAAJPEAUIXamlRuntimeSite@Hosting@Xaml@UI@Windows@@@Z
    virtual long SetSite(::Windows::UI::Xaml::Hosting::IXamlRuntimeSite *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnableImmersiveColors@XamlRuntimeFactory@DirectUI@@UEAAJPEAE@Z
    virtual long get_EnableImmersiveColors(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnableWebView@XamlRuntimeFactory@DirectUI@@UEAAJPEAE@Z
    virtual long get_EnableWebView(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EnableImmersiveColors@XamlRuntimeFactory@DirectUI@@UEAAJE@Z
    virtual long put_EnableImmersiveColors(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EnableWebView@XamlRuntimeFactory@DirectUI@@UEAAJE@Z
    virtual long put_EnableWebView(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckActivationAllowed@XamlRuntimeFactory@DirectUI@@MEAAJXZ
    virtual long CheckActivationAllowed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@XamlRuntimeFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@XamlRuntimeFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@XamlRuntimeFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSiteImpl@XamlRuntimeFactory@DirectUI@@AEAAJPEAUIXamlRuntimeSite@Hosting@Xaml@UI@Windows@@@Z
    long SetSiteImpl(::Windows::UI::Xaml::Hosting::IXamlRuntimeSite *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EnableWebViewImpl@XamlRuntimeFactory@DirectUI@@AEAAJE@Z
    long put_EnableWebViewImpl(unsigned char);
};
} // namespace DirectUI

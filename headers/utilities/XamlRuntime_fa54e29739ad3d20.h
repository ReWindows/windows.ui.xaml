#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class XamlRuntime {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreImmersiveColorsEnabled@XamlRuntime@DirectUI@@SAHXZ
    static int AreImmersiveColorsEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXamlRuntimeSiteNoRef@XamlRuntime@DirectUI@@SAPEAUIXamlRuntimeSite@Hosting@Xaml@UI@Windows@@XZ
    static ::Windows::UI::Xaml::Hosting::IXamlRuntimeSite * GetXamlRuntimeSiteNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWebViewEnabled@XamlRuntime@DirectUI@@SAHXZ
    static int IsWebViewEnabled();
};
} // namespace DirectUI

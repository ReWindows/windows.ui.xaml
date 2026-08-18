#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class WebViewMsAppxWebProtocolRegistrationHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@WebViewMsAppxWebProtocolRegistrationHelper@DirectUI@@QEAAJXZ
    long Register();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@WebViewMsAppxWebProtocolRegistrationHelper@DirectUI@@QEAAXXZ
    void Unregister();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebViewMsAppxWebProtocolRegistrationHelper@DirectUI@@QEAA@XZ
    ~WebViewMsAppxWebProtocolRegistrationHelper();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMrtResourceMap@WebViewMsAppxWebProtocolRegistrationHelper@DirectUI@@AEAAJPEAPEAUIResourceMap@@@Z
    long GetMrtResourceMap(IResourceMap * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageInfo@WebViewMsAppxWebProtocolRegistrationHelper@DirectUI@@AEAAJPEAIPEAPEAUPACKAGE_INFO@@@Z
    long GetPackageInfo(unsigned int *, PACKAGE_INFO * *);
};
} // namespace DirectUI

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class WebViewDeferredPermissionRequest {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWebView@WebViewDeferredPermissionRequest@DirectUI@@QEAAJPEAVWebView@2@@Z
    long SetWebView(::DirectUI::WebView *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebViewDeferredPermissionRequest@DirectUI@@UEAA@XZ
    virtual ~WebViewDeferredPermissionRequest();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPermissions@WebViewDeferredPermissionRequest@DirectUI@@AEAAJW4WebViewPermissionState@Controls@Xaml@UI@Windows@@@Z
    long SetPermissions(int);
};
} // namespace DirectUI

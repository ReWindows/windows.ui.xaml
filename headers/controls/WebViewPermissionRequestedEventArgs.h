#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class WebViewPermissionRequestedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PermissionRequest@WebViewPermissionRequestedEventArgs@DirectUI@@UEAAJPEAPEAUIWebViewPermissionRequest@Controls@Xaml@UI@Windows@@@Z
    virtual long get_PermissionRequest(::Windows::UI::Xaml::Controls::IWebViewPermissionRequest * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebViewPermissionRequestedEventArgs@DirectUI@@UEAA@XZ
    virtual ~WebViewPermissionRequestedEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@WebViewPermissionRequestedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@WebViewPermissionRequestedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@WebViewPermissionRequestedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@WebViewPermissionRequestedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

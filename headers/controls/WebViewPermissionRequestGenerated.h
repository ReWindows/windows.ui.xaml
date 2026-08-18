#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class WebViewPermissionRequestGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Allow@WebViewPermissionRequestGenerated@DirectUI@@UEAAJXZ
    virtual long Allow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Defer@WebViewPermissionRequestGenerated@DirectUI@@UEAAJXZ
    virtual long Defer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deny@WebViewPermissionRequestGenerated@DirectUI@@UEAAJXZ
    virtual long Deny();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@WebViewPermissionRequestGenerated@DirectUI@@UEAAJPEAI@Z
    virtual long get_Id(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PermissionType@WebViewPermissionRequestGenerated@DirectUI@@UEAAJPEAW4WebViewPermissionType@Controls@Xaml@UI@Windows@@@Z
    virtual long get_PermissionType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_State@WebViewPermissionRequestGenerated@DirectUI@@UEAAJPEAW4WebViewPermissionState@Controls@Xaml@UI@Windows@@@Z
    virtual long get_State(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@WebViewPermissionRequestGenerated@DirectUI@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_Uri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_State@WebViewPermissionRequestGenerated@DirectUI@@QEAAJW4WebViewPermissionState@Controls@Xaml@UI@Windows@@@Z
    long put_State(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebViewPermissionRequestGenerated@DirectUI@@UEAA@XZ
    virtual ~WebViewPermissionRequestGenerated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@WebViewPermissionRequestGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@WebViewPermissionRequestGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@WebViewPermissionRequestGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@WebViewPermissionRequestGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

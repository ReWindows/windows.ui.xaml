#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
namespace DirectUI {
class WebViewDeferredPermissionRequestGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Allow@WebViewDeferredPermissionRequestGenerated@DirectUI@@UEAAJXZ
    virtual long Allow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deny@WebViewDeferredPermissionRequestGenerated@DirectUI@@UEAAJXZ
    virtual long Deny();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@WebViewDeferredPermissionRequestGenerated@DirectUI@@UEAAJPEAI@Z
    virtual long get_Id(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PermissionType@WebViewDeferredPermissionRequestGenerated@DirectUI@@UEAAJPEAW4WebViewPermissionType@Controls@Xaml@UI@Windows@@@Z
    virtual long get_PermissionType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@WebViewDeferredPermissionRequestGenerated@DirectUI@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_Uri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Context@WebViewDeferredPermissionRequestGenerated@DirectUI@@QEAAJI@Z
    long put_Context(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Id@WebViewDeferredPermissionRequestGenerated@DirectUI@@QEAAJI@Z
    long put_Id(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PermissionType@WebViewDeferredPermissionRequestGenerated@DirectUI@@QEAAJW4WebViewPermissionType@Controls@Xaml@UI@Windows@@@Z
    long put_PermissionType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Uri@WebViewDeferredPermissionRequestGenerated@DirectUI@@QEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    long put_Uri(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebViewDeferredPermissionRequestGenerated@DirectUI@@UEAA@XZ
    virtual ~WebViewDeferredPermissionRequestGenerated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@WebViewDeferredPermissionRequestGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@WebViewDeferredPermissionRequestGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@WebViewDeferredPermissionRequestGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@WebViewDeferredPermissionRequestGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

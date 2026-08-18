#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class WebViewNavigationCompletedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSuccess@WebViewNavigationCompletedEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsSuccess(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@WebViewNavigationCompletedEventArgs@DirectUI@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_Uri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WebErrorStatus@WebViewNavigationCompletedEventArgs@DirectUI@@UEAAJPEAW4WebErrorStatus@Web@Windows@@@Z
    virtual long get_WebErrorStatus(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Uri@WebViewNavigationCompletedEventArgs@DirectUI@@QEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    long put_Uri(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebViewNavigationCompletedEventArgs@DirectUI@@UEAA@XZ
    virtual ~WebViewNavigationCompletedEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@WebViewNavigationCompletedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@WebViewNavigationCompletedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@WebViewNavigationCompletedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@WebViewNavigationCompletedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

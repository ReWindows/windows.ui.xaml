#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class WebViewDOMContentLoadedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@WebViewDOMContentLoadedEventArgs@DirectUI@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_Uri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Uri@WebViewDOMContentLoadedEventArgs@DirectUI@@QEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    long put_Uri(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebViewDOMContentLoadedEventArgs@DirectUI@@UEAA@XZ
    virtual ~WebViewDOMContentLoadedEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@WebViewDOMContentLoadedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@WebViewDOMContentLoadedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@WebViewDOMContentLoadedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@WebViewDOMContentLoadedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

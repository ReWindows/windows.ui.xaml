#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class WebViewNavigationStartingEventArgsGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationPostData@WebViewNavigationStartingEventArgsGenerated@DirectUI@@UEAAJPEAIPEAPEAE@Z
    virtual long GetNavigationPostData(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Cancel@WebViewNavigationStartingEventArgsGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_Cancel(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@WebViewNavigationStartingEventArgsGenerated@DirectUI@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_Uri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Cancel@WebViewNavigationStartingEventArgsGenerated@DirectUI@@UEAAJE@Z
    virtual long put_Cancel(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Uri@WebViewNavigationStartingEventArgsGenerated@DirectUI@@QEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    long put_Uri(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebViewNavigationStartingEventArgsGenerated@DirectUI@@UEAA@XZ
    virtual ~WebViewNavigationStartingEventArgsGenerated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@WebViewNavigationStartingEventArgsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@WebViewNavigationStartingEventArgsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@WebViewNavigationStartingEventArgsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@WebViewNavigationStartingEventArgsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

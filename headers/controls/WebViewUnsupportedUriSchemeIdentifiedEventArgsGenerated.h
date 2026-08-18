#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class WebViewUnsupportedUriSchemeIdentifiedEventArgsGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationPostData@WebViewUnsupportedUriSchemeIdentifiedEventArgsGenerated@DirectUI@@UEAAJPEAIPEAPEAE@Z
    virtual long GetNavigationPostData(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@WebViewUnsupportedUriSchemeIdentifiedEventArgsGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@WebViewUnsupportedUriSchemeIdentifiedEventArgsGenerated@DirectUI@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_Uri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@WebViewUnsupportedUriSchemeIdentifiedEventArgsGenerated@DirectUI@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebViewUnsupportedUriSchemeIdentifiedEventArgsGenerated@DirectUI@@UEAA@XZ
    virtual ~WebViewUnsupportedUriSchemeIdentifiedEventArgsGenerated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@WebViewUnsupportedUriSchemeIdentifiedEventArgsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@WebViewUnsupportedUriSchemeIdentifiedEventArgsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@WebViewUnsupportedUriSchemeIdentifiedEventArgsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@WebViewUnsupportedUriSchemeIdentifiedEventArgsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

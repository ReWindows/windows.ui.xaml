#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class WebViewNewWindowRequestedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@WebViewNewWindowRequestedEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Referrer@WebViewNewWindowRequestedEventArgs@DirectUI@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_Referrer(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@WebViewNewWindowRequestedEventArgs@DirectUI@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_Uri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@WebViewNewWindowRequestedEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebViewNewWindowRequestedEventArgs@DirectUI@@UEAA@XZ
    virtual ~WebViewNewWindowRequestedEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@WebViewNewWindowRequestedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@WebViewNewWindowRequestedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@WebViewNewWindowRequestedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@WebViewNewWindowRequestedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

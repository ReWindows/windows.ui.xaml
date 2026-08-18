#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class WebViewUnviewableContentIdentifiedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MediaType@WebViewUnviewableContentIdentifiedEventArgs@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_MediaType(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Referrer@WebViewUnviewableContentIdentifiedEventArgs@DirectUI@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_Referrer(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@WebViewUnviewableContentIdentifiedEventArgs@DirectUI@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_Uri(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebViewUnviewableContentIdentifiedEventArgs@DirectUI@@UEAA@XZ
    virtual ~WebViewUnviewableContentIdentifiedEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@WebViewUnviewableContentIdentifiedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@WebViewUnviewableContentIdentifiedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@WebViewUnviewableContentIdentifiedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@WebViewUnviewableContentIdentifiedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class WebViewWebResourceRequestedEventArgsGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferral@WebViewWebResourceRequestedEventArgsGenerated@DirectUI@@UEAAJPEAPEAUIDeferral@Foundation@Windows@@@Z
    virtual long GetDeferral(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Request@WebViewWebResourceRequestedEventArgsGenerated@DirectUI@@UEAAJPEAPEAUIHttpRequestMessage@Http@Web@Windows@@@Z
    virtual long get_Request(::Windows::Web::Http::IHttpRequestMessage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Response@WebViewWebResourceRequestedEventArgsGenerated@DirectUI@@UEAAJPEAPEAUIHttpResponseMessage@Http@Web@Windows@@@Z
    virtual long get_Response(::Windows::Web::Http::IHttpResponseMessage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Response@WebViewWebResourceRequestedEventArgsGenerated@DirectUI@@UEAAJPEAUIHttpResponseMessage@Http@Web@Windows@@@Z
    virtual long put_Response(::Windows::Web::Http::IHttpResponseMessage *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@WebViewWebResourceRequestedEventArgsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@WebViewWebResourceRequestedEventArgsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@WebViewWebResourceRequestedEventArgsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@WebViewWebResourceRequestedEventArgsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

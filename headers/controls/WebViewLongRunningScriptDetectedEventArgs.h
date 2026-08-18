#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class WebViewLongRunningScriptDetectedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExecutionTime@WebViewLongRunningScriptDetectedEventArgs@DirectUI@@UEAAJPEAUTimeSpan@Foundation@Windows@@@Z
    virtual long get_ExecutionTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StopPageScriptExecution@WebViewLongRunningScriptDetectedEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_StopPageScriptExecution(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StopPageScriptExecution@WebViewLongRunningScriptDetectedEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_StopPageScriptExecution(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@WebViewLongRunningScriptDetectedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@WebViewLongRunningScriptDetectedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@WebViewLongRunningScriptDetectedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@WebViewLongRunningScriptDetectedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

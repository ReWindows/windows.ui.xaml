#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class WebViewConsoleLogger {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WebViewConsoleLogger@DirectUI@@QEAA@XZ
    WebViewConsoleLogger();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@WebViewConsoleLogger@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@WebViewConsoleLogger@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogMessage@WebViewConsoleLogger@DirectUI@@MEAAJHPEBG0@Z
    virtual long LogMessage(int, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@WebViewConsoleLogger@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI

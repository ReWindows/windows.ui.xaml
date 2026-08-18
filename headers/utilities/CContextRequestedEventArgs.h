#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class CContextRequestedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFrameworkPeer@CContextRequestedEventArgs@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long CreateFrameworkPeer(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPosition@CContextRequestedEventArgs@@QEAAJPEAVCUIElement@@PEAUPoint@Foundation@Windows@@PEAE@Z
    long TryGetPosition(CUIElement *, WindissectOpaque *, unsigned char *);
};

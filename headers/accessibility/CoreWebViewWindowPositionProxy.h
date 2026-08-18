#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CoreWebViewWindowPositionProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add_WindowPositionChanged@CoreWebViewWindowPositionProxy@@UEAAJPEAUIUnknown@@PEAUEventRegistrationToken@@@Z
    virtual long Add_WindowPositionChanged(IUnknown *, EventRegistrationToken *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CoreWebViewWindowPositionProxy@@QEAA@XZ
    CoreWebViewWindowPositionProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove_WindowPositionChanged@CoreWebViewWindowPositionProxy@@UEAAJUEventRegistrationToken@@@Z
    virtual long Remove_WindowPositionChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreWebViewWindowPositionProxy@@UEAA@XZ
    virtual ~CoreWebViewWindowPositionProxy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCoreWindowInternal@CoreWebViewWindowPositionProxy@@AEAAJXZ
    long CreateCoreWindowInternal();
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CVisualStateChangedEventArgs {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVisualStateChangedEventArgs@@QEAA@PEAVCVisualState@@0PEAVCControl@@@Z
    CVisualStateChangedEventArgs(CVisualState *, CVisualState *, CControl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFrameworkPeer@CVisualStateChangedEventArgs@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long CreateFrameworkPeer(IInspectable * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVisualStateChangedEventArgs@@UEAA@XZ
    virtual ~CVisualStateChangedEventArgs();
};

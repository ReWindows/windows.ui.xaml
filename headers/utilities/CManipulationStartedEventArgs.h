#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CManipulationStartedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFrameworkPeer@CManipulationStartedEventArgs@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long CreateFrameworkPeer(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCumulative@CManipulationStartedEventArgs@@QEAAJPEAPEAVCManipulationDelta@@@Z
    long GetCumulative(CManipulationDelta * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CManipulationStartedEventArgs@@UEAA@XZ
    virtual ~CManipulationStartedEventArgs();
};

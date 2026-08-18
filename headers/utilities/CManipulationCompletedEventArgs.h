#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CManipulationCompletedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFrameworkPeer@CManipulationCompletedEventArgs@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long CreateFrameworkPeer(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCumulative@CManipulationCompletedEventArgs@@QEAAJPEAPEAVCManipulationDelta@@@Z
    long GetCumulative(CManipulationDelta * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVelocities@CManipulationCompletedEventArgs@@QEAAJPEAPEAVCManipulationVelocities@@@Z
    long GetVelocities(CManipulationVelocities * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CManipulationCompletedEventArgs@@UEAA@XZ
    virtual ~CManipulationCompletedEventArgs();
};

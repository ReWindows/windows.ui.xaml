#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CManipulationInertiaStartingEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFrameworkPeer@CManipulationInertiaStartingEventArgs@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long CreateFrameworkPeer(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCumulative@CManipulationInertiaStartingEventArgs@@QEAAJPEAPEAVCManipulationDelta@@@Z
    long GetCumulative(CManipulationDelta * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDelta@CManipulationInertiaStartingEventArgs@@QEAAJPEAPEAVCManipulationDelta@@@Z
    long GetDelta(CManipulationDelta * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVelocities@CManipulationInertiaStartingEventArgs@@QEAAJPEAPEAVCManipulationVelocities@@@Z
    long GetVelocities(CManipulationVelocities * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CManipulationInertiaStartingEventArgs@@UEAA@XZ
    virtual ~CManipulationInertiaStartingEventArgs();
};

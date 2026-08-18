#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CManipulationDeltaEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFrameworkPeer@CManipulationDeltaEventArgs@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long CreateFrameworkPeer(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCumulative@CManipulationDeltaEventArgs@@QEAAJPEAPEAVCManipulationDelta@@@Z
    long GetCumulative(CManipulationDelta * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDelta@CManipulationDeltaEventArgs@@QEAAJPEAPEAVCManipulationDelta@@@Z
    long GetDelta(CManipulationDelta * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVelocities@CManipulationDeltaEventArgs@@QEAAJPEAPEAVCManipulationVelocities@@@Z
    long GetVelocities(CManipulationVelocities * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CManipulationDeltaEventArgs@@UEAA@XZ
    virtual ~CManipulationDeltaEventArgs();
};

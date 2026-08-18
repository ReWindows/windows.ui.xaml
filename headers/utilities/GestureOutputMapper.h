#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class GestureOutputMapper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInertiaParametersFromMsg@GestureOutputMapper@@QEAA?AUInertiaParameters@1@AEBUTouchInteractionMsg@@@Z
    WindissectOpaque GetInertiaParametersFromMsg(TouchInteractionMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHolding@GestureOutputMapper@@QEAA?AUTouchInteractionMsg@@AEBUPoint@Foundation@Windows@@W4HoldingState@Input@UI@5@@Z
    TouchInteractionMsg OnHolding(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationCompleted@GestureOutputMapper@@QEAA?AUTouchInteractionMsg@@AEBUPoint@Foundation@Windows@@W4ManipulationModes@DirectUI@@AEBUManipulationDelta@Input@UI@5@AEBUManipulationVelocities@9UI@5@PEA_NM@Z
    TouchInteractionMsg OnManipulationCompleted(WindissectOpaque const &, int, ::Windows::UI::Input::ManipulationDelta const &, ::Windows::UI::Input::ManipulationVelocities const &, bool *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationInertiaStarting@GestureOutputMapper@@QEAA?AUTouchInteractionMsg@@AEBUPoint@Foundation@Windows@@AEBUManipulationDelta@Input@UI@5@1AEBUManipulationVelocities@785@M@Z
    TouchInteractionMsg OnManipulationInertiaStarting(WindissectOpaque const &, ::Windows::UI::Input::ManipulationDelta const &, ::Windows::UI::Input::ManipulationDelta const &, ::Windows::UI::Input::ManipulationVelocities const &, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationStarted@GestureOutputMapper@@QEAA?AUTouchInteractionMsg@@AEBUPoint@Foundation@Windows@@AEBUManipulationDelta@Input@UI@5@M@Z
    TouchInteractionMsg OnManipulationStarted(WindissectOpaque const &, ::Windows::UI::Input::ManipulationDelta const &, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationUpdated@GestureOutputMapper@@QEAA?AUTouchInteractionMsg@@AEBUPoint@Foundation@Windows@@AEBUManipulationDelta@Input@UI@5@1AEBUManipulationVelocities@785@M@Z
    TouchInteractionMsg OnManipulationUpdated(WindissectOpaque const &, ::Windows::UI::Input::ManipulationDelta const &, ::Windows::UI::Input::ManipulationDelta const &, ::Windows::UI::Input::ManipulationVelocities const &, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSecondaryTapped@GestureOutputMapper@@QEAA?AUTouchInteractionMsg@@AEBUPoint@Foundation@Windows@@@Z
    TouchInteractionMsg OnSecondaryTapped(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTapped@GestureOutputMapper@@QEAA?AUTouchInteractionMsg@@AEBUPoint@Foundation@Windows@@I@Z
    TouchInteractionMsg OnTapped(WindissectOpaque const &, unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTapped@GestureOutputMapper@@AEAAXAEAUTouchInteractionMsg@@AEBUPoint@Foundation@Windows@@@Z
    void OnTapped(TouchInteractionMsg &, WindissectOpaque const &);
};

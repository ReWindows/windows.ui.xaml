#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI::Components::Moco {
class LayoutStrategyBase {
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReferenceDirectionFromWindow@LayoutStrategyBase@Moco@Components@DirectUI@@IEBA?AW4RelativePosition@4@URect@Foundation@Windows@@0@Z
    int GetReferenceDirectionFromWindow(WindissectOpaque, WindissectOpaque) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemainingGroups@LayoutStrategyBase@Moco@Components@DirectUI@@KAHHHW4RelativePosition@4@@Z
    static int GetRemainingGroups(int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemainingItems@LayoutStrategyBase@Moco@Components@DirectUI@@KAHHHW4RelativePosition@4@@Z
    static int GetRemainingItems(int, int, int);
};
} // namespace DirectUI::Components::Moco

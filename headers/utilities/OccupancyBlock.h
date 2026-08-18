#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI::VariableSizedWrapGrid {
class OccupancyBlock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOccupancyBlock@OccupancyBlock@VariableSizedWrapGrid@DirectUI@@SAJIIPEAPEAV123@@Z
    static long CreateOccupancyBlock(unsigned int, unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBlock@OccupancyBlock@VariableSizedWrapGrid@DirectUI@@QEAAJPEAIPEAPEAV123@@Z
    long GetBlock(unsigned int *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@OccupancyBlock@VariableSizedWrapGrid@DirectUI@@QEAAJIIPEAI@Z
    long GetItem(unsigned int, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOccupied@OccupancyBlock@VariableSizedWrapGrid@DirectUI@@QEAAJIIPEAI@Z
    long IsOccupied(unsigned int, unsigned int, unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OccupancyBlock@VariableSizedWrapGrid@DirectUI@@UEAA@XZ
    virtual ~OccupancyBlock();
};
} // namespace DirectUI::VariableSizedWrapGrid

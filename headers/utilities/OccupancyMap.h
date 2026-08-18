#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI::VariableSizedWrapGrid {
class OccupancyMap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOccupancyMap@OccupancyMap@VariableSizedWrapGrid@DirectUI@@SAJIIIUSize@Foundation@Windows@@IPEAPEAV123@@Z
    static long CreateOccupancyMap(unsigned int, unsigned int, unsigned int, WindissectOpaque, unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAndFillNextAvailableRect@OccupancyMap@VariableSizedWrapGrid@DirectUI@@QEAAJIIIPEAI@Z
    long FindAndFillNextAvailableRect(unsigned int, unsigned int, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindUsedGridSize@OccupancyMap@VariableSizedWrapGrid@DirectUI@@QEAAJPEAI0@Z
    long FindUsedGridSize(unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentElementIndex@OccupancyMap@VariableSizedWrapGrid@DirectUI@@QEAAJPEAI@Z
    long GetCurrentElementIndex(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentItemRect@OccupancyMap@VariableSizedWrapGrid@DirectUI@@QEAAJPEAURect@Foundation@Windows@@@Z
    long GetCurrentItemRect(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetIndexFromNavigationAction@OccupancyMap@VariableSizedWrapGrid@DirectUI@@QEAAJIW4KeyNavigationAction@Controls@Xaml@UI@Windows@@EPEAIPEAE@Z
    long GetTargetIndexFromNavigationAction(unsigned int, int, unsigned char, unsigned int *, unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OccupancyMap@VariableSizedWrapGrid@DirectUI@@UEAA@XZ
    virtual ~OccupancyMap();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillCurrentItemRect@OccupancyMap@VariableSizedWrapGrid@DirectUI@@AEAAJIII@Z
    long FillCurrentItemRect(unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextAvailableRectInternal@OccupancyMap@VariableSizedWrapGrid@DirectUI@@AEAAJIIPEAI@Z
    long FindNextAvailableRectInternal(unsigned int, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveDownOrRight@OccupancyMap@VariableSizedWrapGrid@DirectUI@@AEAAJAEAIIPEAE@Z
    long MoveDownOrRight(unsigned int &, unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveUpOrLeft@OccupancyMap@VariableSizedWrapGrid@DirectUI@@AEAAJAEAIPEAE@Z
    long MoveUpOrLeft(unsigned int &, unsigned char *);
};
} // namespace DirectUI::VariableSizedWrapGrid

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
class CFigureIterator {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentSegment@CFigureIterator@@QEBAHAEAEAEAPEBUXPOINTF@@@Z
    int GetCurrentSegment(unsigned char &, XPOINTF const * &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToNextSegment@CFigureIterator@@QEAAHXZ
    int SetToNextSegment();
};

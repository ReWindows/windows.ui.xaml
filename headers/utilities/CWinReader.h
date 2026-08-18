#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class CWinReader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmptyElement@CWinReader@@QEAA_NXZ
    bool EmptyElement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPosition@CWinReader@@QEAAJPEAI0@Z
    long GetPosition(unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInput@CWinReader@@QEAAJIPEBE_N@Z
    long SetInput(unsigned int, unsigned char const *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWinReader@@QEAA@XZ
    ~CWinReader();
};

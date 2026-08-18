#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CFlatteningSink {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcceptPoint@CFlatteningSink@@UEAAJAEBUXPOINTF@@MAEAH@Z
    virtual long AcceptPoint(XPOINTF const &, float, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcceptPointAndTangent@CFlatteningSink@@UEAAJAEBUXPOINTF@@0H@Z
    virtual long AcceptPointAndTangent(XPOINTF const &, XPOINTF const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Begin@CFlatteningSink@@UEAAJAEBUXPOINTF@@@Z
    virtual long Begin(XPOINTF const &);
};

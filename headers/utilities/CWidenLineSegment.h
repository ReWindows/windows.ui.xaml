#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CWidenLineSegment {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstTangent@CWidenLineSegment@@UEBAJAEAUXPOINTF@@@Z
    virtual long GetFirstTangent(XPOINTF &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@CWidenLineSegment@@QEAAXNNAEAUXPOINTF@@AEBU2@PEBVCMILMatrix@@@Z
    void Set(double, double, XPOINTF &, XPOINTF const &, CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Widen@CWidenLineSegment@@UEAAJAEAUXPOINTF@@0@Z
    virtual long Widen(XPOINTF &, XPOINTF &);
};

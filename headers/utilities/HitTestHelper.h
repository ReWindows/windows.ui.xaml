#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class HitTestHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoBezier@HitTestHelper@@QEAAXAEBUXPOINTF@@00@Z
    void DoBezier(XPOINTF const &, XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoLine@HitTestHelper@@QEAAXAEBUXPOINTF@@@Z
    void DoLine(XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoQuadraticBezier@HitTestHelper@@QEAAXAEBUXPOINTF@@0@Z
    void DoQuadraticBezier(XPOINTF const &, XPOINTF const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HitTestHelper@@QEAA@MPEBVCMILMatrix@@@Z
    HitTestHelper(float, CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAt@HitTestHelper@@QEAAXAEBUXPOINTF@@@Z
    void StartAt(XPOINTF const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForNaN@HitTestHelper@@IEAAXAEBUXPOINTF@@@Z
    void CheckForNaN(XPOINTF const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcceptPoint@HitTestHelper@@EEAAJAEBUXPOINTF@@MAEAH@Z
    virtual long AcceptPoint(XPOINTF const &, float, int &);
};

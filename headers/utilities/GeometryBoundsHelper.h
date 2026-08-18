#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class GeometryBoundsHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoArc@GeometryBoundsHelper@@QEAAXAEBUXPOINTF@@AEBUXSIZEF@@MII@Z
    void DoArc(XPOINTF const &, XSIZEF const &, float, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoBezier@GeometryBoundsHelper@@QEAAXAEBUXPOINTF@@00@Z
    void DoBezier(XPOINTF const &, XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoQuadraticBezier@GeometryBoundsHelper@@QEAAXAEBUXPOINTF@@0@Z
    void DoQuadraticBezier(XPOINTF const &, XPOINTF const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcceptPoint@GeometryBoundsHelper@@AEAAXAEBUXPOINTF@@@Z
    void AcceptPoint(XPOINTF const &);
};

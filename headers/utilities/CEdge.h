#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class CEdge {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEdge@@QEAA@XZ
    CEdge();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubpixelLeft@CEdge@@QEBAHXZ
    int GetSubpixelLeft() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubpixelRight@CEdge@@QEBAHXZ
    int GetSubpixelRight() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEdgeLessThan@CEdge@@QEBAHAEBV1@@Z
    int IsEdgeLessThan(CEdge const &) const;
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class PointHitTestGeometrySink {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResult@PointHitTestGeometrySink@@UEAAJPEAI@Z
    virtual long GetResult(unsigned int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PointHitTestGeometrySink@@QEAA@AEBUXPOINTF@@MPEBVCMILMatrix@@@Z
    PointHitTestGeometrySink(XPOINTF const &, float, CMILMatrix const *);
};

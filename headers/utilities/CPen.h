#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CPen {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcceptCurvePoint@CPen@@UEAAJAEBUXPOINTF@@0H@Z
    virtual long AcceptCurvePoint(XPOINTF const &, XPOINTF const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeRadiusVector@CPen@@QEBAJAEBUXPOINTF@@AEAU2@@Z
    long ComputeRadiusVector(XPOINTF const &, XPOINTF &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@CPen@@QEAAIAEBVCPenGeometry@@PEBVCMILMatrix@@MPEBUXRECTF_RB@@@Z
    unsigned int Set(CPenGeometry const &, CMILMatrix const *, float, XRECTF_RB const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOffset@CPen@@QEAAJAEBUXPOINTF@@@Z
    long UpdateOffset(XPOINTF const &);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOffsetVector@CPen@@IEBAXAEBUXPOINTF@@AEAU2@@Z
    void GetOffsetVector(XPOINTF const &, XPOINTF &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPenVector@CPen@@IEBA?AUXPOINTF@@AEBU2@@Z
    XPOINTF GetPenVector(XPOINTF const &) const;
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPenShape@CPen@@AEAAIAEBVCPenGeometry@@PEBVCMILMatrix@@M@Z
    unsigned int SetPenShape(CPenGeometry const &, CMILMatrix const *, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThreshold@CPen@@AEAAXPEBVCMILMatrix@@M@Z
    void SetThreshold(CMILMatrix const *, float);
};

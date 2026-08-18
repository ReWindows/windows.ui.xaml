#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
class CDasher {
public:
    class CDashSequence;
    class CSegData;
    class CSegments;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Aborted@CDasher@@UEAAHXZ
    virtual int Aborted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcceptCurvePoint@CDasher@@UEAAJAEBUXPOINTF@@0H@Z
    virtual long AcceptCurvePoint(XPOINTF const &, XPOINTF const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcceptLinePoint@CDasher@@UEAAJAEBUXPOINTF@@@Z
    virtual long AcceptLinePoint(XPOINTF const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDasher@@QEAA@PEAVCPen@@PEBVCMILMatrix@@@Z
    CDasher(CPen *, CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoCorner@CDasher@@UEAAJAEBUXPOINTF@@00W4XcpLineJoin@@HHH@Z
    virtual long DoCorner(XPOINTF const &, XPOINTF const &, XPOINTF const &, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndStrokeClosed@CDasher@@UEAAJAEBUXPOINTF@@0@Z
    virtual long EndStrokeClosed(XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndStrokeOpen@CDasher@@UEAAJHAEBUXPOINTF@@0W4XcpPenCap@@1@Z
    virtual long EndStrokeOpen(int, XPOINTF const &, XPOINTF const &, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@CDasher@@QEAAJAEBVCPlainPen@@PEBUXRECTF_RB@@@Z
    long Set(CPlainPen const &, XRECTF_RB const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartFigure@CDasher@@UEAAJAEBUXPOINTF@@0HW4XcpPenCap@@@Z
    virtual long StartFigure(XPOINTF const &, XPOINTF const &, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDasher@@UEAA@XZ
    virtual ~CDasher();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoDashOrGapEndAtEdgeEnd@CDasher@@AEAAJHH@Z
    long DoDashOrGapEndAtEdgeEnd(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtendCurrentDash@CDasher@@AEAAJMH@Z
    long ExtendCurrentDash(float, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CDasher@@AEAAJH@Z
    long Flush(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartANewDash@CDasher@@AEAAJMMH@Z
    long StartANewDash(float, float, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TerminateCurrentDash@CDasher@@AEAAJMH@Z
    long TerminateCurrentDash(float, int);
};

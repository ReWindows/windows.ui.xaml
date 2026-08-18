#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
class CSimplePen {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Aborted@CSimplePen@@UEAAHXZ
    virtual int Aborted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcceptLinePoint@CSimplePen@@UEAAJAEBUXPOINTF@@@Z
    virtual long AcceptLinePoint(XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoCorner@CSimplePen@@UEAAJAEBUXPOINTF@@00W4XcpLineJoin@@HHH@Z
    virtual long DoCorner(XPOINTF const &, XPOINTF const &, XPOINTF const &, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndStrokeClosed@CSimplePen@@UEAAJAEBUXPOINTF@@0@Z
    virtual long EndStrokeClosed(XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndStrokeOpen@CSimplePen@@UEAAJHAEBUXPOINTF@@0W4XcpPenCap@@1@Z
    virtual long EndStrokeOpen(int, XPOINTF const &, XPOINTF const &, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RoundTo@CSimplePen@@UEAAJAEBUXPOINTF@@000@Z
    virtual long RoundTo(XPOINTF const &, XPOINTF const &, XPOINTF const &, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartFigure@CSimplePen@@UEAAJAEBUXPOINTF@@0HW4XcpPenCap@@@Z
    virtual long StartFigure(XPOINTF const &, XPOINTF const &, int, int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCurvePoint@CSimplePen@@MEAAJAEBUXPOINTF@@0@Z
    virtual long ProcessCurvePoint(XPOINTF const &, XPOINTF const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BevelCorner@CSimplePen@@AEAAJW4_RAIL_SIDE@@AEBUXPOINTF@@@Z
    long BevelCorner(int, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Do180DegreesMiter@CSimplePen@@AEAAJXZ
    long Do180DegreesMiter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoBaseCap@CSimplePen@@AEAAJW4_RAIL_TERMINAL@@AEBUXPOINTF@@1W4XcpPenCap@@@Z
    long DoBaseCap(int, XPOINTF const &, XPOINTF const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoLimitedMiter@CSimplePen@@AEAAJAEBUXPOINTF@@0M0W4_RAIL_SIDE@@@Z
    long DoLimitedMiter(XPOINTF const &, XPOINTF const &, float, XPOINTF const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoRoundCap@CSimplePen@@AEAAJW4_RAIL_TERMINAL@@AEBUXPOINTF@@@Z
    long DoRoundCap(int, XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoSquareCap@CSimplePen@@AEAAJW4_RAIL_TERMINAL@@AEBUXPOINTF@@@Z
    long DoSquareCap(int, XPOINTF const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMiterPoint@CSimplePen@@AEAAHAEBUXPOINTF@@M0000AEAMAEAU2@@Z
    int GetMiterPoint(XPOINTF const &, float, XPOINTF const &, XPOINTF const &, XPOINTF const &, XPOINTF const &, float &, XPOINTF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MiterTo@CSimplePen@@AEAAJW4_RAIL_SIDE@@AEBUXPOINTF@@1H@Z
    long MiterTo(int, XPOINTF const &, XPOINTF const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RoundCorner@CSimplePen@@AEAAJAEBUXPOINTF@@000W4_RAIL_SIDE@@@Z
    long RoundCorner(XPOINTF const &, XPOINTF const &, XPOINTF const &, XPOINTF const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentPoints@CSimplePen@@AEAAJAEBUXPOINTF@@0@Z
    long SetCurrentPoints(XPOINTF const &, XPOINTF const &);
};

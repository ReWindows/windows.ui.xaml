#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CWidener {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWidener@@QEAA@PEBVCMILMatrix@@M@Z
    CWidener(CMILMatrix const *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoSegment@CWidener@@QEBAJAEBVCFigureIterator@@@Z
    long DoSegment(CFigureIterator const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@CWidener@@QEAAJAEBVCPlainPen@@PEAVCWideningSink@@PEBUXRECT_RB@@AEAI@Z
    long Set(CPlainPen const &, CWideningSink *, XRECT_RB const *, unsigned int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSegmentForWidening@CWidener@@QEBAHAEBVCFigureIterator@@AEAUXPOINTF@@PEBVCMILMatrix@@@Z
    int SetSegmentForWidening(CFigureIterator const &, XPOINTF &, CMILMatrix const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?WidenClosedFigure@CWidener@@QEBAJAEAVCFigureIterator@@@Z
    long WidenClosedFigure(CFigureIterator &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?WidenOpenFigure@CWidener@@QEBAJAEAVCFigureIterator@@@Z
    long WidenOpenFigure(CFigureIterator &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?WidenPath@CWidener@@SAJPEAVCCoreServices@@PEBVCMILMatrix@@PEAVCPlainPen@@PEAUXPOINTF@@PEAEIIMPEAVCRasterizerPath@@@Z
    static long WidenPath(CCoreServices *, CMILMatrix const *, CPlainPen *, XPOINTF *, unsigned char *, unsigned int, unsigned int, float, CRasterizerPath *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWidener@@UEAA@XZ
    virtual ~CWidener();
};

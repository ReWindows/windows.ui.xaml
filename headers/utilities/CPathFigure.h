#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CPathFigure {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAcceleratedFigure@CPathFigure@@QEAAJPEAUIPALGeometrySink@@@Z
    long AddAcceleratedFigure(IPALGeometrySink *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToPath@CPathFigure@@QEAAJPEBVCMILMatrix@@@Z
    long AddToPath(CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPathFigure@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CPathFigure@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPathFigure@@EEAA@XZ
    virtual ~CPathFigure();
};

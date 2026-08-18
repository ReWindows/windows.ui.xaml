#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CPathFigureCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAcceleratedFigures@CPathFigureCollection@@QEAAJPEAUIPALGeometrySink@@@Z
    long AddAcceleratedFigures(IPALGeometrySink *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToPath@CPathFigureCollection@@QEAAJPEBVCMILMatrix@@@Z
    long AddToPath(CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPathFigureCollection@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CPathFigureCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PE Export
    // Symbol: ?NeedsOwnerInfo@CPathFigureCollection@@UEAAIXZ
    virtual unsigned int NeedsOwnerInfo();
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CBandGenerateMIP {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CBandGenerateMIP@@SAJPEAUIPALSurface@@PEAUXRECT_WH@@IIPEAIPEAPEAV1@@Z
    static long Create(IPALSurface *, XRECT_WH *, unsigned int, unsigned int, unsigned int *, CBandGenerateMIP * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBandGenerateMIP@@QEAA@XZ
    ~CBandGenerateMIP();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBandGenerateMIP@@AEAA@XZ
    CBandGenerateMIP();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Generate@CBandGenerateMIP@@AEAAXXZ
    void Generate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Run@CBandGenerateMIP@@EEAAJI@Z
    virtual long Run(unsigned int);
};

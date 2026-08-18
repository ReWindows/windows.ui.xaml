#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CXamlIslandRootCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CXamlIslandRootCollection@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CXamlIslandRootCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CXamlIslandRootCollection@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CXamlIslandRootCollection@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CGeneralTransform {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CGeneralTransform@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CGeneralTransform@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformPoints@CGeneralTransform@@UEAAJPEAUXPOINTF@@0I@Z
    virtual long TransformPoints(XPOINTF *, XPOINTF *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformRect@CGeneralTransform@@QEAAJAEBUXRECTF_WH@@PEAU2@@Z
    long TransformRect(XRECTF_WH const &, XRECTF_WH *);
};

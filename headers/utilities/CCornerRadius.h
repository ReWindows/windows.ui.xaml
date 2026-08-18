#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CCornerRadius {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CornerRadiusFromString@CCornerRadius@@SAJIPEBGPEAUXRECTF_CR@@@Z
    static long CornerRadiusFromString(unsigned int, unsigned short const *, XRECTF_CR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCornerRadius@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesAllowMultipleAssociation@CCornerRadius@@UEBA_NXZ
    virtual bool DoesAllowMultipleAssociation() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CCornerRadius@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@CCornerRadius@@SAJPEAUXRECTF_CR@@@Z
    static long Validate(XRECTF_CR *);
};

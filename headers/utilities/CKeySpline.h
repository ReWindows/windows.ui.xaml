#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CKeySpline {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CKeySpline@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSplineProgress@CKeySpline@@QEAAMM@Z
    float GetSplineProgress(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CKeySpline@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitFromString@CKeySpline@@AEAAJIPEBG@Z
    long InitFromString(unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeImpl@CKeySpline@@EEAAJPEBVCDependencyProperty@@PEAVCDependencyObject@@@Z
    virtual long InvokeImpl(CDependencyProperty const *, CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsControlPointValid@CKeySpline@@CAJPEAUXPOINTF@@@Z
    static long IsControlPointValid(XPOINTF *);
};

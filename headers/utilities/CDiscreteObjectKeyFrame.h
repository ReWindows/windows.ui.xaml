#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CDiscreteObjectKeyFrame {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDiscreteObjectKeyFrame@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveProgress@CDiscreteObjectKeyFrame@@UEAAMM@Z
    virtual float GetEffectiveProgress(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CDiscreteObjectKeyFrame@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDiscrete@CDiscreteObjectKeyFrame@@UEAAIXZ
    virtual unsigned int IsDiscrete();
};

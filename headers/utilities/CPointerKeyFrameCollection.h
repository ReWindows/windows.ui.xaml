#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CPointerKeyFrameCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPointerKeyFrameCollection@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CPointerKeyFrameCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeKeyFrames@CPointerKeyFrameCollection@@UEAAJM@Z
    virtual long InitializeKeyFrames(float);
};

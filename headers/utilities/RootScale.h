#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
class RootScale {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveRasterizationScale@RootScale@@QEAAMXZ
    float GetEffectiveRasterizationScale();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRasterizationScaleForContentRoot@RootScale@@SAMPEAVCContentRoot@@@Z
    static float GetRasterizationScaleForContentRoot(CContentRoot *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRasterizationScaleForElement@RootScale@@SAMPEAVCDependencyObject@@@Z
    static float GetRasterizationScaleForElement(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRasterizationScaleForElementWithFallback@RootScale@@SAMPEAVCDependencyObject@@@Z
    static float GetRasterizationScaleForElementWithFallback(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootScaleForContentRoot@RootScale@@SAPEAV1@PEAVCContentRoot@@@Z
    static RootScale * GetRootScaleForContentRoot(CContentRoot *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootScaleForElement@RootScale@@SAPEAV1@PEAVCDependencyObject@@@Z
    static RootScale * GetRootScaleForElement(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootScaleForElementWithFallback@RootScale@@SAPEAV1@PEAVCDependencyObject@@@Z
    static RootScale * GetRootScaleForElementWithFallback(CDependencyObject *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RootScale@@QEAA@W4RootScaleConfig@@PEAVCCoreServices@@PEAVVisualTree@@@Z
    RootScale(int, CCoreServices *, VisualTree *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHostScale@RootScale@@QEAAJM@Z
    long SetHostScale(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSystemScale@RootScale@@QEAAJM@Z
    long SetSystemScale(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTestOverride@RootScale@@QEAAJM@Z
    long SetTestOverride(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@RootScale@@QEAAJXZ
    long Update();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RootScale@@UEAA@XZ
    virtual ~RootScale();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootVisualScale@RootScale@@IEAAMXZ
    float GetRootVisualScale();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyScale@RootScale@@AEAAJ_N@Z
    long ApplyScale(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScale@RootScale@@AEAAJMW4ScaleKind@1@@Z
    long SetScale(float, int);
};

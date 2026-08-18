#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
class CObjectAnimationUsingKeyFrames {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CObjectAnimationUsingKeyFrames@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CObjectAnimationUsingKeyFrames@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInterestingForAnimationTracking@CObjectAnimationUsingKeyFrames@@UEAAIXZ
    virtual unsigned int IsInterestingForAnimationTracking();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CObjectAnimationUsingKeyFrames@@UEAA@XZ
    virtual ~CObjectAnimationUsingKeyFrames();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeToUsingFromAndBy@CObjectAnimationUsingKeyFrames@@MEAAXXZ
    virtual void ComputeToUsingFromAndBy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationBaseValue@CObjectAnimationUsingKeyFrames@@MEAAJXZ
    virtual long GetAnimationBaseValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InterpolateCurrentValue@CObjectAnimationUsingKeyFrames@@MEAAXM@Z
    virtual void InterpolateCurrentValue(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostInterpolateValues@CObjectAnimationUsingKeyFrames@@MEAAXXZ
    virtual void PostInterpolateValues();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValueAssign@CObjectAnimationUsingKeyFrames@@MEAAJW4AssignmentOperand@CAnimation@@AEBVCValue@@@Z
    virtual long ValueAssign(int, CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValueAssign@CObjectAnimationUsingKeyFrames@@MEAAJW4AssignmentOperand@CAnimation@@0@Z
    virtual long ValueAssign(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValueAssign@CObjectAnimationUsingKeyFrames@@MEAAJAEAVCValue@@W4AssignmentOperand@CAnimation@@@Z
    virtual long ValueAssign(CValue &, int);
};

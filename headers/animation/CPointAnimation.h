#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class CPointAnimation {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CPointAnimation@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPointAnimation@@IEAA@PEAVCCoreServices@@@Z
    CPointAnimation(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeToUsingFromAndBy@CPointAnimation@@MEAAXXZ
    virtual void ComputeToUsingFromAndBy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationBaseValue@CPointAnimation@@MEAAJXZ
    virtual long GetAnimationBaseValue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInternalOperand@CPointAnimation@@IEAAPEAUXPOINTF@@W4AssignmentOperand@CAnimation@@@Z
    XPOINTF * GetInternalOperand(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InterpolateCurrentValue@CPointAnimation@@MEAAXM@Z
    virtual void InterpolateCurrentValue(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValueAssign@CPointAnimation@@MEAAJW4AssignmentOperand@CAnimation@@AEBVCValue@@@Z
    virtual long ValueAssign(int, CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValueAssign@CPointAnimation@@MEAAJAEAVCValue@@W4AssignmentOperand@CAnimation@@@Z
    virtual long ValueAssign(CValue &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValueAssign@CPointAnimation@@MEAAJW4AssignmentOperand@CAnimation@@0@Z
    virtual long ValueAssign(int, int);
};

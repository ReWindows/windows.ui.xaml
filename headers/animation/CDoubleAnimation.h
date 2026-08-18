#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 29 member(s).
class CDoubleAnimation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachDCompAnimationInstancesToTarget@CDoubleAnimation@@UEAAXXZ
    virtual void AttachDCompAnimationInstancesToTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachDCompAnimations@CDoubleAnimation@@UEAAXXZ
    virtual void AttachDCompAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDoubleAnimation@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachDCompAnimationInstancesFromTarget@CDoubleAnimation@@UEAAXXZ
    virtual void DetachDCompAnimationInstancesFromTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachDCompAnimationsForInactiveTimelines@CDoubleAnimation@@UEAAXXZ
    virtual void DetachDCompAnimationsForInactiveTimelines();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CDoubleAnimation@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDCompAnimationInstances@CDoubleAnimation@@UEAAXPEAVDCompAnimationConversionContextDC@@@Z
    virtual void MakeDCompAnimationInstances(DCompAnimationConversionContextDC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PauseDCompAnimationsOnSuspend@CDoubleAnimation@@UEAAXXZ
    virtual void PauseDCompAnimationsOnSuspend();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCompResources@CDoubleAnimation@@UEAAXXZ
    virtual void ReleaseDCompResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolvePendingDCompAnimationOperations@CDoubleAnimation@@UEAAXXZ
    virtual void ResolvePendingDCompAnimationOperations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeDCompAnimationsOnResume@CDoubleAnimation@@UEAAXXZ
    virtual void ResumeDCompAnimationsOnResume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SeekDCompAnimationInstances@CDoubleAnimation@@UEAAXN@Z
    virtual void SeekDCompAnimationInstances(double);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDoubleAnimation@@UEAA@XZ
    virtual ~CDoubleAnimation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDCompAnimationTimeEvent@CDoubleAnimation@@MEAAXNPEAX@Z
    virtual void AddDCompAnimationTimeEvent(double, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyDCompAnimationInstanceToTarget@CDoubleAnimation@@IEAAXPEAUIUnknown@@@Z
    void ApplyDCompAnimationInstanceToTarget(IUnknown *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDoubleAnimation@@IEAA@PEAVCCoreServices@@@Z
    CDoubleAnimation(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeToUsingFromAndBy@CDoubleAnimation@@MEAAXXZ
    virtual void ComputeToUsingFromAndBy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationBaseValue@CDoubleAnimation@@MEAAJXZ
    virtual long GetAnimationBaseValue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasLegacyDCompAnimation@CDoubleAnimation@@MEAA_NXZ
    virtual bool HasLegacyDCompAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InterpolateCurrentValue@CDoubleAnimation@@MEAAXM@Z
    virtual void InterpolateCurrentValue(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDCompAnimations@CDoubleAnimation@@MEAAXPEAVDCompAnimationConversionContextDC@@@Z
    virtual void MakeDCompAnimations(DCompAnimationConversionContextDC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeWUCAnimation@CDoubleAnimation@@MEAAXPEAVDCompAnimationConversionContextWUC@@MM@Z
    virtual void MakeWUCAnimation(DCompAnimationConversionContextWUC *, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadLegacyDCompAnimationValueVirtual@CDoubleAnimation@@MEAA_NXZ
    virtual bool ReadLegacyDCompAnimationValueVirtual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValueAssign@CDoubleAnimation@@MEAAJW4AssignmentOperand@CAnimation@@AEBVCValue@@@Z
    virtual long ValueAssign(int, CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValueAssign@CDoubleAnimation@@MEAAJW4AssignmentOperand@CAnimation@@0@Z
    virtual long ValueAssign(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValueAssign@CDoubleAnimation@@MEAAJAEAVCValue@@W4AssignmentOperand@CAnimation@@@Z
    virtual long ValueAssign(CValue &, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearLegacyDCompAnimationInstance@CDoubleAnimation@@AEAAXXZ
    void ClearLegacyDCompAnimationInstance();
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 33 member(s).
class CColorAnimation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachDCompAnimationInstancesToTarget@CColorAnimation@@UEAAXXZ
    virtual void AttachDCompAnimationInstancesToTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachDCompAnimations@CColorAnimation@@UEAAXXZ
    virtual void AttachDCompAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CColorAnimation@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachDCompAnimationInstancesFromTarget@CColorAnimation@@UEAAXXZ
    virtual void DetachDCompAnimationInstancesFromTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachDCompAnimationsForInactiveTimelines@CColorAnimation@@UEAAXXZ
    virtual void DetachDCompAnimationsForInactiveTimelines();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CColorAnimation@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDCompAnimationInstances@CColorAnimation@@UEAAXPEAVDCompAnimationConversionContextDC@@@Z
    virtual void MakeDCompAnimationInstances(DCompAnimationConversionContextDC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MustUseLegacyDCompAnimationsInRS1@CColorAnimation@@UEAA_NXZ
    virtual bool MustUseLegacyDCompAnimationsInRS1();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PauseDCompAnimationsOnSuspend@CColorAnimation@@UEAAXXZ
    virtual void PauseDCompAnimationsOnSuspend();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCompResources@CColorAnimation@@UEAAXXZ
    virtual void ReleaseDCompResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolvePendingDCompAnimationOperations@CColorAnimation@@UEAAXXZ
    virtual void ResolvePendingDCompAnimationOperations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeDCompAnimationsOnResume@CColorAnimation@@UEAAXXZ
    virtual void ResumeDCompAnimationsOnResume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SeekDCompAnimationInstances@CColorAnimation@@UEAAXN@Z
    virtual void SeekDCompAnimationInstances(double);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CColorAnimation@@UEAA@XZ
    virtual ~CColorAnimation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDCompAnimationTimeEvent@CColorAnimation@@MEAAXNPEAX@Z
    virtual void AddDCompAnimationTimeEvent(double, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyDCompAnimationInstanceToTarget@CColorAnimation@@IEAAXPEAUIUnknown@@@Z
    void ApplyDCompAnimationInstanceToTarget(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyDCompAnimationInstancesToTarget@CColorAnimation@@IEAAXPEAUIDCompositionAnimation@@000@Z
    void ApplyDCompAnimationInstancesToTarget(IDCompositionAnimation *, IDCompositionAnimation *, IDCompositionAnimation *, IDCompositionAnimation *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CColorAnimation@@IEAA@PEAVCCoreServices@@@Z
    CColorAnimation(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeToUsingFromAndBy@CColorAnimation@@MEAAXXZ
    virtual void ComputeToUsingFromAndBy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationBaseValue@CColorAnimation@@MEAAJXZ
    virtual long GetAnimationBaseValue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInternalOperand@CColorAnimation@@IEAAPEAIW4AssignmentOperand@CAnimation@@@Z
    unsigned int * GetInternalOperand(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasLegacyDCompAnimation@CColorAnimation@@MEAA_NXZ
    virtual bool HasLegacyDCompAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InterpolateCurrentValue@CColorAnimation@@MEAAXM@Z
    virtual void InterpolateCurrentValue(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDCompAnimations@CColorAnimation@@MEAAXPEAVDCompAnimationConversionContextDC@@@Z
    virtual void MakeDCompAnimations(DCompAnimationConversionContextDC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeLegacyDCompAnimations@CColorAnimation@@MEAAXPEAVDCompAnimationConversionContextDC@@@Z
    virtual void MakeLegacyDCompAnimations(DCompAnimationConversionContextDC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeWUCAnimation@CColorAnimation@@MEAAXPEAVDCompAnimationConversionContextWUC@@MM@Z
    virtual void MakeWUCAnimation(DCompAnimationConversionContextWUC *, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadLegacyDCompAnimationValueVirtual@CColorAnimation@@MEAA_NXZ
    virtual bool ReadLegacyDCompAnimationValueVirtual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValueAssign@CColorAnimation@@MEAAJW4AssignmentOperand@CAnimation@@AEBVCValue@@@Z
    virtual long ValueAssign(int, CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValueAssign@CColorAnimation@@MEAAJW4AssignmentOperand@CAnimation@@0@Z
    virtual long ValueAssign(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValueAssign@CColorAnimation@@MEAAJAEAVCValue@@W4AssignmentOperand@CAnimation@@@Z
    virtual long ValueAssign(CValue &, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearLegacyDCompAnimationInstance@CColorAnimation@@AEAAXXZ
    void ClearLegacyDCompAnimationInstance();
};

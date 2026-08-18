#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 31 member(s).
class CParallelTimeline {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPendingDCompPause@CParallelTimeline@@UEAAXXZ
    virtual void AddPendingDCompPause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPendingDCompResume@CParallelTimeline@@UEAAXXZ
    virtual void AddPendingDCompResume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPendingDCompSeek@CParallelTimeline@@UEAAXN@Z
    virtual void AddPendingDCompSeek(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationTrackingCollectInfoNoRef@CParallelTimeline@@UEAAXPEAPEAVCDependencyObject@@0@Z
    virtual void AnimationTrackingCollectInfoNoRef(CDependencyObject * *, CDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachDCompAnimations@CParallelTimeline@@UEAAXXZ
    virtual void AttachDCompAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPendingDCompAnimationOperationsRecursive@CParallelTimeline@@UEAAXXZ
    virtual void ClearPendingDCompAnimationOperationsRecursive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachDCompAnimationInstancesFromTarget@CParallelTimeline@@UEAAXXZ
    virtual void DetachDCompAnimationInstancesFromTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachDCompAnimationsForInactiveTimelines@CParallelTimeline@@UEAAXXZ
    virtual void DetachDCompAnimationsForInactiveTimelines();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachDCompCompletedHandlerOnStop@CParallelTimeline@@UEAAXXZ
    virtual void DetachDCompCompletedHandlerOnStop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireCompletedEvent@CParallelTimeline@@UEAAJXZ
    virtual long FireCompletedEvent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNaturalDuration@CParallelTimeline@@UEAAXPEAW4DurationType@DirectUI@@PEAM@Z
    virtual void GetNaturalDuration(int *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CParallelTimeline@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInterestingForAnimationTracking@CParallelTimeline@@UEAAIXZ
    virtual unsigned int IsInterestingForAnimationTracking();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDCompAnimationInstances@CParallelTimeline@@UEAAXPEAVDCompAnimationConversionContextDC@@@Z
    virtual void MakeDCompAnimationInstances(DCompAnimationConversionContextDC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PauseDCompAnimationsOnSuspend@CParallelTimeline@@UEAAXXZ
    virtual void PauseDCompAnimationsOnSuspend();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadLegacyDCompAnimationValue@CParallelTimeline@@UEAAXXZ
    virtual void ReadLegacyDCompAnimationValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCompResources@CParallelTimeline@@UEAAXXZ
    virtual void ReleaseDCompResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolvePendingDCompAnimationOperations@CParallelTimeline@@UEAAXXZ
    virtual void ResolvePendingDCompAnimationOperations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolvePendingDCompAnimationOperationsRecursive@CParallelTimeline@@UEAAXXZ
    virtual void ResolvePendingDCompAnimationOperationsRecursive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeDCompAnimationsOnResume@CParallelTimeline@@UEAAXXZ
    virtual void ResumeDCompAnimationsOnResume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SeekDCompAnimationInstances@CParallelTimeline@@UEAAXN@Z
    virtual void SeekDCompAnimationInstances(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAnimation@CParallelTimeline@@UEAAJAEBUComputeStateParams@@AEAU2@NW4DurationType@DirectUI@@MAEBVCOptionalDouble@@PEAI@Z
    virtual long UpdateAnimation(ComputeStateParams const &, ComputeStateParams &, double, int, float, COptionalDouble const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsWaitingForDCompAnimationCompleted@CParallelTimeline@@UEAAX_N@Z
    virtual void UpdateIsWaitingForDCompAnimationCompleted(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CParallelTimeline@@UEAA@XZ
    virtual ~CParallelTimeline();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CParallelTimeline@@IEAA@PEAVCCoreServices@@@Z
    CParallelTimeline(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDCompAnimations@CParallelTimeline@@MEAAXPEAVDCompAnimationConversionContextDC@@@Z
    virtual void MakeDCompAnimations(DCompAnimationConversionContextDC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeWUCAnimationShared@CParallelTimeline@@MEAAXPEAVDCompAnimationConversionContextWUC@@_NM@Z
    virtual void MakeWUCAnimationShared(DCompAnimationConversionContextWUC *, bool, float);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDummyDCompAnimationForCompletedEvent@CParallelTimeline@@AEAAXPEAVDCompAnimationConversionContextDC@@N@Z
    void AddDummyDCompAnimationForCompletedEvent(DCompAnimationConversionContextDC *, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearLegacyDCompAnimationInstance@CParallelTimeline@@AEAAXXZ
    void ClearLegacyDCompAnimationInstance();
};

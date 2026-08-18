#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 90 member(s).
class CTimeline {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDCompAnimationTimeEvent@CTimeline@@UEAAXNPEAX@Z
    virtual void AddDCompAnimationTimeEvent(double, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEventListener@CTimeline@@UEAAJUEventHandle@@PEAVCValue@@H1_N@Z
    virtual long AddEventListener(EventHandle, CValue *, int, CValue *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPendingDCompPause@CTimeline@@UEAAXXZ
    virtual void AddPendingDCompPause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPendingDCompResume@CTimeline@@UEAAXXZ
    virtual void AddPendingDCompResume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPendingDCompSeek@CTimeline@@UEAAXN@Z
    virtual void AddPendingDCompSeek(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationTrackingCollectInfoNoRef@CTimeline@@UEAAXPEAPEAVCDependencyObject@@0@Z
    virtual void AnimationTrackingCollectInfoNoRef(CDependencyObject * *, CDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachDCompAnimationInstancesToTarget@CTimeline@@UEAAXXZ
    virtual void AttachDCompAnimationInstancesToTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachDCompAnimations@CTimeline@@UEAAXXZ
    virtual void AttachDCompAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanBeModified@CTimeline@@QEBA_NXZ
    bool CanBeModified() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCanBeModified@CTimeline@@QEAAJXZ
    long CheckCanBeModified();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPendingDCompAnimationOperationsRecursive@CTimeline@@UEAAXXZ
    virtual void ClearPendingDCompAnimationOperationsRecursive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTimeline@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachDCompAnimationInstancesFromTarget@CTimeline@@UEAAXXZ
    virtual void DetachDCompAnimationInstancesFromTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachDCompAnimationsForInactiveTimelines@CTimeline@@UEAAXXZ
    virtual void DetachDCompAnimationsForInactiveTimelines();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachDCompCompletedHandlerOnStop@CTimeline@@UEAAXXZ
    virtual void DetachDCompCompletedHandlerOnStop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureIndependentStartDelta@CTimeline@@UEAAXN@Z
    virtual void EnsureIndependentStartDelta(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalizeIteration@CTimeline@@UEAAJXZ
    virtual long FinalizeIteration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireCompletedEvent@CTimeline@@UEAAJXZ
    virtual long FireCompletedEvent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDurationForProgress@CTimeline@@UEAAXPEAW4DurationType@DirectUI@@PEAM@Z
    virtual void GetDurationForProgress(int *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNaturalDuration@CTimeline@@UEAAXPEAW4DurationType@DirectUI@@PEAM@Z
    virtual void GetNaturalDuration(int *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootTimingParent@CTimeline@@QEBAPEAV1@XZ
    CTimeline * GetRootTimingParent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetObject@CTimeline@@QEBA?AV?$xref_ptr@VCDependencyObject@@@@XZ
    WindissectOpaque GetTargetObject() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTemplatedParent@CTimeline@@UEAAPEAVCDependencyObject@@XZ
    virtual CDependencyObject * GetTemplatedParent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimingParent@CTimeline@@QEBAPEAV1@XZ
    CTimeline * GetTimingParent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTimeline@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CTimeline@@UEAAJXZ
    virtual long InitInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeIteration@CTimeline@@UEAAXXZ
    virtual void InitializeIteration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnimation@CTimeline@@UEAAIXZ
    virtual unsigned int IsAnimation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDurationForProgressDifferent@CTimeline@@UEBAIXZ
    virtual unsigned int IsDurationForProgressDifferent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFinite@CTimeline@@UEAAIXZ
    virtual unsigned int IsFinite();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFiringEvents@CTimeline@@UEAAHXZ
    virtual int IsFiringEvents();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInActiveState@CTimeline@@UEBAIXZ
    virtual unsigned int IsInActiveState() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInStoppedState@CTimeline@@UEAAIXZ
    virtual unsigned int IsInStoppedState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInterestingForAnimationTracking@CTimeline@@UEAAIXZ
    virtual unsigned int IsInterestingForAnimationTracking();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTopLevelTimeline@CTimeline@@QEAA_NXZ
    bool IsTopLevelTimeline();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDCompAnimationInstances@CTimeline@@UEAAXPEAVDCompAnimationConversionContextDC@@@Z
    virtual void MakeDCompAnimationInstances(DCompAnimationConversionContextDC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDCompAnimationsWithProperties@CTimeline@@QEAAXPEAVDCompAnimationConversionContextDC@@@Z
    void MakeDCompAnimationsWithProperties(DCompAnimationConversionContextDC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeWUCAnimationsWithProperties@CTimeline@@QEAAXPEAVDCompAnimationConversionContextWUC@@@Z
    void MakeWUCAnimationsWithProperties(DCompAnimationConversionContextWUC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkForceDCompAnimationDirtyInSubtree@CTimeline@@QEAAXXZ
    void MarkForceDCompAnimationDirtyInSubtree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MustUseLegacyDCompAnimationsInRS1@CTimeline@@UEAA_NXZ
    virtual bool MustUseLegacyDCompAnimationsInRS1();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWPropagateDirtyFlag@CTimeline@@UEAAXW4Value@DirtyFlags@@@Z
    virtual void NWPropagateDirtyFlag(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddToTimeManager@CTimeline@@UEAAJXZ
    virtual long OnAddToTimeManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBegin@CTimeline@@UEAAJXZ
    virtual long OnBegin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDCompAnimationCompleted@CTimeline@@QEAAXXZ
    void OnDCompAnimationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManagedPeerCreated@CTimeline@@UEAAJII@Z
    virtual long OnManagedPeerCreated(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoveFromTimeManager@CTimeline@@UEAAJXZ
    virtual long OnRemoveFromTimeManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PauseDCompAnimationsOnSuspend@CTimeline@@UEAAXXZ
    virtual void PauseDCompAnimationsOnSuspend();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadLegacyDCompAnimationValue@CTimeline@@UEAAXXZ
    virtual void ReadLegacyDCompAnimationValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCompResources@CTimeline@@UEAAXXZ
    virtual void ReleaseDCompResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEventListener@CTimeline@@UEAAJUEventHandle@@PEAVCValue@@@Z
    virtual long RemoveEventListener(EventHandle, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestTickForPendingThemeChange@CTimeline@@QEAAJXZ
    long RequestTickForPendingThemeChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveName@CTimeline@@QEAAXAEBVxstring_ptr@@PEAV1@PEAPEAVCDependencyObject@@@Z
    void ResolveName(xstring_ptr const &, CTimeline *, CDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolvePendingDCompAnimationOperations@CTimeline@@UEAAXXZ
    virtual void ResolvePendingDCompAnimationOperations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolvePendingDCompAnimationOperationsRecursive@CTimeline@@UEAAXXZ
    virtual void ResolvePendingDCompAnimationOperationsRecursive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeDCompAnimationsOnResume@CTimeline@@UEAAXXZ
    virtual void ResumeDCompAnimationsOnResume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SeekDCompAnimationInstances@CTimeline@@UEAAXN@Z
    virtual void SeekDCompAnimationInstances(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDCompAnimationDirty@CTimeline@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void SetDCompAnimationDirty(CDependencyObject *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDCompAnimationInSubtreeDirty@CTimeline@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void SetDCompAnimationInSubtreeDirty(CDependencyObject *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForceDCompAnimationSubtreeDirty@CTimeline@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void SetForceDCompAnimationSubtreeDirty(CDependencyObject *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsWaitingForDCompAnimationCompleted@CTimeline@@QEAAX_N@Z
    void SetIsWaitingForDCompAnimationCompleted(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetObject@CTimeline@@QEAAJPEAVCDependencyObject@@@Z
    long SetTargetObject(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTimingParent@CTimeline@@QEAAXPEAV1@@Z
    void SetTimingParent(CTimeline *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CTimeline@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWUCScopedBatch@CTimeline@@QEAAXPEAUICompositionScopedBatch@Composition@UI@Windows@@@Z
    void SetWUCScopedBatch(::Windows::UI::Composition::ICompositionScopedBatch *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldDiscardDCompAnimationOnDetach@CTimeline@@UEAA_NXZ
    virtual bool ShouldDiscardDCompAnimationOnDetach();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRaiseEvent@CTimeline@@UEAAIUEventHandle@@IPEAVCEventArgs@@@Z
    virtual unsigned int ShouldRaiseEvent(EventHandle, unsigned int, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SynchronizeDCompAnimationAfterResume@CTimeline@@UEAAXN@Z
    virtual void SynchronizeDCompAnimationAfterResume(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAnimation@CTimeline@@UEAAJAEBUComputeStateParams@@AEAU2@NW4DurationType@DirectUI@@MAEBVCOptionalDouble@@PEAI@Z
    virtual long UpdateAnimation(ComputeStateParams const &, ComputeStateParams &, double, int, float, COptionalDouble const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsWaitingForDCompAnimationCompleted@CTimeline@@UEAAX_N@Z
    virtual void UpdateIsWaitingForDCompAnimationCompleted(bool);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTimeline@@IEAA@PEAVCCoreServices@@@Z
    CTimeline(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanRequestTicksWhileActive@CTimeline@@MEAA_NXZ
    virtual bool CanRequestTicksWhileActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckHasNoExternalRefs@CTimeline@@IEAAXPEAI@Z
    void CheckHasNoExternalRefs(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeExpirationTime@CTimeline@@IEAAXNW4DurationType@DirectUI@@MMPEAVCOptionalDouble@@@Z
    void ComputeExpirationTime(double, int, float, float, COptionalDouble *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeStateImpl@CTimeline@@MEAAJAEBUComputeStateParams@@AEAU2@PEAI_N2@Z
    virtual long ComputeStateImpl(ComputeStateParams const &, ComputeStateParams &, unsigned int *, bool, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDCompAnimations@CTimeline@@MEAAXPEAVDCompAnimationConversionContextDC@@@Z
    virtual void MakeDCompAnimations(DCompAnimationConversionContextDC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeLegacyDCompAnimations@CTimeline@@MEAAXPEAVDCompAnimationConversionContextDC@@@Z
    virtual void MakeLegacyDCompAnimations(DCompAnimationConversionContextDC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeWUCAnimationShared@CTimeline@@MEAAXPEAVDCompAnimationConversionContextWUC@@_NM@Z
    virtual void MakeWUCAnimationShared(DCompAnimationConversionContextWUC *, bool, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkIsDCompAnimationInstanceDirty@CTimeline@@IEAAXXZ
    void MarkIsDCompAnimationInstanceDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkShouldAttachDCompAnimationInstance@CTimeline@@IEAAXXZ
    void MarkShouldAttachDCompAnimationInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDCompAnimationTimeEventStatic@CTimeline@@KAXPEAX@Z
    static void OnDCompAnimationTimeEventStatic(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseTarget@CTimeline@@IEAAXXZ
    void ReleaseTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestTickToActivePeriodBegin@CTimeline@@IEBAJAEBUComputeStateParams@@0N@Z
    long RequestTickToActivePeriodBegin(ComputeStateParams const &, ComputeStateParams const &, double) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestTickToActivePeriodEnd@CTimeline@@IEBAJAEBUComputeStateParams@@0AEBVCOptionalDouble@@@Z
    long RequestTickToActivePeriodEnd(ComputeStateParams const &, ComputeStateParams const &, COptionalDouble const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveLocalTarget@CTimeline@@MEAAJPEAVCCoreServices@@PEAV1@@Z
    virtual long ResolveLocalTarget(CCoreServices *, CTimeline *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTemplatedParentImpl@CTimeline@@MEAAXPEAVCDependencyObject@@@Z
    virtual void SetTemplatedParentImpl(CDependencyObject *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTimeline@@MEAA@XZ
    virtual ~CTimeline();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeLocalProgressAndTime@CTimeline@@EEAAXNNW4DurationType@DirectUI@@MPEAVCOptionalDouble@@_NPEAI@Z
    virtual void ComputeLocalProgressAndTime(double, double, int, float, COptionalDouble *, bool, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestAdditionalFrame@CTimeline@@AEAAXXZ
    void RequestAdditionalFrame();
};
